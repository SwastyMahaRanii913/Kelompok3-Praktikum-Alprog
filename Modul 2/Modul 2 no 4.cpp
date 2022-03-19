#include <stdio.h>
#include <stdlib.h>

int valid();
int validasi1();
void FibonacciRekursif();
void FibonacciIteratif();
int fibonacciRekursif (int angka);
void keluar();



int valid(){
	int bilangan;
    char huruf;
    scanf("%d%c", &bilangan,&huruf);
    if(huruf != '\n' || bilangan<0){
        printf("\n\n Menu Tidak Tersedia !!\n");
        printf(" Masukan Pilihan Ulang : ");
        fflush(stdin);
        valid();
    }
	else{
        return bilangan;
    }
}

int validasi1(){
	int bilangan;
    char huruf;
    scanf("%d%c", &bilangan,&huruf);
    if(huruf != '\n' || bilangan<0){
        printf("\n\n Input Berupa Angka !!\n");
        printf(" Masukan Angka Ulang : ");
        fflush(stdin);
        valid();
    }
	else{
        return bilangan;
    }
}

void keluar(){
	printf("\t==============================================\n");
	printf("\t||              TERIMA KASIH :)             ||\n");
	printf("\t==============================================\n");
}


int main (){

	char pilihan, ulang;
	
	printf("+-------------------------------------------------+\n");
	printf("|                     KELOMPOK 03                 |\n");
	printf("|              PROGRAM DERET FIBONACCI            |\n");
	printf("+-------------------------------------------------+\n\n");

	do{
	printf("    +----------------------------------------+\n");
	printf("    |                  MENU                  |\n");
	printf("    +----------------------------------------+\n");
	printf("    |           1. Fibonacci Rekursif        |\n");
	printf("    |           2. Fibonacci Iteratif        |\n");
	printf("    |           3. Keluar                    |\n");
	printf("    +----------------------------------------+\n\n\n");
	printf("Silahkan Masukkan Pilihan Menu Sesuai Ketentuan [1-3] = ");
	pilihan=valid();
	
				system("cls");
				if(pilihan == 1){
					printf("=======================================================\n");
					printf("||                                                   ||\n");
					printf("||            ANDA MEMILIH FIBONACCI REKURSIF        ||\n");
					printf("||                                                   ||\n");
					printf("=======================================================\n");
					FibonacciRekursif();
					break;
				}
					else if (pilihan == 2){
					printf("=======================================================\n");
					printf("||                                                   ||\n");
					printf("||           ANDA MEMILIH FIBONACCI ITERATIF         ||\n");
					printf("||                                                   ||\n");
					printf("=======================================================\n");
					FibonacciIteratif();
					break;
				}
				else if(pilihan == 3){ 
					keluar();
					break;
				}
				else{
					printf("\t|*****************************************|\n");
					printf("\t|  MAAF MENU PILIHAN ANDA TIDAK TERSEDIA  |\n");
					printf("\t|         SILAHKAN INPUT ULANG!!!         |\n");
					printf("\t|_________________________________________|\n\n");
					printf("\t Ingin Mengulang?\n");
					printf ("\t Ya atau Tidak (Y/T): "); 
					scanf ("%s", &ulang);
					system("cls");
				}
	}while (1);	
		return 0;
}


 
