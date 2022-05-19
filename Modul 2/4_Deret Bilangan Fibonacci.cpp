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
					printf("\t+-----------------------------------------+\n");
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



 void FibonacciRekursif(){
	int pilihan;
	int jumlahBilangan, i;

	printf("Masukkan Jumlah Bilangan Fibonacci : ");
	jumlahBilangan=validasi1();

	printf("Deret Bilangan Fibonacci : ");
	for(i=0; i<jumlahBilangan; i++){
		if(i == 0 && i == jumlahBilangan - 1){
		printf(" %d,", fibonacciRekursif(i));
	}else{ 
		if(i == jumlahBilangan - 1){ 
			printf(" dan %d.", fibonacciRekursif(i)); 
			}
			else{ 
				printf(" %d,", fibonacciRekursif(i)); 
			}
			}
		}
	 
	printf("\n\n\n\n");
	printf("+----------------------------------------------------------------+\n");
	printf("|           Menampilkan deret bilangan fibonacci ulang?          |\n");
	printf("+----------------------------------------------------------------+\n");
	printf("|    Tekan Y untuk mengulang deret bilangan fibbonaci rekursif   |\n");
	printf("|                Tekan U untuk memilih menu ulang                |\n");
	printf("|                      Tekan N untuk keluar                      |\n");
	printf("+----------------------------------------------------------------+\n");
	
		do{
		printf("\nMasukkan pilihan: ");
		scanf(" %c", &pilihan);
			
			system("cls");
			if(pilihan == 'Y' || pilihan == 'y'){ 
				printf("=======================================================\n");
				printf("||                                                   ||\n");
				printf("||            ANDA MEMILIH FIBONACCI REKURSIF        ||\n");
				printf("||                                                   ||\n");
				printf("=======================================================\n");
				FibonacciRekursif(); 
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
				printf("+----------------------------------------------------------------+\n");
				printf("|                        INPUTAN SALAH!!!                        |\n"); 
				printf("+----------------------------------------------------------------+\n");
				printf("|    Tekan Y untuk mengulang deret bilangan fibbonaci rekursif   |\n");
				printf("|                Tekan U untuk memilih menu ulang                |\n");
				printf("|                      Tekan N untuk keluar                      |\n");
				printf("+________________________________________________________________+\n");
			}
			}
				while(1);
			}	



void FibonacciIteratif(){
	char pilihan;
	 int jumlahBilangan, i;

		printf("Masukkan Jumlah Bilangan Fibonacci: ");
		jumlahBilangan=validasi1();
		
	int deret[jumlahBilangan]; 

	printf("Deret bilangan fibonacci yaitu :");
	for(i=0; i<jumlahBilangan; i++){ 
		if(i==0 || i==1){ 
			deret[i] = i; 
			if(i == 0 && i == jumlahBilangan - 1){ 
				printf(" %d.", deret[i]);
			}
			else{
				if(i == jumlahBilangan - 1){ 
					printf(" dan %d.", deret[i]); 
				}
				else{ 
					printf(" %d,", deret[i]);
				}
				}
			}
		
			else{ 
				deret[i] = deret[i-2] + deret[i-1]; 
				if (i == jumlahBilangan - 1){
				printf(" dan %d.", deret[i]);
			}
			else {
				printf(" %d,", deret[i]);
			}
			}
		}

	printf("\n\n\n\n");
	printf("+----------------------------------------------------------------+\n");
	printf("|           Menampilkan deret bilangan fibonacci ulang?          |\n");
	printf("+----------------------------------------------------------------+\n");
	printf("|    Tekan Y untuk mengulang deret bilangan fibbonaci iteratif   |\n");
	printf("|                Tekan U untuk memilih menu ulang                |\n");
	printf("|                      Tekan N untuk keluar                      |\n");
	printf("+----------------------------------------------------------------+\n");
	
		do{
		printf("\nMasukkan pilihan: ");
		scanf(" %c", &pilihan);
			
			system("cls");
			if(pilihan == 'Y' || pilihan == 'y'){ 
				printf("=======================================================\n");
				printf("||                                                   ||\n");
				printf("||           ANDA MEMILIH FIBONACCI ITERATIF         ||\n");
				printf("||                                                   ||\n");
				printf("=======================================================\n");
				FibonacciIteratif(); 
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
				printf("+----------------------------------------------------------------+\n");
				printf("|                        INPUTAN SALAH!!!                        |\n"); 
				printf("+----------------------------------------------------------------+\n");
				printf("|    Tekan Y untuk mengulang deret bilangan fibbonaci iteratif   |\n");
				printf("|                Tekan U untuk memilih menu ulang                |\n");
				printf("|                      Tekan N untuk keluar                      |\n");
				printf("+________________________________________________________________+\n"); 
			}
			}
				while(1);
			}
 

int fibonacciRekursif(int angka){
	if(angka == 0){ 
		return 0; 
	}
	else if(angka == 1){ 
		return 1; 
	}
	else{ 
		return fibonacciRekursif(angka-2) + fibonacciRekursif(angka-1); 
	}
	return 0;
}
