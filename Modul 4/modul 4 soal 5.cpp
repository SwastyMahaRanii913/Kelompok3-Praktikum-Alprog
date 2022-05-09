#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


int main();
int menu();
int valid();
void pembuka();
int readAsistenin();
int urutanNilai();
void sortData();
void output();
void ulang();
void exit();


struct Mahasiswa{
	char nama[20];
	int nilai;
};

void exit(){
	system("cls");
	printf("\n\n+-----------------------------------------------------------------------------+");
	printf("\n|                              TERIMAKASIH !!!!!                              |");
    printf("\n+-----------------------------------------------------------------------------+");
    printf("\n");
    exit(0);
}

int valid(){
	int bilangan;
    char huruf;
    scanf("%d%c", &bilangan,&huruf);
    if(huruf != '\n' || bilangan<0){
        printf("\n\n Menu Tidak Tersedia !!\n");
        printf(" Masukan Ulang Pilihan : ");
        fflush(stdin);
        valid();
    }
	else{
        return bilangan;
    }
}

void pembuka(){
	printf("\n");
	system("cls");
    printf("+-----------------------------------------------------------------------------+");
	printf("\n|                          PRAKTIKUM ALPROG  MODUL IV                         |");
	printf("\n|                               PROGRAM  ASISTEN                              |");
	printf("\n|                                By Kelompok 05                               |");
    printf("\n+-----------------------------------------------------------------------------+\n\n");
	printf("DATA DISIMPAN PADA FILE asistenin.txt.\n\n");
    printf("Pengecekan file asistenin.txt.");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    printf ("\n\n");
}


void ulang(){
    char ulang_huruf[1];
    
    printf("\n  Ingin Ulang Atau Keluar ?\n");
    printf("\n [U] Ulang \n\n");
    printf(" [N] Keluar \n");
    printf("\n  Masukkan Pilihan : ");
    scanf("%s", &ulang_huruf);
    fflush(stdin);
    
	
    if((strcmp(ulang_huruf, "n") != 0) && (strcmp(ulang_huruf, "u") != 0)){
        printf("\n Input Salah ! Masukan Input Dengan Benar\n");
        ulang();
    }
	else if((strcmp(ulang_huruf, "u") == 0)){
        system("cls");
		main();
    }
	else{
        exit();
    }
}

int urutanNilai(){
    char huruf_sort[1];
	int hasil = 0;
    
    printf("===============================================================================\n\n");
    printf("  Urutkan Nilai ?\n");
    printf("\n [Y] Yes \n\n");
    printf(" [N] No \n");
    printf("\n  Masukkan Pilihan : ");
    scanf("%s", &huruf_sort);
    fflush(stdin);
    
    system("cls");
    if((strcmp(huruf_sort, "y") != 0) && (strcmp(huruf_sort, "n") != 0)){
        printf("\n Masukan salah! Input dengan benar\n\n");
        urutanNilai();
    }
	else if((strcmp(huruf_sort, "y") == 0)){
		hasil = 1;
    }
	else{
		hasil = 0;
    }

	return hasil;
}

int readAsistenin(struct Mahasiswa data[]){
	int a = 0;
	FILE *in = fopen("asistenin.txt","r");
	if(!in){
		printf("    File asistenin.txt tidak ditemukan\n");
		printf("    Silahkan buat file asistenin.txt terlebih dahulu\n");
	}
	else{
        printf("  Data Nilai Mahasiswa : \n");
		while(!feof(in)){
			printf("    ");
		    fscanf(in,"%[^\n]\n", &data[a].nama);
		    fscanf(in,"%d\n", &data[a].nilai);
            fflush(stdin);
		    printf("%d. %s : %d\n", a+1, data[a].nama, data[a].nilai);
		    a++;
		}
	}
	fclose(in);

	return a;
}


void sortData(struct Mahasiswa data[], int a){
	struct Mahasiswa temp;
	int i, j;
	for(i = 0; i < a - 1; i++){
		for(j = 0; j < a - 1; j++){
			if(data[j+1].nilai > data[j].nilai){
				temp = data[j+1];
				data[j+1] = data[j];
    			data[j] = temp;
			}
    	}
	}
}

void output(struct Mahasiswa data[], int a){
	int i;
	FILE *out = fopen("asistenout.txt","w");
	fprintf(out, "Nilai Mata Kuliah Algoritma dan Pemrograman\n");
	for(i = 0; i < a; i++){
		fprintf(out,"%d. %s %d\n", i+1, data[i].nama, data[i].nilai);
	}
	fclose(out);
}


	
int menu (){
	int pilihan;
		
	printf("+-----------------------------------------------------------------------------+");
	printf("\n|                          PRAKTIKUM ALPROG  MODUL IV                         |");
	printf("\n|                               PROGRAM  ASISTEN                              |");
	printf("\n|                                By Kelompok 05                               |");
    printf("\n+-----------------------------------------------------------------------------+\n\n");
	do{
		printf("    +----------------------------------------+\n");
		printf("    |                  MENU                  |\n");
		printf("    +----------------------------------------+\n");
		printf("    |               1. Nilai Rangking        |\n");
		printf("    |               2. KELUAR                |\n");
		printf("    +----------------------------------------+\n\n\n");
		printf("Masukkan Pilihan Menu  [1 atau 2] = ");
		pilihan=valid();
		
	system("cls");
				if(pilihan == 1){
					pembuka();
					break;
				}
				else if(pilihan == 2){ 
					exit();
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

int main(){
	struct Mahasiswa data[50];
	struct Mahasiswa temp;
	int a = 0;
	int i, j, k;
	int sort;
	char tempNama[20];
	int tempNilai;
	
	menu();
    
	/* Membaca data dalam asistenin.txt lalu disimpan ke array */
	a = readAsistenin(data);
	
	printf("\n");
	urutanNilai();
	
	if(sort == 1){
	/* Pengurutan nilai dan nama */
		sortData(data, a);
		printf("\n");

		/* Pencetakan ke asistenout.txt */
		output(data, a);
		printf("\n===============================================================================\n\n");	
		printf("  Data Berhasil Di Urutkan !\n");
		printf("  Silahkan Cek File asistenout.txt\n");
	}
	printf("\n===============================================================================\n");
	ulang();

    return 0;
}



