#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define phi 3.14

double input();
void clear_buffer();
void restart();
void keluar();
int main();
void luas_segitigasembarang();
void kll_segitigasembarang();
void luas_belahketupat();
void kll_belahketupat();
void luas_jajargenjang();
void kll_jajargenjang();
void luas_trapesium();
void kll_trapesium();
void luas_lingkaran();
void kll_lingkaran();


void menuBangun(){
	printf("\n\n");
	printf("\t\t\t\t\t[][][][][]# PILIH BANGUN DATAR #[][][][][]\n");
	printf("\t\t\t\t\t[]        1. Segitiga Sembarang         []\n");
	printf("\t\t\t\t\t[]        2.   Belah Ketupat            []\n");
	printf("\t\t\t\t\t[]        3.   Jajar Genjang            []\n");
	printf("\t\t\t\t\t[]        4.     Trapesium              []\n");
	printf("\t\t\t\t\t[]        5.     Lingkaran              []\n");
	printf("\t\t\t\t\t[]        6.       Exit                 []\n");
	printf("\t\t\t\t\t------------------------------------------\n");
}

void restart(){
    double reset;
    int opsi;

    printf("\n\n\t\t\t\t\t Tekan tombol apa saja untuk melanjutkan program...");
    getchar();
	system("cls");
	printf("\n\t\t\t\t\t Ingin Menghitung Kembali?\n\n");
	printf("\n\t\t\t\t\t 1. Kembali Menghitung \n");
	printf("\n\t\t\t\t\t 2. Keluar program\n");
	printf("\n\t\t\t\t\t Masukkan pilihan anda : ");
	reset=input();
    opsi=ceil(reset);
	if(reset==1)
	{
		system("cls");
		main();
	}else if (reset==2) {
        system("cls");
		keluar();
    }else{
        printf("\n\t\t\t\t\t Menu tidak tersedia!");
        restart();
    }
}

void segitigaSembarang(){
	int menu;
	char pilih;
	printf("\t\t\t\t\t|================================================|\n");
    printf("\t\t\t\t\t|                SEGITIGA SEMBARANG              |\n");
    printf("\t\t\t\t\t|================================================|\n");
    printf("\t\t\t\t\t|   No  |            Menu Pilihan                |\n");
    printf("\t\t\t\t\t|-------|----------------------------------------|\n");
    printf("\t\t\t\t\t|   1   |     Hitung Luas Segitiga Sembarang     |\n");
    printf("\t\t\t\t\t|   2   |   Hitung Keliling Segitiga Sembarang   |\n");
    printf("\t\t\t\t\t|   3   |                Exit                    |\n");
    printf("\t\t\t\t\t|================================================|\n");
    printf("\t\t\t\t\t            Masukkan Menu Pilihan anda -> "          );
	scanf("%d", &menu);

	if(menu == 1){
        luas_segitigasembarang();
	}else if(menu == 2){
        kll_segitigasembarang();
	}else if(menu == 3){
		system ("cls");
		keluar();
	}else{
		fflush(stdin);
		printf("\n\t\t\t\t\tPerhatikan pilihan yang anda inputkan!");
		printf("\n\t\t\t\t\tIngin keluar program ? [Y/N] >> ");
		scanf("%c", &pilih);

		if(pilih=='y' || pilih=='Y'){
			system("cls");
			keluar();
		}else if(pilih=='n' || pilih=='N'){
			system("cls");
			segitigaSembarang();
		}
	}
}

