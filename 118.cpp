# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>

void isort (char v_nomes[6][10], int qtd){ 
   int i, j;
   char k[10]; 
   for (i=1;i<qtd;i++){ 
       strcpy(k,v_nomes[i]); 
       j=i-1;
      while (j>=0 && strcmp(v_nomes[j],k)>0){ 
            strcpy(v_nomes[j+1],v_nomes[j]); 
            j --;
      }
      strcpy(v_nomes[j+1],k);
   }
}



int main(){
	setlocale(LC_ALL, "Portuguese");
	char nomes[6][10]={"Maria", "Sérgio", "Carlos", "Rita", "Zulema", "Amélia"};
	int i;
	isort (nomes,6);
	for(i=0;i<6;i++){
		printf("%s\t",nomes[i]);
	}
	getch();
	return 0;
}

