#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void menu();
void inputHadir();
void inputNilai();
float nilaiPoin();
float validasiInput();
float validasiHadir();
void grading();
void keluar();

void menu(){
	char pilih;	
	
	system("cls");
	system("Color 06");
	printf("=========================================\n");
	printf("|	   Program Nilai Akhir	 	|\n");
	printf("=========================================\n");
	printf("|	Menu Program Nilai Akhir	|\n");
	printf("=========================================\n");
	printf(" \n\t    Yang dibutuhkan:\n");
	printf("\t 1. Jumlah kehadiran\n");
	printf("\t 2. Nilai tugas 1-3\n");
	printf("\t 3. Nilai quiz\n");
	printf("\t 4. Nilai UTS\n");
	printf("\t 5. Nilai UAS\n");

    printf("\n Apakah ingin memulai?(Y/N): ");
	pilih = getche();

    ulang1:
	if (pilih =='Y'){
		system("Color 0E");
        printf("\n\n    Oke, tunggu sebentar ...\n\n\t");
		sleep(2);
		system("cls");
    }
    else if (pilih=='N'){
    	keluar();
    }
    else if(pilih !='Y' && pilih != 'N'){
    	system("Color 04");
		printf("\n Input yang diberikan salah!\n\n");
    	system("cls");
    	printf(" Masukan input yang benar(Y/N): ");
    	pilih = getche();
		goto ulang1;
	}
}

void inputHadir(){
	float hadir;
	
	//Input Jumlah Kehadiran
	system("Color 06");
	printf("=========================================\n");
	printf("|	 Program Nilai Akhir		|\n");
	printf("=========================================\n");
	printf("\n\t1. Jumlah Kehadiran\n");
	printf("\t\tMasukan jumlah kehadiran (max. 15): ");
	hadir = validasiHadir();
	
	system("cls");
	
}
	
void inputNilai(){
	float tugas1, tugas2, tugas3, quiz, uts, uas;
		
	//Input Nilai Tugas 1
	system("cls");
	system("Color 06");
	printf("=========================================\n");
	printf("|	 Program Nilai Akhir		|\n");
	printf("=========================================\n");
	printf("\n\n\t2. Nilai Tugas Pertama\n");
	printf("\t\tMasukan nilai tugas ke-1: ");
	tugas1 = validasiInput();
	
	//Input Nilai Tugas 2
	system("Color 06");
	printf("\n\n\t   Nilai Tugas Kedua\n");
	printf("\t\tMasukan nilai tugas ke-2: ");
	tugas2=validasiInput();
	
	//Input Nilai Tugas 3
	printf("\n\n\t\t Nilai Tugas Ketiga\n");
	printf("\t\tMasukan nilai tugas ke-3: ");
	tugas3=validasiInput();
	
	
	system("cls");

	//Input Nilai Quiz
	printf("=========================================\n");
	printf("|	 Program Nilai Akhir		|\n");
	printf("=========================================\n");
	printf("\n\n\t3. Nilai Quiz\n");
	printf("\t\tMasukan nilai quiz: ");
	quiz=validasiInput();
	
	system("cls");

	//Input Nilai UTS
	printf("=========================================\n");
	printf("|	 Program Nilai Akhir		|\n");
	printf("=========================================\n");
	printf("\n\n\t4. Nilai Ujian Tengah Semester\n");
	printf("\t\tMasukan nilai UTS: ");
	uts=validasiInput();
	
	system("cls");

	//Input Nilai UAS
	printf("=========================================\n");
	printf("|	 Program Nilai Akhir		|\n");
	printf("=========================================\n");
	printf("\n\n\t5. Nilai Ujian Akhir Semester\n");
	printf("\t\tMasukan nilai UAS: ");
	uas=validasiInput();
	
	system("cls");
	printf("\n\t\tSemua nilai berhasil diinput, tunggu sebentar\n\t\t\t\t");
	sleep(1);
	
}

float nilaiPoin (){
	float hadir, nhadir;
	float tugas1, tugas2, tugas3, ntugas, sumTugas;
	float quiz, nquiz;
	float uts, nuts;
	float uas, nuas;
	float totalPoin;
	
	sumTugas = tugas1 + tugas2 + tugas3;
	
    nhadir = hadir * 5 / 100;
    ntugas = sumTugas * 20 / 100;
    nquiz = quiz * 15 / 100;
    nuts = uts * 30 / 100;
    nuas = uas * 30 / 100;
    
    totalPoin = 0;
    totalPoin = (nhadir + ntugas + nquiz + nuts + nuas);
    
    printf("Nilai hadir : %.2f", nhadir);
    printf("Nilai tugas : %.2f", ntugas);
    printf("Nilai quiz : %.2f", nquiz);
    printf("Nilai UTS : %.2f", nuts);
    printf("Nilai UAS : %.2f", nuas);    
    printf("Total Nilai : %.2f", totalPoin);
    
}