void luas_segitigasembarang(){
    int s1, s2, s3;
    float s, keliling, luas;
	char ulang;

		printf("\t\t\t\t\t	       #Luas Segitiga Sembarang#								\n");
		printf("\t\t\t\t\t	 Note : s adalah seperimeter = 1/2(a+b+c)								\n");
		printf("\t\t\t\t\tRumus : akar(s*(s - sisi 1)*(s - sisi 2)*(s - sisi 3))	\n");
		printf("\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\t    Masukkan sisi 1 (cm)\t: "	   );
		s1 = input();
		printf("\t\t\t\t\t    Masukkan sisi 2 (cm)\t: "	   );
		s2 = input();
		printf("\t\t\t\t\t    Masukkan sisi 3 (cm)\t: "	   );
		s3 = input();
		printf("\t\t\t\t\t--------------------------------------------------\n");
		
		keliling = s1 + s2 + s3;
		s = keliling/2;
		luas = sqrt (s * (s-s1) * (s-s2) * (s-s3));
		printf("\t\t\t\t\t\t          Hasil : %.2f cm^2", luas);
		getch();
		fflush(stdin);
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\n\t\t\t\t\tKetik 'Y' untuk menghitung kembali\n");
		printf("\t\t\t\t\tKetik 'N' untuk Exit\n");
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\tApakah anda ingin menghitung kembali? -> ");
		scanf("%c", &ulang);
		printf("\t\t\t\t\t--------------------------------------------------\n\n");
		if(ulang == 'y' || ulang == 'Y'){
			luas_segitigasembarang();
		}else if(ulang == 'n' || ulang == 'N'){
			segitigaSembarang();
		}else{
			keluar();
		}
}

void kll_segitigasembarang(){
    int s1, s2, s3;
    float keliling;
	char ulang;
    do{
		printf("\t\t\t\t\t	     #Keliling Segitiga Sembarang#								\n");
		printf("\t\t\t\t\t	   Rumus : sisi 1 + sisi 2 + sisi 3						\n");
		printf("\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\t    Masukkan sisi 1 (cm)\t: "	   );
		s1 = input();
		printf("\t\t\t\t\t    Masukkan sisi 2 (cm)\t: "	   );
		s2 = input();
		printf("\t\t\t\t\t    Masukkan sisi 3 (cm)\t: "	   );
		s3 = input();
		printf("\t\t\t\t\t--------------------------------------------------\n");
		
		if(s1==s2&&s2==s3&&s1==s3){
			printf("\t\t\t\t\t Segitiga sembarang tidak memiliki sisi yang sama!");
		}

	}while(s1==s2&&s2==s3&&s1==s3);
		keliling = s1+s2+s3;
		printf("\t\t\t\t\t          Hasil : %.2f cm",keliling);
		getch();
		fflush(stdin);
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\n\t\t\t\t\tKetik 'Y' untuk menghitung kembali\n");
		printf("\t\t\t\t\tKetik 'N' untuk Exit\n");
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\tApakah anda ingin menghitung kembali? -> ");
		scanf("%c", &ulang);
		printf("\t\t\t\t\t--------------------------------------------------\n\n");
		if(ulang == 'y' || ulang == 'Y'){
			kll_segitigasembarang();
		}else if(ulang == 'n' || ulang == 'N'){
			segitigaSembarang();
		}else{
			keluar();
		}
}

void belahKetupat(){
	int menu;
	char pilih;

	printf("\t\t\t\t\t|================================================|\n");
    printf("\t\t\t\t\t|                  BELAH KETUPAT                 |\n");
    printf("\t\t\t\t\t|================================================|\n");
    printf("\t\t\t\t\t|   No  |             Pilihan                    |\n");
    printf("\t\t\t\t\t|-------|----------------------------------------|\n");
    printf("\t\t\t\t\t|   1   |     Hitung Luas Belah Ketupat          |\n");
    printf("\t\t\t\t\t|   2   |   Hitung Keliling Belah Ketupat        |\n");
    printf("\t\t\t\t\t|   3   |              Exit                      |\n");
    printf("\t\t\t\t\t|================================================|\n");
    printf("\t\t\t\t\t             Masukkan Menu Pilihan anda : "          );
	scanf("%d", &menu);
	if(menu == 1){
        luas_belahketupat();
	}else if(menu == 2){
        kll_belahketupat();
	}else if(menu == 3){
		system ("cls");
		keluar();
	}else{
		fflush(stdin);
		printf("\n\t\t\t\t\tPerhatikan pilihan yang anda inputkan!");
		printf("\n\t\t\t\t\tIngin keluar program ? [Y/N] >> ");
		scanf("%c", &pilih);

		if(pilih=='y' || pilih=='Y'){
			system("cls");
			keluar();
		}else if(pilih=='n' || pilih=='N'){
			system("cls");
			belahKetupat();
		}
	}
}

