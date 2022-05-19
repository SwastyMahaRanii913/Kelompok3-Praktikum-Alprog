#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void desbin(int bilangan);
void bilangan_des(long bilangan);
char* concat(const char *s1, const char *s2);
int validasiInt(int *var);
void tryagain();


int clean(){
	while(getchar() != '\n');
	return 1;
}

int main(){
    int input, option, i=0, len;
    long inputbin;
    char cekbin[256];
    int ulang = 1;
	int enterCheck;
	
    mainmenu:
    fflush(stdin);
    system("cls");
    printf("---------------------------------------------\n");
    printf("Program Konversi bilangan Desimal dan Biner  \n");
    printf("---------------------------------------------\n");
    printf("Pilih operasi bilanganangan yang diinginkan :      \n");
    printf("    [1] Konversi Desimal -> Biner               \n");
    printf("    [2] Konversi Biner   -> Desimal             \n");
    printf("    [0] Keluar                                  \n");
    do{
    printf("    Masukkan pilihan anda : ");
    if(validasiInt(&option)){
        if(option >= 0 && option <= 2){
            switch(option){
                case 1:
                    desInput();
                    break;
                case 2:
    				binInput();
                    break;
                case 0:
                    exit(0);
            }
            printf("\nTekan tombol apa saja untuk melanjutkan...\n");
            getch();
            tryagain();
        }
        else{
            printf("\nInput salah! Silahkan coba lagi.\n");
            getch();
        }
    }
    else{
        printf("\nInput salah! Silahkan coba lagi.\n");
        getch();
    }
	}while(ulang = 1);
    return 0;
}

int binInput(){
//	input2:
	long inputbin;
	int len;
	int i = 0;
	char cekbin[256];
	int enterCheck;
    fflush(stdin);
    system("cls");
    printf("---------------------------------------------+\n");
    printf("Masukkan bilangan biner anda : ");
    while(((scanf(" %ld%c", &inputbin, &enterCheck)) != 2 || enterCheck != '\n')&& clean() ){
	        printf("\nInput salah! Silahkan coba lagi.");
	        while(getchar() != '\n');
	        printf("Masukkan bilangan biner anda : ");
	}

    //cek binary
    sprintf(cekbin, "%ld", inputbin);
    len = strlen(cekbin);
    while( i < len){
        if(cekbin[i] > '1' || cekbin[i] < '0'){
            printf("\nInput salah! Silahkan coba lagi.");
            getch();
            inputbin = 0;
//            goto input2;
			binInput();
        }
        i++;
    }
    printf("bilangan biner %ld = ", inputbin);
    bilangan_des(inputbin);
}

int desInput(){
	int input;
	int enterCheck;
    fflush(stdin);
    system("cls");
    printf("---------------------------------------------+\n");
    printf("Masukkan bilangan desimal anda : ");
    if(((scanf(" %d%c", &input, &enterCheck)) != 2 || enterCheck != '\n')&& clean() || input < 0){
		        printf("Masukkan bilangan yang Valid");
		        while(getchar() != '\n');
		        desInput();
	}else{
        printf("bilangan desimal %d = ", input);
        desbin(input);
    }	
}


void desbin(int bilangan){
    char temp[1];
    char *hasil = "";
    int i;
    while(bilangan > 0){
        i = bilangan%2;
        if(i == 1){
            sprintf(temp,"%d",i);
            bilangan -= 1;
        }
        else if(i == 0){
            sprintf(temp,"%d",i);
        }
        hasil = concat(temp,hasil);
        bilangan /= 2;
    }
    printf("%s dalam bilangan biner",hasil);
}

void bilangan_des(long bilangan){
 int hasil = 0, i = 0, perdigit;
    while (bilangan!=0){
        perdigit = bilangan%10;
        bilangan /= 10;
        hasil += perdigit*pow(2,i);
        ++i;
    }
    printf("%d dalam bilangan desimal", hasil);
}

char* concat(const char *s1, const char *s2){
    char *result = malloc(strlen(s1)+strlen(s2)+1);
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

int validasiInt(int *var){
	char buff[1024];
	char cek;

	if (fgets(buff, sizeof(buff), stdin) !=NULL) {
		if (sscanf(buff, "%d %c", var, &cek) ==1){
			return 1;
		}
	}
	return 0;
}

void tryagain(){
    fflush(stdin);
    system("cls");
    printf("---------------------------------------------+\n");
    printf("Apakah anda ingin mengulang program?(y/n)     \n");
    printf("Jawaban : ");
    switch(getch()){
        case 'y':
            main();
            break;
        case 'Y':
            main();
            break;
        case 'n':
            exit(0);
            break;
        case 'N':
            exit(0);
            break;
        default:
            printf("\nInput salah! Silahkan coba lagi.");
            getch();
            tryagain();
    }
}
