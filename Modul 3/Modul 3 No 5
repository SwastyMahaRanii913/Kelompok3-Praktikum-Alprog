#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void menu();
int enkripsi();
int deskripsi();
void opsi();
void keluar();

void menu(){
	char pilih;
	
	system("cls");
	system("Color 0B");
	fflush (stdin);
	printf("=================================================\n");
	printf("|	    Program Enkripsi Deskripsi		|\n");
	printf("=================================================\n");
	printf("|	Menu Program Enkripsi Dekskripsi	|\n");
	printf("=================================================\n");
	printf("	Pilihan yang ingin dijalankan: \n");
	printf(" 1. Enskripsi\n");
	printf(" 2. Dekskripsi\n");
	printf(" 3. Keluar\n");
	
	printf("\n Apa yang ingin dilihat?(1-3): ");
	pilih = getche();
	
	ulang1:
	if (pilih =='1'){
		system("Color 0E");
        printf("\n\n    Oke, tunggu sebentar ...\n\n\t");
		sleep(1);
		system("cls");
		enkripsi();
    }
    else if (pilih =='2'){
    	system("Color 0E");
        printf("\n\n    Oke, tunggu sebentar ...\n\n\t");
		sleep(1);
		system("cls");
		deskripsi();
    }
    else if (pilih =='3'){
    	keluar();
    }
    else if(pilih !='1' || pilih != '2' || pilih != '3'){
    	system("Color 04");
		printf("\n\n\n Input yang diberikan salah!\n\n");
    	printf(" Masukan input yang benar(1-3): ");
    	pilih = getche();
		goto ulang1;
	}
}

int enkripsi(){
	char pesan[100], ek;
	int i, geser;
	
	system("Color 0B");
	printf("=================================================\n");
	printf("|	    Program Enkripsi Deskripsi		|\n");
	printf("=================================================\n");
	printf("|		PROGRAM ENKRIPSI		|\n");
	printf("=================================================\n");
	printf("\n\tMasukan jumlah pergeseran: ");
	geser = validasiGeser();
	system("Color 0B");
	printf("\tMasukan plaintext yang akan di-enkripsi : ");
	gets(pesan);
	
	for(i = 0; pesan[i] != '\0'; i++){
		ek = pesan[i];

		if(ek >= 'a' && ek <= 'z'){
			ek = ek + geser;

			if(ek > 'z'){
				ek = ek - 'z' + 'a' - 1;
			}

			pesan[i] = ek;
		}
		else if(ek >= 'A' && ek <= 'Z'){
			ek = ek + geser;

			if(ek > 'Z'){
				ek = ek - 'Z' + 'A' - 1;
			}

			pesan[i] = ek;
		}
	}

	printf("\n\n\tHasil Enkripsi : %s", pesan);
	sleep(2);
	opsi();
	return 0;
}

int deskripsi(){
	char pesan[100], dk;
	int i, geser;
	
	system("Color 0B");
	printf("=================================================\n");
	printf("|	    Program Enkripsi Deskripsi		|\n");
	printf("=================================================\n");
	printf("|		PROGRAM DESKRIPSI		|\n");
	printf("=================================================\n");
	printf("\n\tMasukan jumlah pergeseran: ");
	geser = validasiGeser();
	printf("\tMasukan chipertext yang akan di-deskripsi: ");
	gets(pesan);

	for(i = 0; pesan[i] != '\0'; i++){
		dk = pesan[i];

		if(dk >= 'a' && dk <= 'z'){
			dk = dk - geser;

			if(dk < 'a'){
				dk = dk + 'z' - 'a' + 1;
			}

			pesan[i] = dk;
		}
		else if(dk >= 'A' && dk <= 'Z'){
			dk = dk - geser;

			if(dk < 'A'){
				dk = dk + 'Z' - 'A' + 1;
			}

			pesan[i] = dk;
		}
	}

	printf("\n\n\tHasil Deskripsi : %s", pesan);
	opsi();
	
	return 0;
}

void opsi(){
    char pilih2;
    
	fflush(stdin);
    printf("\n\n\n\tMau kembali ke Menu Utama?(Y/N)\n\t");
    pilih2 = getch();
    if(pilih2 == 'Y' || pilih2 == 'y'){
        system("cls");
        menu();
    }
    else if(pilih2 == 'N' || pilih2 == 'n'){
        system("cls");
        keluar();
    }
    else {
        printf("\n\t\t\tInputan error! Silahkan masukan kembali !\n\a");
		sleep(2);
        system("cls");
        opsi();
    }
}

	
void keluar(){
	system("cls");
	system("Color 03");
	printf("\n\tTerima kasih, sampai jumpa lagi!\n");
	exit(0);
}

int validasiGeser(){
	int bilangan, geser;
    char huruf;
    scanf("%d%c", &bilangan,&huruf);
    if(huruf != '\n' || bilangan < 0){
        system("Color 04");
		printf("\n\t---Input salah!---\n");       
        fflush(stdin);
        printf("\n\tMasukan jumlah geser yang benar: ");
        geser = validasiGeser(); 
    }
	else{
        return bilangan;
    }
}

char validasiEnkripsi(){
    int input, angka;
	char huruf;
	
	input=scanf("%d%c", &angka, &huruf);
	if(angka != '\n'){
		system("Color 04");
		printf("\n\t---Input salah!---\n\n");
		fflush(stdin);
		}
		
	return angka;
	}

char validasiDeskripsi(){
    int input, angka;
	char huruf;
	
	input=scanf("%d%c", &angka, &huruf);
	if(angka != '\n'){
		system("Color 04");
		printf("\n\t---Input salah!---\n");
		printf("\n\tUlang masukan yang benar : ");
		fflush(stdin);
		}
		
	return angka;
	}

int main(){
	menu();
	
	return 0;
}
