#include <stdio.h>
#include <stdlib.h>

float ltabung(float jari, float PHI, int tinggi){
	float luas;
	luas = 2 * PHI * jari * (jari + tinggi);
	printf("\t\t=======================================================\n");
	printf("\n\t\t Luas tabung adalah  = %.2f cm2", luas);
	return luas;
}

float vtabung(float jari, float PHI, int tinggi){
	float vol;
	vol = PHI * jari * jari * tinggi;
	printf("\t\t=======================================================\n");
	printf("\n\t\t Volume tabung adalah  = %.2f cm3", vol);
	return vol;
}

float lbola(float jari, float PHI){
	float luas;
	luas = 4 * PHI * ( jari * jari );
	printf("\t\t=======================================================\n");
	printf("\n\t\t Luas bola adalah  = %.2f cm2", luas);
	return luas;
}

float vbola(float jari, float PHI){
	float vol;
	vol = (1.33333) * PHI * ( jari * jari * jari );
	printf("\t\t=======================================================\n");
	printf("\n\t\t Volume bola adalah  = %.2f cm3", vol);
	return vol;
}

int luas_limas(int sisi, int tinggi){
	
	int luas_alas;
	int luas_sisit;
	int luas_limas;
	
	luas_alas = sisi * sisi;
	
	luas_sisit = 4 * ( 0.5 * sisi * tinggi );
	
	luas_limas = luas_alas + luas_sisit;
	printf("\t\t=======================================================\n");
	printf("\n\t\t Luas Limas Segiempat adalah  = %d cm2", luas_limas);
	return luas_limas;
}

int vol_limas(int sisi, int tinggi){
	int vol;
	
	vol =  (0.33333) * (sisi * sisi)* tinggi;
	printf("\t\t=======================================================\n");
	printf("\n\t\t Volume Limas Segiempat adalah  = %d cm3", vol);
	return vol;
}

int luas_prisma(int alas,int tinggi, int tinggi_p){
	
	int l_prisma;
	l_prisma = (2 * (alas* tinggi)) + (3 * (tinggi_p * alas));
	printf("\t\t=======================================================\n");
	printf("\n\t\t Luas Prisma adalah  = %d cm2", l_prisma);
	return l_prisma;
	
}

int vol_prisma(int alas, int tinggi, int tinggi_p){
	int vol;
	
	vol = (0.5 * alas * tinggi) * tinggi_p;
	printf("\t\t=======================================================\n");
	printf("\n\t\t Volume Prisma adalah  = %d cm3", vol);
	return vol;
}

float luas_kerucut(float phi, float jari, int sisi){
	float l_kerucut;
	
	l_kerucut = (phi) * (jari )* ( jari + sisi);
	printf("\t\t=======================================================\n");
	printf("\n\t\t Luas Prisma adalah  = %.2f cm2", l_kerucut);
	return l_kerucut;
}

float vol_kerucut(float phi, int tinggi,float jari ){
	float vol;
	
	vol = phi*jari*jari*tinggi/3;
	printf("\t\t=======================================================\n");
	printf("\n\t\t Vol kerucut adalah  = %.2f cm3", vol);
	return vol;
}


float validasi1(){
    int bilangan;
    char huruf;
    scanf("%d%c", &bilangan,&huruf);
    if(huruf != '\n'){
        printf("\t\t---Masukkan salah!---\n");
        printf("\n\t\t Ulang masukan angka	: ");
        fflush(stdin);
        validasi1();
    }
	else{
        return bilangan;
    }
}

float validasi2(){
    float bilangan;
    char huruf;
    scanf("%f%c", &bilangan,&huruf);
    if(huruf != '\n'){
        printf("\t\t---Masukkan salah!---\n");
        printf("\n\t\t Ulang masukan angka	: ");
        fflush(stdin);
        validasi2();
    }
	else{
        return bilangan;
    }
}


