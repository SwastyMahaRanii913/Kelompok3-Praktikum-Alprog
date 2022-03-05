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