void luas_belahketupat(){
    int d1, d2;
    float luas;
	char ulang;

		printf("\t\t\t\t\t	         #Luas Belah Ketupat#								\n");
		printf("\t\t\t\t\t\t	Rumus : d1 x d2 x 1/2									\n");
		printf("\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\t    Masukkan diagonal 1 (cm)\t: "	   );
		d1 = input();
		printf("\t\t\t\t\t    Masukkan diagonal 2 (cm)\t: "	   );
		d2 = input();
		printf("\t\t\t\t\t-------------------------------------------------------\n");

		luas = d1*d2*1/2;
		printf("\t\t\t\t\t Hasil : %.2f cm^2", luas);
		getch();
		fflush(stdin);
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\n\t\t\t\t\tKetik 'Y' untuk menghitung kembali\n");
		printf("\t\t\t\t\tKetik 'N' untuk Exit\n");
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\tMasukan pilihan anda -> ");
		scanf("%c", &ulang);
		printf("\t\t\t\t\t--------------------------------------------------\n\n");
		if(ulang == 'y' || ulang == 'Y'){
			luas_belahketupat();
		}else if(ulang == 'n' || ulang == 'N'){
			belahKetupat();
		}else{
			keluar();
		}
}

void kll_belahketupat(){
    int s;
    float keliling;
	char ulang;

		printf("\t\t\t\t\t	       #Keliling Belah Ketupat#								\n");
		printf("\t\t\t\t\t         	  Rumus : sisi x 4										\n");
		printf("\t\t\t\t\t---------------------------------------------------\n");
		printf("\t\t\t\t\t    Masukkan panjang sisi (cm)\t: "	   );
		s = input();
		printf("\t\t\t\t\t---------------------------------------------------\n");

		keliling = s*4;
		printf("\t\t\t\t\t Hasil : %.2f cm",keliling);
		getch();
		fflush(stdin);
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\n\t\t\t\t\tKetik 'Y' untuk menghitung kembali\n");
		printf("\t\t\t\t\tKetik 'N' untuk Exit\n");
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\tMasukan pilihan anda ->? >> ");
		scanf("%c", &ulang);
		printf("\t\t\t\t\t--------------------------------------------------\n\n");
		if(ulang == 'y' || ulang == 'Y'){
			kll_belahketupat();
		}else if(ulang == 'n' || ulang == 'N'){
			belahKetupat();
		}else{
			keluar();
		}
}

void jajarGenjang(){
	int menu;
	char pilih;

	printf("\t\t\t\t\t|================================================|\n");
    printf("\t\t\t\t\t|                  JAJAR GENJANG                 |\n");
    printf("\t\t\t\t\t|================================================|\n");
    printf("\t\t\t\t\t|   No  |             Pilihan                    |\n");
    printf("\t\t\t\t\t|-------|----------------------------------------|\n");
    printf("\t\t\t\t\t|   1   |     Hitung Luas Jajar Genjang          |\n");
    printf("\t\t\t\t\t|   2   |   Hitung Keliling Jajar Genjang        |\n");
    printf("\t\t\t\t\t|   3   |               Exit                     |\n");
    printf("\t\t\t\t\t|================================================|\n");
    printf("\t\t\t\t\t             Masukkan menu pilihan anda : "          );
	scanf("%d", &menu);

	if(menu == 1){
        luas_jajargenjang();
	}else if(menu == 2){
		kll_jajargenjang();
	}else if(menu == 3){
		system ("cls");
		keluar();
	}else{
		fflush(stdin);
		printf("\n\t\t\t\t\tPilih sesuai opsi di menu!");
		printf("\n\t\t\t\t\tIngin keluar program ? [Y/N] >> ");
		scanf("%c", &pilih);

		if(pilih=='y' || pilih=='Y'){
			system("cls");
			keluar();
		}else if(pilih=='n' || pilih=='N'){
			system("cls");
			jajarGenjang();
		}
	}
}

