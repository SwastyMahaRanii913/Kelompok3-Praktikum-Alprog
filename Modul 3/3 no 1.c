#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quit(){
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n+-----------------------------------------------------------------------------+");
	printf("\n|                               THANK YOU !                                   |");
    printf("\n+-----------------------------------------------------------------------------+");
    printf("\n");
    exit(0);
}

void randomNum(int arr[], int n) {
    int i;
    srand(0);
    for (i = 0; i < n; i++) {
        arr[i] = rand();
    }
}

void copyNum(int source[], int target[], int n) {
    int i;
    for (i = 0; i < n; i++)
        target[i] = source[i];
}

void print(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("- Angka ke-%d : %d", i + 1, arr[i]);
        printf("\n");
    }
}

int clear(){
	while(getchar() != '\n');
	return 1;
}

int pvt(int arr[], int low, int high) {
    int pivot = arr[high];
    int temp;
    int i = (low - 1);
    int j;
    for (j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    int pivot = pvt(arr, low, high);
    if (low < high) {
        pivot = pvt(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

void insertionSort(int arr[], int n) {
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = arr[i];

        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sort(){
    clock_t start, end;
    double durasiSort1, durasiSort2, durasiSort3;
    char pilihanSort, karakterSort;
    int n;

    system("cls");
	printf("+-----------------------------------------------------------------------------+");
	printf("\n|                               PROGRAM SORTING                               |");
    printf("\n+-----------------------------------------------------------------------------+");
    printf("\n|   Pilih Banyak Data :                                                       |");
    printf("\n|                                                                             |");
	printf("\n|      1. 1000 data                                                           |");
	printf("\n|      2. 16000 data                                                          |");
	printf("\n|      3. 64000 data                                                          |");
	printf("\n|      4. Kembali                                                             |");
	printf("\n|      5. Keluar                                                              |");
	printf("\n+-----------------------------------------------------------------------------+"); 
    while(1){
        printf("\n\nMasukkan pilihan: ");
        if (scanf("%c%c", & pilihanSort, & karakterSort) != 2 || karakterSort != '\n'){
            printf("\nInput Invalid! Mohon hanya memasukkan angka/bilangan bulat 1 - 5 !\n");
            fflush(stdin);
        } 
		else {
            if (pilihanSort == '1') {
                n = 1000;
                break;
            } else if (pilihanSort == '2') {
                n = 16000;
                break;
            } else if (pilihanSort == '3') {
                n = 64000;
                break;
            } else if (pilihanSort == '4') {
                main();
                break;
            } else if (pilihanSort == '5') {
                quit();
                break;
            } else {
                printf("\nInput Invalid! Mohon hanya memasukkan angka/bilangan bulat 1 -5 !\n");
            }
        }
    }
    int arr[n];
    int arr2[n];
    int arr3[n];
    randomNum(arr, n);
    printf("Array %d random sebelum di sort :\n", n);
    print(arr, n);
    copyNum(arr, arr2, n);
    copyNum(arr, arr3, n);

    //Insertion Sort
    start = clock();
    insertionSort(arr, n);
    end = clock();
    durasiSort1 = (double)(end - start) / CLOCKS_PER_SEC;

    //Bubble Sort
    start = clock();
    bubbleSort(arr2, n);
    end = clock();
    durasiSort2 = (double)(end - start) / CLOCKS_PER_SEC;

    //Quick Sort
    start = clock();
    quickSort(arr3, 0, n - 1);
    end = clock();
    durasiSort3 = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\n===============================================================================\n");
    printf("\nArray %d data random sesudah di sort :\n", n);
    print(arr, n);
    printf("\n===============================================================================\n");
	printf("\nInsertion Sort Membutuhkan	: %f Detik Untuk Mensortir Data\n", durasiSort1);
	printf("\nBubble Sort Membutuhkan		: %f Detik Untuk Mensortir Data\n", durasiSort2);
	printf("\nQuick Sort Membutuhkan		: %f Detik Untuk Mensortir Data\n", durasiSort3);
	printf("\n===============================================================================\n");
	if(durasiSort1 == durasiSort2 && durasiSort1 <= durasiSort3){
		printf("\nHasil : Insertion Sort dan Bubble Sort Lebih Cepat Dari Quick Sort\n");
	}
	else if(durasiSort1 == durasiSort3 && durasiSort1 <= durasiSort2){
		printf("\nHasil : Insertion Sort dan Quick Sort Lebih Cepat Dari Bubble Sort\n");
	}
	else if(durasiSort2 == durasiSort3 && durasiSort2 <= durasiSort1){
		printf("\nHasil : Bubble Sort dan Quick Sort Lebih Cepat Dari Insertion Sort\n");
	}
	else if(durasiSort1 <= durasiSort2 && durasiSort1 <= durasiSort3){
		printf("\nHasil : Insertion Sort Lebih Cepat Dari Bubble Sort dan Quick Sort\n");
	}
	else if(durasiSort2 <= durasiSort1 && durasiSort2 <= durasiSort3){
		printf("\nHasil : Bubble Sort Lebih Cepat Dari Insertion Sort dan Quick Sort\n");
	}
	else if(durasiSort3 <= durasiSort1 && durasiSort3 <= durasiSort2){
		printf("\nHasil : Quick Sort Lebih Cepat Dari Insertion Sort dan Bubble Sort\n");
	}
	else{
		printf("\nHasil : Semuanya Setara\n");
	}
	printf("\n[R] Ulang		[M] Menu		[Q] Quit\n");
	printf("\n===============================================================================\n");
	
	while(1){
		printf("\nMasukkan pilihan: ");
		if(((scanf(" %c%c", &pilihanSort, &karakterSort)) != 2 || karakterSort != '\n') && clear()){
			printf("Input Invalid!\n");
			printf("\n[R] Ulang		[M] Menu		[Q] Quit\n\n");
 		}
		else{
			if(pilihanSort == 'R' || pilihanSort == 'r'){
				sort();
			}
			else if(pilihanSort == 'M' || pilihanSort == 'm'){
				main();
			}
			else if(pilihanSort == 'Q' || pilihanSort == 'q'){
				quit();
				exit(0);
			}
			else{
				printf("Input Invalid!\n");
				printf("\n[R] Ulang		[M] Menu		[Q] Quit\n");
			}
		}	
	}
}

double sequentialSearch(int arr[], int n, int angkaDicari) {
    clock_t start, end;
    double durasiSearch;
    int i, counter = 0;

    start = clock();
    for (i = 0; i < n; i++) {
        if (arr[i] == angkaDicari) {
            counter++;
        }
        printf("- Angka ke-%d : %d", i+1, arr[i]);
        printf("\n");
    }
    end = clock();
    durasiSearch = (double)(end - start) / CLOCKS_PER_SEC;

    if (counter == 0) {
        printf("\n===============================================================================\n");
        printf("\nTidak Ada Angka Yang Sesuai!");
    } 
	else {
        int indexAngkaDicari[counter];
        counter = 0;

        for (i = 0; i < n; i++) {
            if (arr[i] == angkaDicari) {
                indexAngkaDicari[counter] = i;
                counter++;
            }
        }

        printf("\n===============================================================================\n");
        printf("\n- Sequential Search");
		printf("\n	Angka Ditemukan Pada Index :");
        for (i = 0; i < counter; i++) {
            if (i == 0 && i == counter - 1) {
                printf(" %d.", indexAngkaDicari[i]);
            }
			else {
                if (i == counter - 1) {
                    printf(" dan %d.", indexAngkaDicari[i]);
                } else {
                    printf(" %d,", indexAngkaDicari[i]);
                }
            }
        }
    }
    return durasiSearch;
}

double binarySearch(int arr[], int low, int high, int angkaDicari) {
    clock_t start, end;
    double durasiSearch;
    int i, counter = 0;

    start = clock();
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == angkaDicari) {
            counter++;
            for (i = mid + 1; i < high + 1 && arr[i] == angkaDicari; i++) {
                counter++;
            }
            for (i = mid - 1; i < high + 1 && arr[i] == angkaDicari; i++) {
                counter++;
            }
            break;
        } 
		else if (arr[mid] > angkaDicari) {
            high = mid - 1;
        } 
		else {
            low = mid + 1;
        }
    }
    end = clock();
    durasiSearch = (double)(end - start) / CLOCKS_PER_SEC;

    if (counter == 0) {
        printf("\n\nTidak Ada Angka Yang Sesuai!");
    } 
	else {
        int indexAngkaDicari[counter];
        counter = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == angkaDicari) {
                indexAngkaDicari[counter] = mid;
                counter++;
                for (i = mid + 1; i < high + 1 && arr[i] == angkaDicari; i++) {
                    indexAngkaDicari[counter] = i;
                    counter++;
                }
                for (i = mid - 1; i > 0 && arr[i] == angkaDicari; i--) {
                    indexAngkaDicari[counter] = i;
                    counter++;
                }
                break;
            } else if (arr[mid] > angkaDicari) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        printf("\n\n- Binary Search :");
		printf("\n	Angka Ditemukan Pada Index :");
        insertionSort(indexAngkaDicari, counter);
        for (i = 0; i < counter; i++) {
            if (i == 0 && i == counter - 1) {
                printf(" %d.", indexAngkaDicari[i]);
            } else {
                if (i == counter - 1) {
                    printf(" dan %d.", indexAngkaDicari[i]);
                } else {
                    printf("%d, ", indexAngkaDicari[i]);
                }
            }
        }
    }
    return durasiSearch;
}

int search() {
    clock_t start, end;
    double durasiSearch1, durasiSearch2;
    int i;
    int n;
    int menu;
    int angkaDicari;
    char pilihanSearch, karakterSearch;

    system("cls");
	printf("+-----------------------------------------------------------------------------+");
	printf("\n|                             PROGRAM SEARCHING                               |");
    printf("\n+-----------------------------------------------------------------------------+");
    printf("\n|   Pilih Banyak Data :                                                       |");
    printf("\n|                                                                             |");
	printf("\n|      1. 1000 data                                                           |");
	printf("\n|      2. 16000 data                                                          |");
	printf("\n|      3. 64000 data                                                          |");
	printf("\n|      4. Kembali                                                             |");
	printf("\n|      5. Keluar                                                              |");
	printf("\n+-----------------------------------------------------------------------------+"); 
    while(1){
        printf("\n\nMasukkan pilihan: ");
        if(((scanf(" %c%c", &pilihanSearch, &karakterSearch)) != 2 || karakterSearch != '\n') && clear()){
            printf("\nInput Invalid! Mohon hanya memasukkan angka/bilangan bulat 1- 5 !\n");
            fflush(stdin);
        } 
		else {
            if (pilihanSearch == '1') {
                n = 1000;
                break;
            } 
			else if (pilihanSearch == '2') {
                n = 16000;
                break;
            } 
			else if (pilihanSearch == '3') {
                n = 64000;
                break;
            } 
			else if (pilihanSearch == '4') {
                main();
                break;
            } 
			else if (pilihanSearch == '5') {
                quit();
                break;
            } 
			else {
                printf("\nInput Invalid! Mohon hanya memasukkan angka/bilangan bulat 1 - 5 !\n");
            }
        }
    }
    int arr[n];
    int arr2[n];
    randomNum(arr, n);
    print(arr, n);
    
    while(1){
        printf("\nMasukkan Angka Yang Ingin Dicari: ");
        if(((scanf("%d%c", &angkaDicari, &karakterSearch)) != 2 || karakterSearch != '\n') && clear()){
            printf("\nInput Invalid! Mohon Masukkan Angka\n");
            fflush(stdin);;
        }
		else {
            if (angkaDicari < 0) {
                printf("Input Invalid! Angka tidak boleh dibawah '0'");
            } 
			else {
                break;
            }
        }
    }

    insertionSort(arr, n);
    durasiSearch1 = sequentialSearch(arr, n, angkaDicari);
    durasiSearch2 = binarySearch(arr, 0, n - 1, angkaDicari);

    printf("\n\n===============================================================================\n");
	printf("\nSequential Search Membutuhkan	: %f Detik Untuk Mencari Data\n", durasiSearch1);
	printf("\nBinary Search Membutuhkan	: %f Detik Untuk Mencari Data\n", durasiSearch2);
	printf("\n===============================================================================\n");
	if(durasiSearch1 <= durasiSearch2){
		printf("\nHasil	: Sequential Search Lebih Cepat Dari Binary Search\n");
	}
	else if(durasiSearch1 >= durasiSearch2){
		printf("\nHasil	: Binary Search Lebih Cepat Dari Sequential Search\n");
	}
	else{
		printf("\nHasil	: Sequential Search Sama Cepat Dengan Binary Search\n");
	}
	printf("\n[R] Ulang		[M] Menu		[Q] Quit\n");
	printf("\n===============================================================================\n");
	
	while(1){
		printf("\nMasukkan pilihan: ");
		if(((scanf(" %c%c", &pilihanSearch, &karakterSearch)) != 2 || karakterSearch != '\n') && clear()){
			printf("Input Invalid!\n");
			printf("\n[R] Ulang		[M] Menu		[Q] Quit\n");
		}
		else{
			if(pilihanSearch == 'R' || pilihanSearch == 'r'){
				search();
			}
			else if(pilihanSearch == 'M' || pilihanSearch == 'm'){
				main();
			}
			else if(pilihanSearch == 'Q' || pilihanSearch == 'q'){
				quit();
			}
			else{
				printf("Input invalid!\n");
				printf("\n[R] Ulang		[M] Menu		[Q] Quit\n");
			}
		}
	}
}

int main() {
    char pilihan, karakter;
    system("cls");
	printf("+-----------------------------------------------------------------------------+");
	printf("\n|                         PROGRAM SORTING & SEARCHING                         |");
    printf("\n+-----------------------------------------------------------------------------+");
    printf("\n|   Pilih Menu Program :                                                      |");
    printf("\n|                                                                             |");
	printf("\n|      1. Sorting                                                             |");
	printf("\n|      2. Searching                                                           |");
	printf("\n|      3. Keluar                                                              |");
	printf("\n+-----------------------------------------------------------------------------+"); 
    while(1){
        printf("\n\nMasukkan pilihan: ");
        if (scanf("%c%c", & pilihan, & karakter) != 2 || karakter != '\n') {
            printf("\nInput Invalid! Mohon hanya memasukkan angka/bilangan bulat 1 - 3 !\n");
            fflush(stdin);
        } else {
            if (pilihan == '1') {
                sort();
                break;
            } else if (pilihan == '2') {
                search();
                break;
            } else if (pilihan == '3') {
                quit();
                break;
            } else {
                printf("\nInput Invalid! Mohon hanya memasukkan angka/bilangan bulat 1 - 3 !\n");
            }
        }
    }
}
