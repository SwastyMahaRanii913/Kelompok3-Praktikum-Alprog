#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void menu();
void isiP();
void opsi();
void keluar();

struct strKbs{
	int sisi;
	int luasPermukaan;
	int volume;
};

union uniKbs{
	int sisi;
	int luasPermukaan;
	int volume;
};

void menu(){
	char pilih;
	
	system("cls");
	system("Color 0B");
	printf("=========================================================\n");
	printf("|    Program Penghitung Luas Permukaan & Volume Kubus   |\n");
	printf("=========================================================\n");
	printf("|	      ~ Menggunakan struct dan Union            |\n");
	printf("=========================================================\n");
	printf("\n	Pilihan yang ingin dijalankan: \n");
	printf("\t1. Mulai\n");
	printf("\t2. Keluar\n");
	
	printf("\n\tApa yang ingin dilakukan?(1/2): ");
	pilih = getche();
	
	ulang1:
	if (pilih =='1'){
		system("Color 0E");
        printf("\n\n    Oke, tunggu sebentar ...\n\n\t");
		sleep(1);
		system("cls");
		isiP();
    }
    else if (pilih =='2'){
    	keluar();
    }
    else if(pilih !='1' || pilih != '2'){
    	system("Color 04");
		printf("\n\n\n Input yang diberikan salah!\n\n");
    	printf(" Masukan input yang benar(1/2): ");
    	pilih = getche();
		goto ulang1;
	}
}

void isiP(){
	int sisi;
	struct strKbs sKbs;
	union uniKbs uKbs;
	
	system("cls");
	system("Color 0B");
	printf("=========================================================\n");
	printf("|    Program Penghitung Luas Permukaan & Volume Kubus   |\n");
	printf("=========================================================\n");
	printf("\n\tMasukan panjang sisi dari kubus: ");
	sisi = validasiInput();
	
	system("Color 0B");
	sKbs.luasPermukaan=6*sisi*sisi;
	sKbs.volume=sisi*sisi*sisi;	
	printf("\n-----------------------------------------------------------------\n");
	printf("|\t     STRUCT		|\t     UNION		|");
	printf("\n-----------------------------------------------------------------");
	printf("\n| Sisi			: %d\t| Sisi			: %d\t|", sisi, sisi);
	uKbs.luasPermukaan= 6*sisi*sisi;
	printf("\n| Luas Permukaan	: %d\t| Luas Permukaan	: %d\t|", sKbs.luasPermukaan, uKbs.luasPermukaan);
	uKbs.volume = sisi*sisi*sisi;
	printf("\n| Volume		: %d\t| Volume		: %d\t|", sKbs.volume, uKbs.volume);
	printf("\n| Ukuran memori (bit)	: %d\t| Ukuran memori (bit)	: %d\t|", sizeof(sKbs), sizeof(uKbs));
	printf("\n-----------------------------------------------------------------\n");
	
	sleep(2);
	opsi();
}

void opsi(){
    char pilih2;
    
	fflush(stdin);
    printf("\n\n\tIngin kembali mengulang program?(Y/N)\n\t");
    pilih2 = getch();
    if(pilih2 == 'Y' || pilih2 == 'y'){
        system("cls");
        isiP();
    }
    else if(pilih2 == 'N' || pilih2 == 'n'){
        system("cls");
        keluar();
    }
    else {
    	system("Color 04");
        printf("\n\t\tInputan salah! Silahkan masukan input yang benar !\n");
        opsi();
    }
}

int validasiInput(){
	int bilangan, sisi;
    char huruf;
    scanf("%d%c", &bilangan,&huruf);
    if(huruf != '\n' ){
        system("Color 04");
		printf("\n\t---Input salah!---\n");       
        fflush(stdin);
        printf("\n\tMasukan panjang sisi yang benar: ");
        sisi = validasiInput(); 
    }
	else{
        return bilangan;
    }
}

void keluar(){
	system("cls");
	system("Color 03");
	printf("\n\tTerima kasih, sampai jumpa lagi!\n");
	exit(0);
}

int main(){
	menu();
	
	return 0;
}
