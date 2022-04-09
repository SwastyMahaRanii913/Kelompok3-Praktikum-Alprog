#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <unistd.h>

#define NILAI1 1000 
#define NILAI2 16000 
#define NILAI3 64000

int valid();
void keluar();
void seribu();
void enambelasribu();
void enamempatribu();


// Deklarasi
clock_t waktu; 
double durasi[2];
int x, y, n, temp;
int pilihan, ulang;


int valid(){
	int bilangan;
    char huruf;
    scanf("%d%c", &bilangan,&huruf);
    if(huruf != '\n' || bilangan<0){
        printf("\n\n Tidak Tersedia !!\n");
        printf(" Masukan Ulang : ");
        fflush(stdin);
        valid();
    }
	else{
        return bilangan;
    }
}

void keluar(){
	printf("\t==============================================\n");
	printf("\t||              TERIMA KASIH !!!            ||\n");
	printf("\t==============================================\n");
}



int main()
{
		printf("+-------------------------------------------------+\n");
		printf("|                     KELOMPOK 03                 |\n");
		printf("|                PROGRAM BUBBLE SORT              |\n");
		printf("+-------------------------------------------------+\n\n");
		
		do{
		printf("    +----------------------------------------+\n");
		printf("    |                  MENU                  |\n");
		printf("    +----------------------------------------+\n");
		printf("    |           1. Bubblesort 1000           |\n");
		printf("    |           2. Bubblesort 16000          |\n");
		printf("    |           3. Bubblesort 64000          |\n");
		printf("    |           4. KELUAR                    |\n");
		printf("    +----------------------------------------+\n\n\n");
		printf("Masukkan Pilihan Menu  [1-4] = ");
		pilihan=valid();
		
	    system("cls");
				if(pilihan == 1){
					seribu();
					break;
				}
					else if (pilihan == 2){
					enambelasribu();
					break;
				}
					else if (pilihan == 3){
					enamempatribu();
					break;
				}
				else if(pilihan == 4){ 
					keluar();
					break;
				}
				else{
					printf("\t+-----------------------------------------+\n");
					printf("\t|  MAAF MENU PILIHAN ANDA TIDAK TERSEDIA  |\n");
					printf("\t|         SILAHKAN INPUT ULANG!!!         |\n");
					printf("\t+-----------------------------------------+\n\n");
					printf("\t Ingin Mengulang?\n");
					printf ("\t Ya atau Tidak (Y/T): "); 
					scanf ("%s", &ulang);
					system("cls");
					}
				}while (1);	
					return 0;
				}
				
void seribu()  {
	int a1[1000], a2[1000];
	int *pa2 = a2;

    n = sizeof(a1) / sizeof(a1[0]);
    srand((unsigned) time(NULL));


    for(x=0; x<n; x++){
		a1[x] = rand();
		a2[x] = a1[x];
	}

	printf("\tSEBELUM SORTING\n");
    printf("  +-------------------------------------------------------------------------------------------------------------+\n\n");
    sleep (1);
	for(x=0; x<n; x++){
        printf("\t");
        for(y=0; y<=10; y++){
            printf("%d ", a1[x]);
        }
        printf("\n");
	}

	
// bubble sort cara biasa
	waktu = clock();
	for(x=0; x<n-1; x++)
    {
		for(y=0; y<n-1-x; y++)
		{
			if(a1[y] > a1[y+1])
			{
				temp = a1[y];
				a1[y] = a1[y+1];
				a1[y+1] = temp;
			}
		}
	}
    waktu = clock() - waktu;
    durasi[0] = (double)(waktu) / CLOCKS_PER_SEC;

    
// bubble short menggunkan pointer
	waktu = clock();
	for(x=0; x<n-1; x++)
    {
		for(y=0; y<n-1-x; y++)
		{
			if(*(pa2+y) > *(pa2+y+1))
			{
				temp = *(pa2+y);
				*(pa2+y) = *(pa2+y+1);
				*(pa2+y+1) = temp;
			}
		}
	}
	waktu = clock() - waktu;
	durasi[1] = (double)(waktu) / CLOCKS_PER_SEC;

    printf("\n\n\n  +-------------------------------------------------------------------------------------------------------------+\n");
    printf("\tSESUDAH SORTING\n\n");
    sleep (1);
	for(x=0; x<n; x++)
    {
        printf("\t");
        for(y=0; y<=10; y++)
        {
            printf("%d ", a2[x]);
        }
        printf("\n");
	}

	printf("\n\n");
	printf("  +-----------------------------------+\n");
	printf("          Waktu Yang Dibutuhkan        \n");
	printf("  +-----------------------------------+\n");
	printf("   Cara biasa : %f detik               \n", durasi[0]);
	printf("   Pointer    : %f detik               \n", durasi[1]);
	printf("  +-----------------------------------+\n");
	
	printf("\n\n\n\n");
	printf("+---------------------------------------------------+\n");
	printf("|              Mengulang Bubble Sort 1000?          |\n");
	printf("+---------------------------------------------------+\n");
	printf("|      Tekan Y untuk mengulang bubble sort 1000     |\n");
	printf("|          Tekan U untuk memilih menu ulang         |\n");
	printf("|                Tekan N untuk keluar               |\n");
	printf("+---------------------------------------------------+\n");
	
		do{
		printf("\nMasukkan pilihan: ");
		scanf(" %c", &pilihan);
			
			system("cls");
			if(pilihan == 'Y' || pilihan == 'y'){ 
				seribu(); 
				break; 
			}
			else if(pilihan == 'U' || pilihan == 'u'){ 
				main(); 
				break; 
			}
			else if (pilihan == 'N' || pilihan == 'n'){ 
				keluar(); 
				break;	
			}
			else {
				printf("+---------------------------------------------------+\n");
				printf("|                   INPUTAN SALAH!!!                |\n"); 
				printf("+---------------------------------------------------+\n");
				printf("|      Tekan Y untuk mengulang bubble sort 1000     |\n");
				printf("|          Tekan U untuk memilih menu ulang         |\n");
				printf("|                Tekan N untuk keluar               |\n");
				printf("+___________________________________________________+\n");
			}
			}
				while(1);
			}

