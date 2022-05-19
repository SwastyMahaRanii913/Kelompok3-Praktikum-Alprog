#include <stdio.h>
#include <stdlib.h>

void towerHanoiRekursif();
void hanoiRekursif(int cakram, int asal, int tujuan, int temp);
void towerHanoiIteratif();
int clean();

void keluar(){
	printf("\t\t+-------------------------------------------------+\n");
	printf("\t\t|          TERIMAKSIH SUDAH MENGGUNAKAN           |\n");
	printf("\t\t+-------------------------------------------------+\n");
}

void towerHanoiRekursif(){
	char pilihan, validasi;
	int cakram, i, counter = 1; 


	system("cls"); 
	printf("		 _____________________________________________________ \n");
	printf("		|                  PROGRAM TOWER HANOI                |\n");
	printf("		|                    METODE REKURSIF                  |\n");
	printf("		|_____________________________________________________|\n");
	do{
		printf("\n\t Masukkan jumlah cakram: ");
		if(((scanf("%d%c", &cakram, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\t Inputan salah! Mohon hanya memasukkan angka lebih dari 0.\n\n"); 
		}
		else{
			if(cakram <= 0){ 
				printf("\t Inputan salah! Mohon hanya memasukkan angka lebih dari 0.\n\n"); 
			}
			else{ 
				break; 
			}
		}
	}while(1);
	printf("\t ------------------------------------------------------\n"); 
	printf("\t Langkah-Langkahnya\n");
	hanoiRekursif(cakram,1,3,2); 

	for(i=0; i<cakram; i++){ 
		counter = 2 * counter; 
		if(i == cakram - 1){ 
			counter = counter - 1; 
		}
	}
	printf("\n\t Langkah minimum untuk memindahkan %d cakram yaitu: %d", cakram, counter); 

	printf("\n\nApakah Anda ingin menghitung langkah minimum tower hanoi ulang?\nTekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.");
	do{
		printf("\nMasukkan pilihan: ");
		if(((scanf(" %c%c", &pilihan, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("Inputan salah! Tekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.\n\n"); 
		}
		else{
			if(pilihan == 'Y' || pilihan == 'y'){ 
				towerHanoiRekursif(); 
				break; 
			}
			else if(pilihan == 'N' || pilihan == 'n'){ 
				main(); 
				break; 
			}
			else if(pilihan == 'K' || pilihan == 'k'){
				system("cls"); 
				keluar(); 
				exit(0); 
				break; 
			}
			else{ 
				printf("Inputan salah! Tekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.\n\n"); 
			}
		}
	}while(1);
}

void hanoiRekursif(int jmlhCakram, int asal, int tujuan, int temp){
	if (jmlhCakram > 0) { 
        hanoiRekursif(jmlhCakram-1, asal, temp, tujuan);
        printf("\t Memindahkan Cakram paling atas dari Tower %d ke Tower %d\n", asal, tujuan); 
        hanoiRekursif(jmlhCakram-1, temp, tujuan, asal); 
    }
}

void towerHanoiIteratif(){
	char pilihan, validasi; 
	int cakram, i, counter=0;
	char tower[] = {'1','2','3'}; 

	system("cls"); 
	printf("		 _____________________________________________________ \n");
    printf("		|                  PROGRAM TOWER HANOI                |\n");
    printf("		|                    METODE ITERARTIF                 |\n");
	printf("		|_____________________________________________________|\n");
		
	do{
		printf("\n\t Masukkan jumlah cakram: ");
		if(((scanf("%d%c", &cakram, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\t Inputan salah! Mohon hanya memasukkan angka lebih dari 0\n\n"); 
		}
		else{
			if(cakram <= 0){ 
				printf("\t Inputan salah! Mohon hanya memasukkan angka lebih dari 0\n\n"); 
			}
			else{ 
				break; 
			}
		}
	}while(1);
	printf("\t ------------------------------------------------------\n"); 
	printf("\t Langkah-Langkahnya\n");
	if(cakram % 2 == 0){ 
		tower[1] = '3'; 
		tower[2] = '2'; 
	}

	for(i=1; i < (1<<cakram); i++){ 
		counter++; 
		printf("\t Memindahkan Cakram paling atas dari Tower %c ke Tower %c\n", tower[((i & (i - 1)) % 3)], tower[(((i | (i - 1)) + 1) % 3)]); 
	}
	printf("\n\t Langkah minimum untuk memindahkan %d cakram yaitu: %d", cakram, counter);

	printf("\n\nApakah Anda ingin menghitung langkah minimum tower hanoi ulang?\nTekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.");
	do{
		printf("\nMasukkan pilihan: ");
		if(((scanf(" %c%c", &pilihan, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("Inputan salah! Tekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.\n\n"); 
		}
		else{
			if(pilihan == 'Y' || pilihan == 'y'){ 
				towerHanoiIteratif(); 
				break; 
			}
			else if(pilihan == 'N' || pilihan == 'n'){ 
				main(); 
				break; 
			}
			else if(pilihan == 'K' || pilihan == 'k'){
				system("cls"); 
				keluar(); 
				exit(0); 
				break; 
			}
			else{ 
				printf("Inputan salah! Tekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.\n\n"); 
			}
		}
	}while(1);
}

int clean(){
	while(getchar() != '\n'); 
	
	return 1;
}


int main(){
	char pilihan, validasi; 
	system("cls"); 

    printf("		 _____________________________________________________ \n");		
	printf("		|                                                     |\n");
	printf("		|                    SELAMAT DATANG                   |\n");
	printf("		|                  PROGRAM TOWER HANOI                |\n");
	printf("		|_____________________________________________________|\n");
	printf(" 		|| MENU :                                            ||\n");
	printf(" 		|| 1. TOWER HANOI REKURSIF                           ||\n");
	printf("		|| 2. TOWER HANOI ITERATIF                           ||\n");
	printf(" 		|| 3. KELUAR                                         ||\n");

	do{
		printf("\n\t Masukkan pilihan: ");
		if(((scanf(" %c%c", &pilihan, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\t Inputan salah! Mohon hanya memasukkan angka dari 1 hingga 3\n\n"); 
		}else{
			if(pilihan == '1'){ 
				towerHanoiRekursif();
				break; 
			}
			else if(pilihan == '2'){ 
				towerHanoiIteratif(); 
				break; 
			}
			else if(pilihan == '3'){
				system("cls"); 
				keluar(); 
				exit(0); 
				break; 
			}
			else{
				printf("\t Inputan salah! Mohon hanya memasukkan angka dari 1 hingga 3.\n\n"); 
			}
		}
	}while(1);

	return 0; 
}

