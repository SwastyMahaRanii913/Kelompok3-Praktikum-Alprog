#include <stdio.h>
#include <stdlib.h>

int validasi();
void hitunggaji();
void ulangi();

typedef struct{
	int total_jamkerja;
	int jampokok;
	int jamlembur;
	int gajipokok;
	int gajilembur;
	int totalgaji;
} Gaji;

int validasi(){
	int angka;
	char huruf;
	
	scanf("%d%c", &angka, &huruf);
	if (angka <0 || angka > 24 || huruf!='\n'){
		printf("\t\t\tInputan Tidak Sesuai!\n");
		printf("\t\t\tMasukkan Ulang		: ");
		fflush(stdin);
		validasi();
	}else{
		return angka;
	}
}

void hitunggaji(){
	const int gajiperjam = 10625;
	Gaji g;
	g.total_jamkerja = 0;
	g.jampokok = 0;
	g.jamlembur = 0;
	g.gajipokok = 0;
	g.gajilembur = 0;
	g.totalgaji = 0;
	
	printf("\t\t\t+==================================+\n");
	printf("\t\t\t|         PROGRAM MENGHITUNG       |\n");
	printf("\t\t\t|             GAJI HARIAN          |\n");
	printf("\t\t\t+==================================+\n");
	
	printf("\n\t\t\tInputkan Jam Kerja Anda	: ");
	g.total_jamkerja = validasi();
	printf("\n\t\t\t====================================\n");
	
	if (g.total_jamkerja>8){
		g.jampokok = 8;
		g.jamlembur = g.total_jamkerja - g.jampokok;
		g.gajipokok = g.jampokok * gajiperjam;
		g.gajilembur = g.jamlembur * g.gajipokok; 
		
	}else{
		g.jampokok = g.total_jamkerja;
		g.gajipokok = g.total_jamkerja * gajiperjam;
	}
	
	g.totalgaji = g.gajipokok + g.gajilembur;
	
	printf("\t\t\tJumlah jam kerja	: %d\n", g.total_jamkerja);
	printf("\t\t\tJam kerja pokok		: %d\n", g.jampokok);
	printf("\t\t\tJam kerja lembur	: %d\n", g.jamlembur);
	printf("\n\t\t\t====================================\n");
	
	printf("\t\t\tGaji pokok perjam	: Rp. %d\n", gajiperjam);
	printf("\t\t\tJumlah gaji pokok	: Rp. %d\n", g.gajipokok);
	printf("\t\t\tJumlah gaji lembur	: Rp. %d\n", g.gajilembur);
	printf("\t\t\tJumlah gaji total	: Rp. %d\n", g.totalgaji);
	printf("\n\t\t\t====================================\n\n");
	ulangi();
	
}

void ulangi(){
	int ulang;
	char yakin;
	printf("\t\t\t+-----------------------------+\n");
	printf("\t\t\t| [1] Kembali menghitung gaji |\n");
	printf("\t\t\t| [2] Keluar                  |\n");
	printf("\t\t\t+-----------------------------+\n");
	kembali:
	printf("\t\t\tTujuan Anda Selanjutnya [1 atau 2] : ");
	ulang = validasi();
	switch(ulang){
		case 1 :
			system ("cls");
			hitunggaji();
			break;
		case 2 :
			system("cls");
			printf("\n\t\t\t===========================================");
			printf("\n\t\t\tTerima Kasih Telah Menggunakan Program Ini");
			printf("\n\t\t\t===========================================");
			exit(0);
			break;
		default :
			printf("\t\t\tTujuan Tidak Tersedia!\n");
			goto kembali;
	}
	
}
	

int main(){
	hitunggaji();
}
