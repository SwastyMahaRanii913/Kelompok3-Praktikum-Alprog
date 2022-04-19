#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int pilihan;
int input_data(int pilih);
int proses(int pilih, int *arr, int n, int sum, int *barray);
void restart(void);
void menu();


int validasiinputan(int *select)
{
    char buff[1024];
    char term;
    if (fgets(buff, sizeof(buff), stdin) != NULL && sscanf(buff, "%d %c", select, &term) == 1)
    {
        if (*select < 0 || *select > 3)
        {
            printf("\n\tInput salah silakan masukan angka 1-3 !\n");
            return 0;
        }
        else if (*select == 0)
        {
            system("cls");
            printf("\n	+-------------------------------------------------+	");
			printf("\n\t|                  TEIMA KASIH                    | ");
			printf("\n	+-------------------------------------------------+	\n");
            exit(0);
        }
        return 1;
    }
    printf("\tInputan Salah, Masukkan Angka!\n");
    return 0;
}
int inputval(int *var)
{
    char buff[1024];
    char cek;
    fflush(stdin);
    if (fgets(buff, sizeof(buff), stdin) != NULL)
    {
        if (sscanf(buff, "%d %c", var, &cek) == 1)
        {
            return 1;
        }
    }
    return 0;
}

void validasi(int *var, char *prompt)
{
    while (1)
    {
        printf(prompt);
        if (inputval(var))
            break;
        printf("\tInputan Salah, Masukkan Angka !");
    }
}
int ValidMenu(int *variabel, char *statement)
{
    while (1)
    {
        printf(statement);
        if (validasiinputan(variabel))
            break;
    }
}

int main()
{
    menu();
    ValidMenu(&pilihan, "\n\t\t\t Pilihan:");
    system("cls");
    input_data(pilihan);
    return 0;
}

void printArray(int *arr, int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

float bubbleSort(int *arr, int n)
{
	int i;
    for (i = 0; i < n - 1; i++)
    {
    	int j;
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

float hitung_median(int *arr, int n)
{
    float median = 0;

    if (n % 2 == 0)
    {
        median = (float)(*(arr + ((n - 1) / 2)) + *(arr + (n / 2))) / 2.0;
    }
    else
    {
        median = (float)*(arr + (n / 2));
    }
    return median;
}

int hitung_modus(int *arr, int n, int *barray)
{
    int i, j, t, k = 0, c = 1, nilaimaks = 0, hitung;
    for (i = 0; i < n - 1; i++)
    {
        hitung = 0;
        for (j = i + 1; j < n; j++)
        {
            if (*(arr + i) == *(arr + j))
            {
                hitung++;
            }
        }
        if ((hitung > nilaimaks) && (hitung != 0))
        {
            k = 0;
            nilaimaks = hitung;
            *(barray + k) = *(arr + i);
            k++;
        }
        else if (hitung == nilaimaks)
        {
            *(barray + k) = *(arr + i);
            k++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (*(arr + i) == *(barray + i))
            c++;
    }
    if (c == n)
        printf("\n\tTidak ada modus(nilai berjumlah satu)!\n");
    else
    {
        printf("\n\tMODUS\t= ");
        for (i = 0; i < k; i++)
            printf("%.1f  ", (float)*(barray + i));
    }
}

float hitung_mean(int *arr, int n, int sum)
{
    float nilaiMean;
    int i;
    for (i = 0; i < n; i++)
    {
        sum = sum + *(arr + i);
    }
    nilaiMean = sum / (float)n;
    return nilaiMean;
}

void menu()
{
	printf("\n	+---------------PROGRAM STATISTIKA----------------+\n");
	printf("	|                      MENU                       |\n");	
	printf("	|                   HITUNG DATA                   |\n");
	printf("	+-------------------------------------------------+\n");
	printf("	|                  1. MEDIAN                      |\n");	
	printf("	|                  2. MEAN                        |\n");
	printf("	|                  3. MODUS                       |\n");
	printf("	|                  0. KEMBALI                     |\n");
	printf("	+-------------------------------------------------+\n");
}

void restart(void)
{
    int reset;
    printf("\n\tIngin Mengecek Kembali?\n");
    printf("\t[1]. ULANGI\n");
    printf("\t[2]. MENU\n");
    printf("\t[3]. KELUAR\n");
    ValidMenu(&reset, "\n\tPilihan:");
    if (reset == 1)
    {
        system("cls");
        input_data(pilihan);
    }
    else if (reset == 2)
    {
        system("cls");
        main();
    }
    else if (reset == 3)
    {
        system("cls");   
    	printf("\n	+-------------------------------------------------+	");
		printf("\n\t|                  TEIMA KASIH                    | ");
		printf("\n	+-------------------------------------------------+	\n");
        exit(0);
    }
}

int input_data(int pilih)
{
    int n, sum = 0;
    if (pilih == 1)
    {
    	printf("\n	+-------------------------------------------------+	");
		printf("\n\t|                     MEDIAN                      | ");
		printf("\n	+-------------------------------------------------+	\n");
    }
    else if (pilih == 2)
    {
    	printf("\n	+-------------------------------------------------+	");
		printf("\n\t|                      MEAN                       | ");
		printf("\n	+-------------------------------------------------+	\n");
    }
    else if (pilih == 3)
    {
    	printf("\n	+-------------------------------------------------+	");
		printf("\n\t|                      MODUS                      | ");
		printf("\n	+-------------------------------------------------+	\n");
    }
    validasi(&n, "\n\tMasukan banyak data yang ingin dihitung : ");
    int arr[100] = {0};
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n\tData ke-%d  ", i + 1);
        validasi((arr + i), ":");
    }
    bubbleSort(arr, n);
    printf("\n\tData yang diinputkan :");
    printArray(arr, n);
    int barray[100] = {0};
    proses(pilih, arr, n, sum, barray);
}

int proses(int pilih, int *arr, int n, int sum, int *barray)
{
    if (pilih == 1)
    {
    	printf("\n	+-------------------------------------------------+	");
		printf("\n\t|                     MEDIAN                      | ");
		printf("\n	+-------------------------------------------------+	\n");
        printf("\n\tMEDIANNYA ADALAH : %.2f\n", hitung_median(arr, n));
        restart();
    }
    else if (pilih == 2)
    {
    	printf("\n	+-------------------------------------------------+	");
		printf("\n\t|                      MEAN                       | ");
		printf("\n	+-------------------------------------------------+	\n");
        printf("\n\tMEANNYA ADALAH : %.2f\n", hitung_mean(arr, n, sum));
        restart();
    }
    else if (pilih == 3)
    {
    	printf("\n	+-------------------------------------------------+	");
		printf("\n\t|                      MODUS                      | ");
		printf("\n	+-------------------------------------------------+	\n");
        hitung_modus(arr, n, barray);
        restart();
    }
}
