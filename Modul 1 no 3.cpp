#include <stdio.h>
#include <stdlib.h>

float ltabung(float jari, float phi, int tinggi){
	float luas;
	luas = 2 * phi * jari * (jari + tinggi);
	printf("\nluas tabung adalah  = %.2f cm2", luas);
	return luas;
}

float vtabung(float jari, float phi, int tinggi){
	float vol;
	vol = phi * jari * jari * tinggi;
	printf("\nvolume tabung adalah  = %.2f cm3", vol);
	return vol;
}

float lbola(float jari, float phi){
	float luas;
	luas = 4 * phi * ( jari * jari );
	printf("\nluas bola adalah  = %.2f cm2", luas);
	return luas;
}

float vbola(float jari, float phi){
	float vol;
	vol = (1.33333) * phi * ( jari * jari * jari );
	printf("\nVolume bola adalah  = %.2f cm3", vol);
	return vol;
}

int luas_limas(int sisi, int tinggi){
	
	int luas_alas;
	int luas_sisit;
	int luas_limas;
	
	luas_alas = sisi * sisi;
	
	luas_sisit = 4 * ( 0.5 * sisi * tinggi );
	
	luas_limas = luas_alas + luas_sisit;
	
	printf("\nLuas Limas Segiempat adalah  = %d cm2", luas_limas);
	return luas_limas;
}

int vol_limas(int sisi, int tinggi){
	int vol;
	
	vol =  (0.33333) * (sisi * sisi)* tinggi;
	printf("\nVolume Limas Segiempat adalah  = %d cm3", vol);
	return vol;
}

int luas_prisma(int alas,int tinggi, int tinggi_p){
	
	int l_prisma;
	l_prisma = (2 * (alas* tinggi)) + (3 * (tinggi_p * alas));
	printf("\nLuas Prisma adalah  = %d cm2", l_prisma);
	return l_prisma;
	
}

int vol_prisma(int alas, int tinggi, int tinggi_p){
	int vol;
	
	vol = (0.5 * alas * tinggi) * tinggi_p;
	printf("\nVolume Prisma adalah  = %d cm3", vol);
	return vol;
}

float luas_kerucut(float phi, float jari, int sisi){
	float l_kerucut;
	
	l_kerucut = (phi) * (jari )* ( jari + sisi);
	
	printf("\nLuas Prisma adalah  = %.2f cm2", l_kerucut);
	return l_kerucut;
}

float vol_kerucut(float phi, int tinggi,float jari ){
	float vol;
	
	vol = phi*jari*jari*tinggi/3;
	printf("\nVol kerucut adalah  = %.2f cm3", vol);
	return vol;
}


int main(){
	
	int sisi, panjang, lebar, tinggi, alas,tinggi_p;
	int pilihan, pilihan2;
	float phi = 3.14;
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
		printf("\nAnda memilih Tabung \n");
		printf("a. Luas\n");
		printf("b. Volume\n");
		printf ("silahkan pilih yang akan dihitung :");
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
