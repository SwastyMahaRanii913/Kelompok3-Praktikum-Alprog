#include <stdio.h>

int plin(char *str, int jmlhuruf){							
    int idi = jmlhuruf - 1;										
    int x;

    for(x = 0; x <= jmlhuruf/2; x++){
        if(str[x] != str[idi])
        return 0;
        idi--;
    }
    return 1;
}

void hhuruf(char *str, int jmlhuruf, FILE *output, int mode){
    int temp[26] = {0};												
    int x;

    for(x = 0; x < jmlhuruf; x++)									
        temp[(int)(str[x]) - 97] += 1;							

    for(x = 0; x < 26; x++)											
        if(temp[x] != 0){
            printf("%c=%d ", (char)(x + 97), temp[x]);
            if(mode == 1){
            	fprintf(output, "%c=%d ", (char)(x + 97), temp[x]);
        	}
		}
}

int str_leg(char *str){
    int a = 0;
    while(str[a] != 0)
	a++;
    return a;														
}

void header(){
	system ("cls");
	printf("===================================================\n");
	printf("|                PROGRAM PALINDROME               |\n");
	printf("|                    KELOMPOK 3                   |\n");
	printf("===================================================\n\n");
}

int main(void){
    char kata[100] = {0};
    char loop[50] = {0};
    int val;
    int jmlhuruf;
    
	do{
		FILE *output = fopen("kamuskata.txt","a");
		do{
			val = -1;
			header();
	    	printf("Kata: ");
	    	scanf("%[^\n]s", &kata);
	    	getchar();
			fprintf(output, "Kata: %s\n", kata);
	
	    	jmlhuruf = str_leg(kata);
			int x;
	
	    	for(x = 0; x < jmlhuruf; x++){
	        	if((int)(kata[x]) >= 65 && (int)(kata[x]) <= 90)
	            	kata[x] = (char)((int)(kata[x]) + 32);
	        	if(((int)(kata[x]) < 97 || (int)(kata[x]) > 122) && (int)(kata[x]) != 32){
	        		printf("Hanya menerima inputan huruf!");
	        		sleep (2);
	        		system("cls");
	        		val = 1;
	        		break;
				}
			}
			if(val != 1){
				break;
			}
		}while(1);

    	int flag = plin(kata, jmlhuruf);
		printf("%s(%d) : ", kata, jmlhuruf);
    	fprintf(output, "%s(%d) : ", kata, jmlhuruf);

    	hhuruf(kata, jmlhuruf, output, 1);

    	if(flag == 1){
			printf(" : Palindrom\n");
        	fprintf(output, " : Palindrom\n\n");    	
		}else{
        	printf(" : Bukan Palindrom\n");
        	fprintf(output, " : Bukan Palindrom\n\n");    	
		}
    	fclose(output);
    	
    	do{
    		printf("Apa anda ingin mengulang? (y/n)\n");
    		scanf("%s", &loop);
    		getchar();
    		
        	if((int)(loop[0]) >= 65 && (int)(loop[0]) <= 90)
            	loop[0] = (char)((int)(kata[0]) + 32);
    	
	   		if(str_leg(loop) > 1 || (loop[0] != 'y' && loop[0] != 'n')){
	   			loop[0] = 'y';
				printf("Inputkan huruf y atau n!");
				sleep (2);
				system("cls");
			}    	
    		if(loop[0] == 'n'){
				return 0;
    		}
    		if(loop[0] != 'y'){
				header();				
    			printf("Kata: %s\n", kata);
    			printf("%s(%d) : ", kata, jmlhuruf);
    			hhuruf(kata, jmlhuruf, output, 0);
    			if(flag == 1){
    				printf(" : Palindrom\n");
    			}else{
    				printf(" : Bukan Palindrom\n");
    			}
    		}
		}while(loop[0] != 'y');
	}while(1);
}