int main(){
	
	int sisi, panjang, lebar, tinggi, alas,tinggi_p;
	int pilihan
	char pilihan2;
	const float PHI = 3.14;
	float jari, vol, luas;
	
	system("Color 0E");
	printf("		 _____________________________________________________ \n");		
	printf("		|                                                     |\n");
	printf("		|                   SELAMAT DATANG                    |\n");
	printf("		|          Program Menghitung Volume dan Luas         |\n");
	printf("		|_____________________________________________________|\n");		
	printf(" 		|| 1. TABUNG                                         ||\n");
	printf("		|| 2. BOLA                                           ||\n");
	printf(" 		|| 3. LIMAS SEGIEMPAT                                ||\n");
	printf(" 		|| 4. PRISMA SEGITIGA                                ||\n");
	printf(" 		|| 5. KERUCUT                                        ||\n");
	printf("		=======================================================\n");
	printf(" 		|| SILAHKAN DIPILIH : ");
	scanf("%c", &pilihan);
	
	system("cls");
	if (pilihan == '1'){
		printf("\t\t||                                                   ||\n");
		printf("\t\t||                 ANDA MEMILIH TABUNG               ||\n");
		printf("\t\t||                                                   ||\n");
		printf("\t\t=======================================================\n");
		printf("\t\t|| a. Luas\n");
		printf("\t\t|| b. Volume\n");
		printf("\t\t Silahkan pilih yang akan dihitung :");
		getchar();
		scanf("%c", &pilihan2);
		
		if (pilihan2 == 'a'){
			printf("\nMasukan Jari-jari Tabung : ");
			scanf("%f", &jari);
			printf("Masukan Tingginya = ");
			scanf("%d", &tinggi);
			
			return 	luas = ltabung( jari, phi, tinggi);
    		system("cls");
		}else if(pilihan2 == 'b'){
			printf("\nMasukan Jari-jari Tabung : ");
			scanf("%f", &jari);
			printf("Masukan Tingginya = ");
			scanf("%d", &tinggi);
			
			return 	vol = vtabung( jari, phi, tinggi);
    		system("cls");
		}
	}else if (pilihan == '2'){
		printf("\nAnda memilih Bola \n");
		printf("a. Luas\n");
		printf("b. Volume\n");
		printf ("silahkan pilih yang akan dihitung :");
		getchar();
		scanf("%c", &pilihan2);
		
		if (pilihan2 == 'a'){
			printf("\nMasukan Jari-jari Bola : ");
			scanf("%f", &jari);
			
			return 	luas = lbola( jari, phi);
    		system("cls");
		}else if(pilihan2 == 'b'){
			printf("\nMasukan Jari-jari Bola : ");
			scanf("%f", &jari);
			
			return 	vol = vbola( jari, phi);
    		system("cls");
		}
	}else if (pilihan == '3'){
		printf("\nAnda memilih Limas \n");
		printf("a. Luas\n");
		printf("b. Volume\n");
		printf ("silahkan pilih yang akan dihitung :");
		getchar();
		scanf("%c", &pilihan2);
		
		if (pilihan2 == 'a'){
			printf("\nMasukan Sisi : ");
			scanf("%d", &sisi);
			printf("Masukan Tingginya = ");
			scanf("%d", &tinggi);
			
			return luas = luas_limas(sisi, tinggi);
    		system("cls");
		}else if (pilihan2 == 'b'){
			printf("\nMasukan Sisi : ");
			scanf("%d", &sisi);
			printf("Masukan Tingginya = ");
			scanf("%d", &tinggi);
			
			return vol = vol_limas(sisi, tinggi);
    		system("cls");
		}	
	}else if (pilihan == '4'){
		printf("\nAnda memilih Prisma \n");
		printf("a. Luas\n");
		printf("b. Volume\n");
		printf ("silahkan pilih yang akan dihitung :");
		getchar();
		scanf("%c", &pilihan2);
		
		if (pilihan2 == 'a'){
			printf("\nMasukan Alasnya : ");
			scanf("%d", &alas);
			printf("Masukan Tingginya = ");
			scanf("%d", &tinggi);
			printf("Masukan Tinggi Prisma = ");
			scanf("%d", &tinggi_p);
			
			return luas = luas_prisma(alas, tinggi, tinggi_p);
    		system("cls");
		}else if (pilihan2 == 'b'){
			printf("\nMasukan Alasnya : ");
			scanf("%d", &alas);
			printf("Masukan Tingginya = ");
			scanf("%d", &tinggi);
			printf("Masukan Tinggi Prisma = ");
			scanf("%d", &tinggi_p);
			
			return vol = vol_prisma(alas, tinggi, tinggi_p);
    		system("cls");
		}
	}else if (pilihan == '5'){
		printf("\nAnda memilih Kerucut \n");
		printf("a. Luas\n");
		printf("b. Volume\n");
		printf ("silahkan pilih yang akan dihitung :");
		getchar();
		scanf("%c", &pilihan2);
		
		if (pilihan2 == 'a'){
			printf("\nMasukan Garis Pelukisnya : ");
			scanf("%d", &sisi);
			printf("Masukan jari-jarinya = ");
			scanf("%f", &jari);
			
			return luas = luas_kerucut( phi, jari, sisi);
    		system("cls");
		}else if (pilihan2 == 'b'){
			printf("\nMasukan jari-jarinya = ");
			scanf("%f", &jari);
			printf("Masukan Tingginya = ");
			scanf("%d", &tinggi);
			
			return vol = vol_kerucut(phi, tinggi, jari);
    		system("cls");
		}
	}else{
		printf("\n\n\t\t========================================================\n");
		printf("		|           PILIHAN YANG ANDA MASUKKAN SALAH           |\n");
		printf("		|           HARAP MASUKKAN PILIHAN YANG BENAR          |\n");
		printf("		========================================================\n");
	} 
	return 0;	
}
