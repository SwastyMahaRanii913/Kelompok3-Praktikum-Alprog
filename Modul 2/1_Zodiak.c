#include <stdio.h>
#include <stdlib.h>

void tentukanZodiak();
int tanggalMaximum(int bulan);
int clean();


int main () {
	char menu, validasi;
	system ("cls");
	
	printf ("\n	+------------PROGRAM MENENTUKAN ZODIAK------------+\n");
	printf ("	|                      MENU                       |\n");
	printf ("	+-------------------------------------------------+\n");	
	printf ("	|               1. TENTUKAN ZODIAK                |\n");
	printf ("	|               2. EXIT                           |\n");
	printf ("	+-------------------------------------------------+\n");
	
	do{
		printf ("\n\tMasukan Menu Pilihan Anda: ");
		if (((scanf ("%c%c", &menu, &validasi)) != 2 || validasi != '\n')&& clean()){
			printf ("\n\tInput salah, Mohon Masukan Sesuai Menu Yang Ada: \n");
		}
		else{
			if(menu == '1'){
				tentukanZodiak();
				break;	
			}
			else if (menu == '2'){
				break;
			}
			else{
				printf ("\n\tInput salah, Mohon Masukan Sesuai Menu Yang Ada: \n");
			}
		}
	}while(1);
	
	return 0;
}

 int tanggalMaximum (int bulan){
	switch(bulan){ 
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 2:
			return 29;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
	}
}

