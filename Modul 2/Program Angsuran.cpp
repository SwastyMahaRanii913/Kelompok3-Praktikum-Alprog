#include<stdio.h>
#include <stdlib.h>

void awal();
void angsuran();
void keluar();

float validasi(){
    float angka;
    char huruf;
    
    scanf("%f%c", &angka,&huruf);
    if(huruf != '\n'){
        printf("---Masukkan salah!---\n");
        printf(" Masukan ulang			: ");
        fflush(stdin);
        validasi();
    }
	else{
        return angka;
    }
}

void angsuran(){
	int lama_pinjaman;
	float pinjaman;
	float bunga;
	
	
	printf(" Pokok Pinjaman			: ");
	pinjaman=validasi();
	printf(" Besar Bunga (%)			: ");
	bunga = validasi();
	printf(" Lama Pinjaman (bulan)		: ");
	lama_pinjaman=validasi();
}

void keluar(){
	printf("\n\t\t----------------------------------------------------------------\n");
	printf("\n\t\t---------**Terima Kasih Telah Menggunakan Program Ini**---------\n");
	printf("\n\t\t----------------------------------------------------------------\n");
	exit(0);
}

void awal(){
	printf("\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\t\t|||              PROGRAM MENGHITUNG               |||");
	printf("\n\t\t|||                  ANGSURAN                     |||");
	printf("\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\n\n----------------------------------------------------------------------------------\n");
}

int main(){
	awal();
	angsuran();
}