void luas_jajargenjang(){
    int a, t;
    float luas;
	char ulang;

		printf("\t\t\t\t\t	         #Luas Jajar Genjang#								\n");
		printf("\t\t\t\t\t	            Rumus : a x t											\n");
		printf("\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\t    Masukkan alas (cm)\t\t: "	   );
		a = input();
		printf("\t\t\t\t\t    Masukkan tinggi (cm)\t: "	   );
		t = input();
		printf("\t\t\t\t\t--------------------------------------------------\n");

		luas = a*t;
		printf("\t\t\t\t\t Hasil : %.2f cm^2", luas);
		getch();
		fflush(stdin);
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\n\t\t\t\t\tKetik 'Y' untuk menghitung kembali\n");
		printf("\t\t\t\t\tKetik 'N' untuk Exit\n");
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\tMasukan pilihan anda ->? >> ");
		scanf("%c", &ulang);
		printf("\t\t\t\t\t--------------------------------------------------\n\n");
		if(ulang == 'y' || ulang == 'Y'){
			luas_jajargenjang();
		}else if(ulang == 'n' || ulang == 'N'){
			jajarGenjang();
		}else{
			keluar();
		}
}

void kll_jajargenjang(){
    int a, b;
    float keliling;
	char ulang;
    
		printf("\t\t\t\t\t	        #Keliling Jajar Genjang#								\n");
		printf("\t\t\t\t\t	          Rumus : 2 x (a + b)										\n");
		printf("\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\t    Masukkan sisi alas (cm)\t: "	   );
		a = input();
		printf("\t\t\t\t\t    Masukkan sisi miring (cm)\t: "	   );
		b = input();
		printf("\t\t\t\t\t--------------------------------------------------\n");

		keliling = (a+b)*2;
		printf("\t\t\t\t\t Hasil : %.2f cm",keliling);
		getch();
		fflush(stdin);
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\n\t\t\t\t\tKetik 'Y' untuk menghitung kembali\n");
		printf("\t\t\t\t\tKetik 'N' untuk Exit\n");
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\tMasukan pilihan anda ->? >> ");
		scanf("%c", &ulang);
		printf("\t\t\t\t\t--------------------------------------------------\n\n");
		if(ulang == 'y' || ulang == 'Y'){
			kll_jajargenjang();
		}else if(ulang == 'n' || ulang == 'N'){
			jajarGenjang();
		}else{
			keluar();
		}
}
void trapesium(){
	int menu;
	char pilih;

	printf("\t\t\t\t\t|================================================|\n");
    printf("\t\t\t\t\t|                    TRAPESIUM                   |\n");
    printf("\t\t\t\t\t|================================================|\n");
    printf("\t\t\t\t\t|   No  |             Pilihan                    |\n");
    printf("\t\t\t\t\t|-------|----------------------------------------|\n");
    printf("\t\t\t\t\t|   1   |      Hitung Luas Trapesium             |\n");
    printf("\t\t\t\t\t|   2   |    Hitung Keliling Trapesium           |\n");
    printf("\t\t\t\t\t|   3   |               Exit                     |\n");
    printf("\t\t\t\t\t|================================================|\n");
    printf("\t\t\t\t\t             Masukkan menu pilihan anda : "          );
	scanf("%d", &menu);

	if(menu == 1){
        luas_trapesium();
	}else if(menu == 2){
        kll_trapesium();
	}else if(menu == 3){
		system ("cls");
		keluar();
	}else{
		fflush(stdin);
		printf("\n\t\t\t\t\tPilih sesuai opsi di menu!");
		printf("\n\t\t\t\t\tIngin keluar program ? [Y/N] >> ");
		scanf("%c", &pilih);

		if(pilih=='y' || pilih=='Y'){
			system("cls");
			keluar();
		}else if(pilih=='n' || pilih=='N'){
			system("cls");
			trapesium();
		}
	}
}