int clean(){
	while(getchar() != '\n');
	return 1;
}

 void tentukanZodiak(){
    char menu,validasi;
	int tanggal,bulan,maxTanggal;
	system ("cls");
	
	printf ("\n	+-------------------------------------------------+	\n");	
	printf ("	|                TENTUKAN ZODIAK                  | \n");
	printf ("	+-------------------------------------------------+	\n");
	do{
		printf ("\n\tMasukan Bulan : ");
		if(((scanf ("%d%C",&bulan,&validasi)) != 2 || validasi != '\n')&& clean()){
			printf ("\n\tInput salah, Mohon Masukan Bulan Yang Sesuai: \n");
		}
		else{
			if(bulan <=0 || bulan >12){
			printf ("\n\tInput salah, Mohon Masukan Bulan Yang Sesuai: \n");	
			}
			else{
				break;
			}
		}
	}while(1);
	
	maxTanggal = tanggalMaximum(bulan);
	do{
		printf ("\tMasukan Tanggal: ",maxTanggal);
		if(((scanf ("%d%C",&tanggal,&validasi)) != 2 || validasi != '\n')&& clean()){
			printf ("\n\tInput salah, Mohon Masukan Tanggal Yang Sesuai: \n",maxTanggal);
		}
		else{
			if(tanggal <=0 || tanggal > maxTanggal){
			printf ("\n\tInput salah, Mohon Masukan Tanggal Yang Sesuai: \n",maxTanggal);	
			}
			else{
				break;
			}
		}
	}while(1);
	
	if((tanggal >= 21 && bulan ==3) || (tanggal <=19 && bulan ==4)){
		printf ("	+-------------------------------------------------+	\n");	
		printf ("	|               ZODIAK ANDA ADALAH                | \n");
		printf ("	|                    =ARIES=                      | \n");
		printf ("	+-------------------------------------------------+	\n");
	}
	else if((tanggal >= 20 && bulan ==4) || (tanggal <=20 && bulan ==5)){
		printf ("	+-------------------------------------------------+	\n");	
		printf ("	|               ZODIAK ANDA ADALAH                | \n");
		printf ("	|                   =TAURUS=                      | \n");
		printf ("	+-------------------------------------------------+	\n");
	}
	else if((tanggal >= 21 && bulan ==5) || (tanggal <=20 && bulan ==6)){
		printf ("	+-------------------------------------------------+	\n");	
		printf ("	|               ZODIAK ANDA ADALAH                | \n");
		printf ("	|                   =GEMINI=                      | \n");
		printf ("	+-------------------------------------------------+	\n");;
	}
	else if((tanggal >= 21 && bulan ==6) || (tanggal <=22 && bulan ==7)){
		printf ("	+-------------------------------------------------+	\n");	
		printf ("	|               ZODIAK ANDA ADALAH                | \n");
		printf ("	|                   =CANCER=                      | \n");
		printf ("	+-------------------------------------------------+	\n");
	}
	else if((tanggal >= 23 && bulan ==7) || (tanggal <=22 && bulan ==8)){
		printf ("	+-------------------------------------------------+	\n");	
		printf ("	|               ZODIAK ANDA ADALAH                | \n");
		printf ("	|                     =LEO=                       | \n");
		printf ("	+-------------------------------------------------+	\n");
	}
	else if((tanggal >= 23 && bulan ==8) || (tanggal <=22 && bulan ==9)){
		printf ("	+-------------------------------------------------+	\n");	
		printf ("	|               ZODIAK ANDA ADALAH                | \n");
		printf ("	|                    =VIRGO=                      | \n");
		printf ("	+-------------------------------------------------+	\n");
	}
	else if((tanggal >= 23 && bulan ==9) || (tanggal <=22 && bulan ==10)){
		printf ("	+-------------------------------------------------+	\n");	
		printf ("	|               ZODIAK ANDA ADALAH                | \n");
		printf ("	|                    =LIBRA=                      | \n");
		printf ("	+-------------------------------------------------+	\n");
	}
	else if((tanggal >= 23 && bulan ==10) || (tanggal <=21 && bulan ==11)){
		printf ("	+-------------------------------------------------+	\n");	
		printf ("	|               ZODIAK ANDA ADALAH                | \n");
		printf ("	|                   =SCORPIO=                     | \n");
		printf ("	+-------------------------------------------------+	\n");
	}
	else if((tanggal >= 22 && bulan ==11) || (tanggal <=21 && bulan ==12)){
		printf ("	+-------------------------------------------------+	\n");	
		printf ("	|               ZODIAK ANDA ADALAH                | \n");
		printf ("	|                  =SAGITARIUS=                   | \n");
		printf ("	+-------------------------------------------------+	\n");
	}
	else if((tanggal >= 22 && bulan ==12) || (tanggal <=19 && bulan ==1)){
		printf ("	+-------------------------------------------------+	\n");	
		printf ("	|               ZODIAK ANDA ADALAH                | \n");
		printf ("	|                   =CAPRICORN=                   | \n");
		printf ("	+-------------------------------------------------+	\n");
	}
	else if((tanggal >= 20 && bulan ==1) || (tanggal <=18 && bulan ==2)){
		printf ("	+-------------------------------------------------+	\n");	
		printf ("	|               ZODIAK ANDA ADALAH                | \n");
		printf ("	|                   =AQUARIUS=                    | \n");
		printf ("	+-------------------------------------------------+	\n");
	}
	else if((tanggal >= 19 && bulan ==2) || (tanggal <=20 && bulan ==3)){
		printf ("	+-------------------------------------------------+	\n");	
		printf ("	|               ZODIAK ANDA ADALAH                | \n");
		printf ("	|                    =PISCES=                     | \n");
		printf ("	+-------------------------------------------------+	\n");
	}
	
	
	printf("\n\n\n\t----Silakan Ketik----");
	printf("\n\tY=mengulang \n\tM=kembali ke menu \n\tX=menutup program");
	do{
		printf("\n\tMasukkan pilihan Anda: ");
		if((scanf(" %c%c", &menu, &validasi)) != 2 || validasi != '\n'){
			printf("\n\n\n\t----Silakan Ketik----");
			printf("\n\tY=mengulang \n\tM=kembali ke menu \n\tX=menutup program");
		}
		else{
			if(menu == 'Y' || menu == 'y'){
				tentukanZodiak();
				break;
			}
			else if(menu == 'M' || menu == 'm'){
				main();
				break;
			}
			else if(menu == 'X' || menu == 'x'){
				break;
			}
			else{
				printf("\n\n\n\t----Silakan Ketik----");
				printf("\n\tY=mengulang \n\tM=kembali ke menu \n\tX=menutup program");
			}
		}
	}while(1);
}

