#include<stdio.h>
#include <stdlib.h>

void awal();
void angsuran();
void keluar();
void ulang();

int main(){
	awal();
	angsuran();
}


float validasi(){
    float angka;
    char huruf;
    
    scanf("%f%c", &angka,&huruf);
    if(huruf != '\n'){
        printf("---Masukkan salah!---\n\n");
        printf(" Masukan ulang dalam angka	: ");
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
	
	int bulan;
	int y;
	float angsuran_pokok;
	float angsuran_perbulan;
	float total_bunga;
	float total_angsuran;
	float bungay;
	
	
	printf(" Pokok Pinjaman			: ");
	pinjaman=validasi();
	printf(" Besar Bunga (%)			: ");
	bunga = validasi();
	printf(" Lama Pinjaman (bulan)		: ");
	lama_pinjaman=validasi();
	
	printf("\n\n\tBulan\t\tBunga\t\tAngsuran pokok\t\tAngsuran Perbulan\n");
	for(y=1; y<=lama_pinjaman; y++){
		
		bulan=y;
		angsuran_pokok = pinjaman/lama_pinjaman;
		bungay = (pinjaman-((y-1)*angsuran_pokok))*bunga/1200;
		angsuran_perbulan = bungay+angsuran_pokok;
		
		printf("\t %d\t\tRp. %.2f\tRp. %.2f\t\tRp. %.2f\n", bulan, bungay, angsuran_pokok, angsuran_perbulan);
		
		
		total_bunga= total_bunga + bungay;
		total_angsuran= total_angsuran + angsuran_perbulan;
	}
	printf("\n Total Bunga	:\t\t\t\t\t\t Rp. %.2f\n", total_bunga);
	printf(" Total Angsuran	:\t\t\t\t\t\t Rp. %.2f", total_angsuran);
	printf("\n\n\n----------------------------------------------------------------------------------\n");
	ulang();
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

void ulang(){
	int kembali;
	
	pilih:
	printf("\n [1] Kembali Menghitung Angsuran");
	printf("\n [2] Keluar Program");
	printf("\n Pilihan Anda	[1 / 2]: ");
	kembali=validasi();
	
	
	switch(kembali){
		case 1:
			system ("cls");
			awal();
			angsuran();
			break;
		case 2:
			system ("cls");
			keluar();
			break;
		default:
			printf("\n----Pilihan Tidak Sesuai!----\n");
			goto pilih;
			
	}
}
