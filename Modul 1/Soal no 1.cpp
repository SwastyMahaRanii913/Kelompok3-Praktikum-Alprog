#include <stdio.h>
#include <stdlib.h>
void penjumlahan();
void penguranagn();
void perkalian();
void pembagian ();
void modulus();
void menu();
void keluar();

float validasi1(){
    float bilangan;
    char huruf;
    scanf("%f%c", &bilangan,&huruf);
    if(huruf != '\n'){
        printf("---Masukkan salah!---\n");
        printf("\nUlang masukan angka	: ");
        fflush(stdin);
        validasi1();
    }
	else{
        return bilangan;
    }
}

int validasi2(){
    int bilangan;
    char huruf;
    scanf("%d%c", &bilangan,&huruf);
    if(huruf != '\n' || bilangan<0){
        printf("---Masukkan salah!---\n");
        printf("\nUlang masukan yang benar : ");
        fflush(stdin);
        validasi2();
    }
	else{
        return bilangan;
    }
}

void penjumlahan(){
	float angka1, angka2, hasil;
	int pilih;
	system ("cls");
	printf("==================================\n");
	printf("|	Penjumlahan		|\n");
	printf("==================================\n\n");
	printf("Masukan angka pertama	: ");
	angka1=validasi1();
	printf("Masukan angka kedua	: ");
	angka2=validasi1();
	printf("--------------------------------- + \n");
	hasil = angka1+angka2;
	printf("Hasil penjumlahan	: %.2f\n", hasil);
	printf("---------------------------------  \n\n\n");
	
	ulang:
	printf("1. Ulangi penjumlahan\n");
	printf("2. Menu utama\n");
	printf("3. Keluar\n");
	printf("Pilihan selanjutnya	: ");
	pilih=validasi2();
	
	switch (pilih){
		case 1:
			penjumlahan();
			break;
		case 2:
			menu();
			break;
		case 3:
			keluar();
		default:
			printf("Masukan pilihan yang sesuai!\n\n");
			goto ulang;
	}
}

void pengurangan(){
	float angka1, angka2, hasil;
	int pilih;
	system ("cls");
	printf("==================================\n");
	printf("|	Pengurangan		|\n");
	printf("==================================\n\n");
	printf("Masukan angka pertama	: ");
	angka1=validasi1();
	printf("Masukan angka kedua	: ");
	angka2=validasi1();
	printf("--------------------------------- - \n");
	hasil = angka1-angka2;
	printf("Hasil pengurangan	: %.2f\n", hasil);
	printf("---------------------------------  \n\n\n");
	
	ulang:
	printf("1. Ulangi pengurangan\n");
	printf("2. Menu utama\n");
	printf("3. Keluar\n");
	printf("Pilihan selanjutnya	: ");
	pilih=validasi2();
	
	
	switch (pilih){
		case 1:
			pengurangan();
			break;
		case 2:
			menu();
			break;
		case 3:
			keluar();
		default:
			printf("Masukan pilihan yang sesuai!\n\n");
			goto ulang;
	}
}

void perkalian(){
	float angka1, angka2, hasil;
	int pilih;
	
	system ("cls");
	printf("==================================\n");
	printf("|		Perkalian	|\n");
	printf("==================================\n\n");
	printf("Masukan angka pertama	: ");
	angka1=validasi1();
	printf("Masukan angka kedua	: ");
	angka2=validasi1();
	printf("--------------------------------- X \n");
	hasil = angka1*angka2;
	printf("Hasil perkalian		: %.2f\n", hasil);
	printf("---------------------------------  \n\n");
	
	
	ulang:
	printf("1. Ulangi pekalian\n");
	printf("2. Menu utama\n");
	printf("3. Keluar\n");
	printf("Pilihan selanjutnya	: ");
	pilih=validasi2();
	
	switch (pilih){
		case 1:
			perkalian();
			break;
		case 2:
			menu();
			break;
		case 3:
			keluar();
		default:
			printf("Masukan pilihan yang sesuai!\n\n");
			goto ulang;
	}
}

void pembagian(){
	float angka1, angka2, hasil;
	int pilih;
	
	system ("cls");
	system ("cls");
	printf("==================================\n");
	printf("|		Pembagian	|\n");
	printf("==================================\n\n");
	printf("Masukan angka pertama	: ");
	angka1=validasi1();
	printf("Masukan angka kedua	: ");
	angka2=validasi1();
	printf("--------------------------------- : \n");
	hasil = angka1/angka2;
	printf("Hasil pembagian		: %.2f\n", hasil);
	printf("---------------------------------  \n\n");
	
	ulang:
	printf("1. Ulangi pembagian\n");
	printf("2. Menu utama\n");
	printf("3. Keluar\n");
	printf("Pilihan selanjutnya	: ");
	pilih=validasi2();
	
	switch (pilih){
		case 1:
			pembagian();
			break;
		case 2:
			menu();
			break;
		case 3:
			keluar();
		default:
			printf("Masukan pilihan yang sesuai!\n\n");
			goto ulang;
	}
}

void modulus(){
	int angka1, angka2, hasil;
	int pilih;
	system ("cls");
	
	printf("==================================\n");
	printf("|		Modulus		|\n");
	printf("==================================\n\n");
	printf("Masukan angka pertama	: ");
	angka1=validasi2();
	printf("Masukan angka kedua	: ");
	angka1=validasi2();
	printf("---------------------------------  \n");
	hasil = angka1%angka2;
	printf("Hasil modulus		: %d\n", hasil);
	printf("---------------------------------  \n\n");
	
	ulang:
	printf("1. Ulangi modulus\n");
	printf("2. Menu utama\n");
	printf("3. Keluar\n");
	printf("Pilihan selanjutnya	: ");
	pilih=validasi2();
	
	switch (pilih){
		case 1:
			modulus();
			break;
		case 2:
			menu();
			break;
		case 3:
			keluar();
		default:
			printf("Masukan pilihan yang sesuai!\n\n");
			goto ulang;
	}
}


void keluar(){
	exit(0);
}


void menu(){
	int pilih;
	system ("cls");
	printf("=======================================\n");
	printf("|	Menu Kalkulator			|\n");
	printf("=======================================\n");
	printf(" 1. Penjumlahan\n");
	printf(" 2. Pengurangan\n");
	printf(" 3. Perkalian\n");
	printf(" 4. Pembagian\n");
	printf(" 5. Modulus\n");
	printf(" 6. Keluar\n");
	
	ulang:
	printf("Masukan pilihan menu	:");
	pilih=validasi2();
	
	switch(pilih){
		case 1:
			penjumlahan();
			break;
		case 2:
			pengurangan();
			break;
		case 3:
			perkalian();
			break;
		case 4:
			pembagian();
			break;
		case 5:
			modulus();
			break;
		case 6:
			keluar();
			break;
		default:
			printf("---Masukkan salah!---\n\n");
			goto ulang;
			break;
	}
}

int main(){
	menu();
return 0;
}