void luas_trapesium(){
    int a, b, t;
    float luas;
	char ulang;

		printf("\t\t\t\t\t	           #Luas Trapesium#								\n");
		printf("\t\t\t\t\t	      Rumus : (a + b) x t x 1/2								\n");
		printf("\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\t    Masukkan sisi atas (cm)\t: "	   );
		a = input();
		printf("\t\t\t\t\t    Masukkan sisi bawah (cm)\t: "	   );
		b = input();
		printf("\t\t\t\t\t    Masukkan tinggi (cm)\t: "	   );
		t = input();
		printf("\t\t\t\t\t--------------------------------------------------\n");
		while(a == b){
			printf("\t\t\t\t\t sisi atas dan bawah tidak akan sama!\n");
			getch();
			trapesium();
		}
		luas = (a+b)*t*1/2;
		printf("\t\t\t\t\t Hasil : %.2f cm^2", luas);
		getch();
		fflush(stdin);
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\n\t\t\t\t\tKetik 'Y' untuk menghitung kembali\n");
		printf("\t\t\t\t\tKetik 'N' untuk Exit\n");
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\tMasukan pilihan anda ->? >> ");
		scanf("%c", &ulang);
		printf("\t\t\t\t\t--------------------------------------------------\n\n");
		if(ulang == 'y' || ulang == 'Y'){
			luas_trapesium();
		}else if(ulang == 'n' || ulang == 'N'){
			trapesium();
		}else{
			keluar();
		}
}

void kll_trapesium(){
    int s1, s2, s3, s4;
    float keliling;
	char ulang;
		printf("\t\t\t\t\t	          #Keliling Trapesium#								\n");
		printf("\t\t\t\t\t     Rumus : sisi 1 + sisi 2 + sisi 3 + sisi 4				\n");
		printf("\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\t    Masukkan sisi 1 (cm)\t: "	   );
		s1 = input();
		printf("\t\t\t\t\t    Masukkan sisi 2 (cm)\t: "	   );
		s2 = input();
		printf("\t\t\t\t\t    Masukkan sisi 3 (cm)\t: "	   );
		s3 = input();
		printf("\t\t\t\t\t    Masukkan sisi 4 (cm)\t: "	   );
		s4 = input();
		printf("\t\t\t\t\t--------------------------------------------------\n");
		keliling = s1+s2+s3+s4;
		printf("\t\t\t\t\t Hasil : %.2f",keliling);
		getch();
		fflush(stdin);
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\n\t\t\t\t\tKetik 'Y' untuk menghitung kembali\n");
		printf("\t\t\t\t\tKetik 'N' untuk Exit\n");
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\tMasukan pilihan anda ->? >> ");
		scanf("%c", &ulang);
		printf("\t\t\t\t\t--------------------------------------------------\n\n");
		if(ulang == 'y' || ulang == 'Y'){
			kll_trapesium();
		}else if(ulang == 'n' || ulang == 'N'){
			trapesium();
		}else{
			keluar();
		}
}

void lingkaran(){
	int menu;
	char pilih;

	printf("\t\t\t\t\t|================================================|\n");
    printf("\t\t\t\t\t|                    LINGKARAN                   |\n");
    printf("\t\t\t\t\t|================================================|\n");
    printf("\t\t\t\t\t|   No  |             Pilihan                    |\n");
    printf("\t\t\t\t\t|-------|----------------------------------------|\n");
    printf("\t\t\t\t\t|   1   |      Hitung Luas Lingkaran             |\n");
    printf("\t\t\t\t\t|   2   |    Hitung Keliling Lingkaran           |\n");
    printf("\t\t\t\t\t|   3   |               Exit                     |\n");
    printf("\t\t\t\t\t|================================================|\n");
    printf("\t\t\t\t\t             Masukkan menu pilihan anda : "          );
	scanf("%d", &menu);

	if(menu == 1){
        luas_lingkaran();
	}else if(menu == 2){
        kll_lingkaran();
	}else if(menu == 3){
		system ("cls");
		keluar();
	}else{
		fflush(stdin);
		printf("\n\t\t\t\t\tPilih sesuai opsi di menu!");
		printf("\n\t\t\t\t\tIngin keluar program ? [Y/N] >> ");
		scanf("%c", &pilih);

		if(pilih=='y' || pilih=='Y'){
			system("cls");
			keluar();
		}else if(pilih=='n' || pilih=='N'){
			system("cls");
			lingkaran();
		}
	}
}

