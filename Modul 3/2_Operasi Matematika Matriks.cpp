#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void clear_buffer();
void restart();

double input(){
    double select;
    char term;
    if (scanf("%lf%c", &select, &term) != 2 || term != '\n') {
        clear_buffer();
        printf("\nInputan salah, Masukkan Bilangan Bulat Positif!");
        getchar();
        restart();
    }else{
        if (select < 0) {
            printf("\nInputan salah, Masukkan Bilangan Bulat Positif!");
            getchar();
            restart();
        }else{
            return select;
        } 
    }
}

void clear_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) ; 
}

int main(){
	int menu;
	int a, b, j, i, k, index = 1, hasil[10][10], value[10][10], value1[10][10];

    printf("=================================\n");
	printf("    OPERASI MATEMATIKA MATRIX    \n");
	printf("=================================\n");
	printf("Operasi Matrix :\n");
    printf("1. Penjumlahan\n");
    printf("2. Perkalian\n");
    printf("3. Transpose\n");
    printf("4. Exit\n");
    printf("Pilihan menu >> ");
	scanf("%d",&menu);
	
	switch (menu){
		case 1 : 
		    //Penjumlahan
		printf("\n||Penjumlahan||\n");
		printf("Masukan Ordo Matrix (Baris x Kolom):");
		scanf("%d %d",&a, &b);
		
		printf("\nMatrix 1\n");
			for(i = 0; i < a; i++){
			printf("Masukan baris ke-%d: \n", i+1);
				for(j = 0; j < b; ++j){
				scanf("%d", &value[i][j]);
		}
			printf("\n");
}
		printf("\nMatrix 2\n");
			for(i = 0; i < a; i++){
			printf("Masukan baris ke-%d: \n", i+1);
				for(j = 0; j < b; ++j){
				scanf("%d", &value1[i][j]);
		}
		printf("\n");
}
		printf("Matrix 1\n");
		for(i = 0; i < a; i++){
			for(j = 0; j < b; ++j){
			printf("%d ", value[i][j]);
		}
		printf("\n");
	}
		printf("\nMatrix 2\n");
		for(i = 0; i < a; i++){
			for(j = 0; j < b; ++j){
			printf("%d ", value1[i][j]);
		}
		printf("\n");
	}
		printf("\nHasil Penjumlahan Matrix 1 dan Matrix 2:\n");
		for(i = 0; i < a; i++){
			for(j = 0; j < b; ++j){
			hasil[i][j] = value[i][j] + value1[i][j];
			printf("%d ", hasil[i][j]);
		}
		printf("\n");
	}
	
 
 		getchar();
 		restart();
 		break;
 		
		case 2 :
			//Perkalian
		printf("\n||Perkalian||\n");
		printf("Masukan Ordo Matrix (Baris x Kolom):");
		scanf("%d %d",&a, &b);
		
		printf("\nMatrix 1\n");
			for(i = 0; i < a; i++){
			printf("Masukan baris ke-%d: \n", i+1);
				for(j = 0; j < b; ++j){
			scanf("%d", &value[i][j]);
		}
			printf("\n");
}
		printf("\nMatrix 2\n");
			for(i = 0; i < a; i++){
			printf("Masukan baris ke-%d: \n", i+1);
				for(j = 0; j < b; ++j){
			scanf("%d", &value1[i][j]);
		}
		printf("\n");
}
		printf("Matrix 1\n");
		for(i = 0; i < a; i++){
			for(j = 0; j < b; ++j){
			printf("%d ", value[i][j]);
		}
		printf("\n");
	}
		printf("\nMatrix 2\n");
		for(i = 0; i < a; i++){
			for(j = 0; j < b; ++j){
			printf("%d ", value1[i][j]);
		}
		printf("\n");
	}	
	printf("\nHasil Perkalian Matrix 1 dan Matrix 2:\n");
		    for(i= 0; i < a; i++){
		        for(j=0; j < b; j++){
		        hasil[i][j] = 0;
		      // find product
		        for (k = 0; k < a; k++){
		            hasil[i][j] += value[i][k] * value1[k][j];
		        }
		        printf("%d ",hasil[i][j]);
		        }
		        printf("\n");
		    }
		    getchar();
		    restart();
			break;
			
		case 3 :
		     //Transpose
		printf("\n||Transpose||\n");
		printf("Masukan Ordo Matrix (Baris x Kolom):");
		scanf("%d %d",&a, &b);
		
		printf("\nMatrix \n");
			for(i = 0; i < a; i++){
			printf("Masukan baris ke-%d: \n", i+1);
				for(j = 0; j < b; ++j){
			scanf("%d", &value[i][j]);
		}
			printf("\n");
}
			printf("\n");
		      printf(" Matrix :\n");
		      for(i = 0; i < a; i++){
		        printf("  ");
		        for(j = 0; j < b; ++j){
		              hasil[i][j] = value[j][i];
		              printf("%d ",hasil[i][j]);
		          }
		          printf("\n");
		    }
		    
		    getchar();
		    restart();
			break;

		case 4 : 
			system("cls");
			printf("Terima kasih telah menggunakan program kami!");
			exit(0);
			break;
		
		default :
			printf("\nInputan anda salah!");
			getchar();
			restart();
			break;
		}
	return 0;
	
	}
	void restart(){
    double reset;
    int opsi;

    printf("\n\nTekan tombol apa saja untuk melanjutkan program...");
    getchar();
	system("cls");
	printf("\nIngin ke Menu Utama?\n\n");
	printf("\n1. Ke Menu Perhitungan \n");
	printf("\n2. Keluar Program\n");
	printf("\nMasukkan pilihan anda : ");
	reset=input();
    opsi=ceil(reset);
	if(reset==1)
	{
		system("cls");
		main();
	}else if (reset==2) {
        system("cls");
		printf("Terima kasih telah menggunakan program kami!");
		exit(0);
    }else{
        printf("\nMenu tidak tersedia!");
        restart();
    }
}
