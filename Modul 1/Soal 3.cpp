	do{
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
	printf(" 		|| 6. KELUAR                                         ||\n");
	printf("		=======================================================\n");
	
	
		printf ("\t\t Masukkan Pilihan Anda [1-6] = ");
		pilihan=valid();
		printf("\n");
		system("cls");
		
		if (pilihan==1){
			printf("\t\t||                                                   ||\n");
			printf("\t\t||                 ANDA MEMILIH TABUNG               ||\n");
			printf("\t\t||          Menghitung Luas & Volume Tabung          ||\n");
			printf("\t\t||                                                   ||\n");
			printf("\t\t=======================================================\n\n");
			printf("\t\t Masukkan Jari-jari Alas Tabung (cm) = ");
			jari=cek_valid();
			printf("\t\t Masukan Tingginya (cm) = ");
			tinggi=cek_valid();
			
			luas = ltabung( jari, PHI, tinggi);
			vol = vtabung( jari, PHI, tinggi);
			
			printf("\n\n\t\t Ingin memilih lagi? (Y/N) ");
			scanf("%s", &ulang);
			system("cls");
			
		}else if (pilihan==2){
			printf("\t\t||                                                   ||\n");
			printf("\t\t||                   ANDA MEMILIH BOLA               ||\n");
			printf("\t\t||            Menghitung Luas & Volume Bola          ||\n");
			printf("\t\t||                                                   ||\n");
			printf("\t\t=======================================================\n\n");
			printf("\t\t Masukkan Jari-jari Bola (cm) = ");
			jari = cek_valid();
			
			luas = lbola( jari, PHI);
			vol = vbola( jari, PHI);
			
			printf("\n\n\t\t Ingin memilih lagi? (Y/N) ");
			scanf("%s", &ulang);
			system("cls");
			
		}else if (pilihan==3){
			printf("\t\t||                                                   ||\n");
			printf("\t\t||            ANDA MEMILIH LIMAS SEGIEMPAT           ||\n");
			printf("\t\t||    Menghitung Luas & Volume Limas Segiempat       ||\n");
			printf("\t\t||                                                   ||\n");
			printf("\t\t=======================================================\n\n");
			printf("\t\t Masukkan Luas Sisi (cm) = ");
			sisi=cek_valid();
			printf("\t\t Masukkan Tinggi (cm) = ");
			tinggi=cek_valid();
			
			luas = luas_limas(sisi, tinggi);
			vol = vol_limas(sisi, tinggi);
			
			printf("\n\n\t\t Ingin memilih lagi? (Y/N) ");
			scanf("%s", &ulang);
			system("cls");
		
		}else if (pilihan==4){
			printf("\t\t||                                                   ||\n");
			printf("\t\t||            ANDA MEMILIH PRISMA SEGITIGA           ||\n");
			printf("\t\t||    Menghitung Luas & Volume Prisma Segiempat      ||\n");
			printf("\t\t||                                                   ||\n");
			printf("\t\t=======================================================\n\n");
			printf("\t\t Masukkan Luas Alas (cm) = ");
			alas=cek_valid();
			printf("\t\t Masukkan Tinggi (cm) = ");
			tinggi=cek_valid();
			printf("\t\t Masukkan Tinggi Prisma (cm) = ");
			tinggi_p=cek_valid();
			
			luas = luas_prisma(alas, tinggi, tinggi_p);
			vol = vol_prisma(alas, tinggi, tinggi_p);
			
			printf("\n\n\t\t Ingin memilih lagi? (Y/N) ");
			scanf("%s", &ulang);
			system("cls");
		
		}
		else if (pilihan==5){
			printf("\t\t||                                                   ||\n");
			printf("\t\t||                 ANDA MEMILIH KERUCUT              ||\n");
			printf("\t\t||          Menghitung Luas & Volume Kerucut         ||\n");
			printf("\t\t||                                                   ||\n");
			printf("\t\t=======================================================\n\n");
			printf("\t\t Masukkan Jari-jari = ");
			jari=cek_valid();
			printf("\t\t Masukkan Tinggi (cm) = ");
			tinggi=cek_valid();
			printf("\t\t Masukkan Alas(cm)  = ");
			sisi=cek_valid();
			
			luas = luas_kerucut( PHI, jari, sisi);
			vol = vol_kerucut(PHI, tinggi, jari);
			
			printf("\n\n\t\t Ingin memilih lagi? (Y/N) ");
			scanf("%s", &ulang);
			system("cls");
		
		}else if (pilihan == 6){
			keluar();
			return 0;
		}else{
			printf("\tMAAF, PILIHAN ANDA TIDAK VALID\n");
			printf("\tSILAHKAN INPUT ULANG\n\n");
			printf("\tIngin Mengulang?\n");
			printf ("\tYa atau Tidak (Y/T): "); 
			scanf ("%s", &ulang);
			system("cls");
		}
	}while (ulang=='Y'||ulang=='y');
	keluar();
}