void enambelasribu()
{
	int a1[16000], a2[16000];
	int *pa2 = a2;

    n = sizeof(a1) / sizeof(a1[0]);
    srand((unsigned) time(NULL));

    for(x=0; x<n; x++)
    {
		a1[x] = rand();
		a2[x] = a1[x];
	}
  	printf("\tSEBELUM SORTING\n");
    printf("  +-------------------------------------------------------------------------------------------------------------+\n\n");
    sleep (1);
	for(x=0; x<n; x++)
    {
        printf("\t");
        for(y=0; y<=10; y++)
        {
            printf("%d ", a1[x]);
        }
        printf("\n");
	}


// bubble sort cara biasa
	waktu = clock();
	for(x=0; x<n-1; x++)
        {
		for(y=0; y<n-1-x; y++)
		{
			if(a1[y] > a1[y+1])
			{
				temp = a1[y];
				a1[y] = a1[y+1];
				a1[y+1] = temp;
			}
		}
	}
    waktu = clock() - waktu;
    durasi[0] = (double)(waktu) / CLOCKS_PER_SEC;

// bubble short menggunkan pointer
    waktu = clock();
	for(x=0; x<n-1; x++)
    {
		for(y=0; y<n-1-x; y++)
		{
			if(*(pa2+y) > *(pa2+y+1))
			{
				temp = *(pa2+y);
				*(pa2+y) = *(pa2+y+1);
				*(pa2+y+1) = temp;
			}
		}
	}
	waktu = clock() - waktu;
	durasi[1] = (double)(waktu) / CLOCKS_PER_SEC;

    printf("\n\n\n  +-------------------------------------------------------------------------------------------------------------+\n");
    printf("\tSESUDAH SORTING\n\n");
	sleep (1);
	for(x=0; x<n; x++)
        {
        printf("\t");
        for(y=0; y<=10; y++)
        {
            printf("%d ", a2[x]);
        }
        printf("\n");
	}

	printf("\n\n");
	printf("  +-----------------------------------+\n");
	printf("          Waktu Yang Dibutuhkan        \n");
	printf("  +-----------------------------------+\n");
	printf("   Cara biasa : %f detik               \n", durasi[0]);
	printf("   Pointer    : %f detik               \n", durasi[1]);
	printf("  +-----------------------------------+\n");
	
	printf("\n\n\n\n");
	printf("+---------------------------------------------------+\n");
	printf("|              Mengulang Bubble Sort 16000?         |\n");
	printf("+---------------------------------------------------+\n");
	printf("|     Tekan Y untuk mengulang bubble sort 16000     |\n");
	printf("|          Tekan U untuk memilih menu ulang         |\n");
	printf("|                Tekan N untuk keluar               |\n");
	printf("+---------------------------------------------------+\n");
	
		do{
		printf("\nMasukkan pilihan: ");
		scanf(" %c", &pilihan);
			
			system("cls");
			if(pilihan == 'Y' || pilihan == 'y'){ 
				enambelasribu(); 
				break; 
			}
			else if(pilihan == 'U' || pilihan == 'u'){ 
				main(); 
				break; 
			}
			else if(pilihan == 'N' || pilihan == 'n'){ 
				keluar(); 
				break;	
			}
			else {
				printf("+---------------------------------------------------+\n");
				printf("|                   INPUTAN SALAH!!!                |\n"); 
				printf("+---------------------------------------------------+\n");
				printf("|      Tekan Y untuk mengulang bubble sort 16000    |\n");
				printf("|          Tekan U untuk memilih menu ulang         |\n");
				printf("|                Tekan N untuk keluar               |\n");
				printf("+___________________________________________________+\n");
			}
			}
				while(1);
			}