void luas_lingkaran(){
    int r;
    float luas;
	char ulang;

		printf("\t\t\t\t\t	           #Luas Lingkaran#								\n");
		printf("\t\t\t\t\t	          Note : phi = 3.14						    ");
		printf("\t\t\t\t\t	         Rumus : phi x r x r						    ");
		printf("\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\t    Masukkan jari - jari (cm)\t: "	   );
		r = input();
		printf("\t\t\t\t\t--------------------------------------------------\n");
		luas = phi*r*r;
		printf("\t\t\t\t\t Hasil : %.2f cm^2", luas);
		getch();
		fflush(stdin);
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\n\t\t\t\t\tKetik 'Y' untuk menghitung kembali\n");
		printf("\t\t\t\t\tKetik 'N' untuk Exit\n");
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\tMasukan pilihan anda ->? >> ");
		scanf("%c", &ulang);
		printf("\t\t\t\t\t--------------------------------------------------\n\n");
		if(ulang == 'y' || ulang == 'Y'){
			luas_lingkaran();
		}else if(ulang == 'n' || ulang == 'N'){
			lingkaran();
		}else{
			keluar();
		}
}

void kll_lingkaran(){
    int d;
    float keliling;
	char ulang;
		printf("\t\t\t\t\t	           #Keliling Lingkaran#								\n");
		printf("\t\t\t\t\t	             Rumus : phi x d 										");
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\t    Masukkan diameter (cm)\t: "	   );
		d = input();
		printf("\t\t\t\t\t--------------------------------------------------\n");
		keliling = phi*d;
		printf("\t\t\t\t\t Hasil : %.2f cm",keliling);	
		getch();
		fflush(stdin);
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\n\t\t\t\t\tKetik 'Y' untuk menghitung kembali\n");
		printf("\t\t\t\t\tKetik 'N' untuk Exit\n");
		printf("\n\t\t\t\t\t--------------------------------------------------\n");
		printf("\t\t\t\t\tMasukan pilihan anda ->? >> ");
		scanf("%c", &ulang);
		printf("\t\t\t\t\t--------------------------------------------------\n\n");
		if(ulang == 'y' || ulang == 'Y'){
			kll_lingkaran();
		}else if(ulang == 'n' || ulang == 'N'){
			lingkaran();
		}else{
			keluar();
		}
}

double input(){
    double select;
    char term;
    if (scanf("%lf%c", &select, &term) != 2 || term != '\n') {
        clear_buffer();
        printf("\n\t\t\t\t\t Inputan salah, Masukkan Bilangan Bulat Positif!");
        restart();
    }else{
        if (select < 0) {
            printf("\n\t\t\t\t\t Inputan salah, Masukkan Bilangan Bulat Positif!");
            restart();
        }else{
            return select;
        } 
    }
}

void keluar(){
	printf("\n\t\t\t\t\t Terima kasih sudah menggunakan program kami");
	exit(0);
}

void clear_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) ; 
}

int main(){
	int menu = 1;
	int pilihan;
	do{
		system("cls");
		menuBangun();
		printf("\t\t\t\t\t Masukkan Pilihan Bangun Datar : ");
		pilihan = input();
		switch(pilihan){
			case 1:{
				system("cls");
				segitigaSembarang();
				break;
			}
			case 2:{
				system("cls");
				belahKetupat();
				break;
			}
			case 3:{
				system("cls");
				jajarGenjang();
				break;
			}
			case 4:{
				system("cls");
				trapesium();
				break;
			}
			case 5:{
				system("cls");
				lingkaran();
				break;
			}
			case 6:{
				system("cls");
				keluar();
				break;
			}
			default:{
				system("cls");
				printf("\n\t\t Pilih angka sesuai yang ada di menu!");
				printf("\n\t\t Lanjut '1'");
				printf("\n\t\t Exit '0'");
				printf("\n\t\t >> ");
				scanf("%d", &menu);
				break;
			}
		}
	}while(menu == 1);
}