void grading(){
	float totalPoin;
	
	system("cls");
	system("Color 0A");
	if (totalPoin >= 80){
		printf ("\n\tGrade yang diterima adalah A");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
		}
	else if (totalPoin < 80 && totalPoin >= 75){
		printf ("\n\tGrade yang diterima adalah B+");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
		}
	else if (totalPoin < 75 && totalPoin >= 65){
		printf ("\n\tGrade yang diterima adalah B");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
		}	
	else if (totalPoin < 65 && totalPoin >= 60){
		printf ("\n\tGrade yang diterima adalah C+");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
		}
	else if (totalPoin < 60 && totalPoin >= 55){
		printf ("\n\tGrade yang diterima adalah C");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
		}
	else if (totalPoin < 55 && totalPoin >= 50){
		printf ("\n\tGrade yang diterima adalah D+");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
		}
	else if (totalPoin < 50 && totalPoin >= 45){
		printf ("\n\tGrade yang diterima adalah D");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
		}
	else if (totalPoin < 45){
		printf ("\n\tGrade yang diterima adalah E");
		printf ("\n\tDengan Perolehan Poin : %.2f", totalPoin);
	}
	sleep(5);
	
}

void akhirUlang(){
	int akhir;
	
	system("color 06");
	printf("\n\nApakah yang anda ingin lakukan setelah ini?\n\n");
	printf(" 1. Mulai\n");
	printf(" 2. Keluar\n");
	akhir = validasi1();
	
	switch(akhir){
		case 1:
			menu();
			break;
		case 2:
			keluar();
			break;	
	}
}

int validasi1(){
    int bilangan;
    char huruf;
    scanf("%d%c", &bilangan,&huruf);
    if(huruf != '\n' || bilangan<0){
        system("Color 04");
		printf("\n\t---Input salah!---\n");
        printf("\n\tUlang masukan yang benar : ");
        fflush(stdin);
    }
	else{
        return bilangan;
    }
}

float validasiInput(){
    float bilangan;
    char huruf;
    scanf("%f%c", &bilangan,&huruf);
    if(huruf != '\n' || bilangan < 0 || bilangan > 100){
        system("Color 04");
		printf("\n\t---Input salah!---\n");
        printf("\n\tUlang masukan yang benar : ");
        fflush(stdin);
        validasiInput();
    }
	else{
        return bilangan;
    }
}

float validasiHadir(){
    float bilangan;
    char huruf;
    scanf("%f%c", &bilangan,&huruf);
    if(huruf != '\n'){
        system("Color 04");
		printf("\n\t---Input salah!---\n");
        printf("\n\tUlang masukan yang benar : ");
        fflush(stdin);
        validasiHadir();
    }
    else if(bilangan < 0 || bilangan > 15){
    	system("Color 04");
        printf("\n\t---Nilai yang dimasukkan tidak tepat!---\n");
        printf("\n\tUlang masukan yang benar : ");
        fflush(stdin);
        validasiHadir();
    }
    else if(bilangan == 0 || bilangan<0){
        system("Color C7");
		printf("\n\tNilai anda otomatis E\n");
		sleep(1);
		system("Color 40");
		sleep(1);
        keluar();
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

void mulai(){
	int mulai;
	
	system("Color 06");
	printf("=========================================\n");
	printf("|	   Program Nilai Akhir	 	|\n");
	printf("=========================================\n");
	printf("=======================================\n");
	printf(" 1. Mulai\n");
	printf(" 2. Keluar\n");
	
	ulang:
	printf("\nMasukan pilihan menu: ");
	mulai=validasi1();
	
	switch(mulai){
		case 1:
			menu();
			break;
		case 2:
			keluar();
			break;	
		default:
			printf("---Masukkan salah!---\n\n");
			goto ulang;
			break;
	}
	
	inputHadir();
	inputNilai();
	float poinNilai();
	grading();
	akhirUlang();
		
}

int main(){
	mulai();
	
	return 0;
}