void enamempatribu()
{
	int a1[64000], a2[64000];
	int *pa2 = a2;

    n = sizeof(a1) / sizeof(a1[0]);
    srand((unsigned) time(NULL));

    for(x=0; x<n; x++)
    {
		a1[x] = rand();
		a2[x] = a1[x];
	}
	printf("\tSEBELUM SORTING\n");
    printf("  +-------------------------------------------------------------------------------------------------------------+\n\n");
    sleep (1);
	for(x=0; x<n; x++)
    {
        printf("\t");
        for(y=0; y<=10; y++)
        {
            printf("%d ", a1[x]);
        }
        printf("\n");
	}


// bubble sort cara biasa
	waktu = clock();
	for(x=0; x<n-1; x++)
        {
		for(y=0; y<n-1-x; y++)
		{
			if(a1[y] > a1[y+1])
			{
				temp = a1[y];
				a1[y] = a1[y+1];
				a1[y+1] = temp;
			}
		}
	}
    waktu = clock() - waktu;
    durasi[0] = (double)(waktu) / CLOCKS_PER_SEC;

// bubble short menggunkan pointer
    waktu = clock();
	for(x=0; x<n-1; x++)
    {
		for(y=0; y<n-1-x; y++)
		{
			if(*(pa2+y) > *(pa2+y+1))
			{
				temp = *(pa2+y);
				*(pa2+y) = *(pa2+y+1);
				*(pa2+y+1) = temp;
			}
		}
	}
	waktu = clock() - waktu;
	durasi[1] = (double)(waktu) / CLOCKS_PER_SEC;

    printf("\n\n\n  +-------------------------------------------------------------------------------------------------------------+\n");
    printf("\tSESUDAH SORTING\n\n");
	sleep (1);
	for(x=0; x<n; x++)
        {
        printf("\t");
        for(y=0; y<=10; y++)
        {
            printf("%d ", a2[x]);
        }
        printf("\n");
	}

	printf("\n\n");
	printf("  +-----------------------------------+\n");
	printf("          Waktu Yang Dibutuhkan        \n");
	printf("  +-----------------------------------+\n");
	printf("   Cara biasa : %f detik               \n", durasi[0]);
	printf("   Pointer    : %f detik               \n", durasi[1]);
	printf("  +-----------------------------------+\n");
	
	printf("\n\n\n\n");
	printf("+---------------------------------------------------+\n");
	printf("|              Mengulang Bubble Sort 64000?         |\n");
	printf("+---------------------------------------------------+\n");
	printf("|     Tekan Y untuk mengulang bubble sort 64000     |\n");
	printf("|          Tekan U untuk memilih menu ulang         |\n");
	printf("|                Tekan N untuk keluar               |\n");
	printf("+---------------------------------------------------+\n");
	
		do{
		printf("\nMasukkan pilihan: ");
		scanf(" %c", &pilihan);
			
			system("cls");
			if(pilihan == 'Y' || pilihan == 'y'){ 
				enamempatribu(); 
				break; 
			}
			else if(pilihan == 'U' || pilihan == 'u'){ 
				main(); 
				break; 
			}
			else if(pilihan == 'N' || pilihan == 'n'){ 
				keluar(); 
				break;	
			}
			else {
				printf("+---------------------------------------------------+\n");
				printf("|                   INPUTAN SALAH!!!                |\n"); 
				printf("+---------------------------------------------------+\n");
				printf("|      Tekan Y untuk mengulang bubble sort 64000    |\n");
				printf("|          Tekan U untuk memilih menu ulang         |\n");
				printf("|                Tekan N untuk keluar               |\n");
				printf("+___________________________________________________+\n");
			}
			}
				while(1);
		  }

