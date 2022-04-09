# include <stdio.h>
# include <conio.h>
# include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	 char word1[]="",word2[]="",n;
	 
	 printf("digite a primeira palavra:");
	 scanf("%s",&word1);
	 printf("digite a segunda palavra:");
	 scanf("%s",&word2);
	 
	 	For(n=0; word1[n] != '\0' && word2[n] != '\0'; n++){
			if (word1[i] != word2[i]){ 
            //retorna -1 se a primeira for menor ou 1 caso contrário
            return word1[n] < word2[n] ? -1 : 1;
		 }
	 	
        }
    return word1[n] - word2[n];
	}
