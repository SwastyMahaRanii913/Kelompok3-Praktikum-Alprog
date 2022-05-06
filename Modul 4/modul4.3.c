#include <stdio.h>

int palindrom(char *string, int jumlahhrf){							
    int idx = jumlahhrf - 1;										
    int x;

    for(x = 0; x <= jumlahhrf/2; x++){
        if(string[x] != string[idx])
        return 0;
        idx--;
    }
    return 1;
}

void hitunghuruf(char *string, int jumlahhrf, FILE *output, int mode){
    int temp[26] = {0};												
    int x;

    for(x = 0; x < jumlahhrf; x++)									
        temp[(int)(string[x]) - 97] += 1;							

    for(x = 0; x < 26; x++)											
        if(temp[x] != 0){
            printf("%c=%d ", (char)(x + 97), temp[x]);
            if(mode == 1){
            	fprintf(output, "%c=%d ", (char)(x + 97), temp[x]);
        	}
		}
}

int string_len(char *string){
    int a = 0;
    while(string[a] != 0)
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
    int jumlahhrf;
    
	do{
		FILE *output = fopen("kamuskata.txt","a");
		do{
			val = -1;
			header();
	    	printf("Kata: ");
	    	scanf("%[^\n]s", &kata);
	    	getchar();
			fprintf(output, "Kata: %s\n", kata);
	
	    	jumlahhrf = string_len(kata);
			int x;
	
	    	for(x = 0; x < jumlahhrf; x++){
	        	if((int)(kata[x]) >= 65 && (int)(kata[x]) <= 90)
	            	kata[x] = (char)((int)(kata[x]) + 32);
	        	if(((int)(kata[x]) < 97 || (int)(kata[x]) > 122) && (int)(kata[x]) != 32){
	        		printf("Input huruf saja!");
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

    	int flag = palindrom(kata, jumlahhrf);
		printf("%s(%d) : ", kata, jumlahhrf);
    	fprintf(output, "%s(%d) : ", kata, jumlahhrf);

    	hitunghuruf(kata, jumlahhrf, output, 1);

    	if(flag == 1){
			printf(" : Palindrom\n");
        	fprintf(output, " : Palindrom\n\n");    	
		}else{
        	printf(" : Bukan Palindrom\n");
        	fprintf(output, " : Bukan Palindrom\n\n");    	
		}
    	fclose(output);
    	
    	do{
    		printf("Ingin mengulang? (y/n)\n");
    		scanf("%s", &loop);
    		getchar();
    		
        	if((int)(loop[0]) >= 65 && (int)(loop[0]) <= 90)
            	loop[0] = (char)((int)(kata[0]) + 32);
    	
	   		if(string_len(loop) > 1 || (loop[0] != 'y' && loop[0] != 'n')){
	   			loop[0] = 'x';
				printf("Input y atau n saja!");
				sleep (2);
				system("cls");
			}    	
    		if(loop[0] == 'n'){
				return 0;
    		}
    		if(loop[0] != 'y'){
				header();				
    			printf("Kata: %s\n", kata);
    			printf("%s(%d) : ", kata, jumlahhrf);
    			hitunghuruf(kata, jumlahhrf, output, 0);
    			if(flag == 1){
    				printf(" : Palindrom\n");
    			}else{
    				printf(" : Bukan Palindrom\n");
    			}
    		}
		}while(loop[0] != 'y');
	}while(1);
}
