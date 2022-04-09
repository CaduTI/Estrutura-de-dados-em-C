# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>


void isort (char nomes[5][10], int qtd){ 
   int i, j;
   char k[10]; 
   for (i=1;i<qtd;i++){ 
       strcpy(k,nomes[i]); 
       j=i-1;
      while (j>=0 && strcmp(nomes[j],k)>0){ 
            strcpy(nomes[j+1],nomes[j]); 
            j --;
      }
      strcpy(nomes[j+1],k);
   }
}


main()
{
	setlocale(LC_ALL, "Portuguese");

	int i,x,aux;
	char nomes[5][10]={"Lia","Ana","Ivo","Teo","Gil"};
	int faltas[]={15,11,3,1,7};
	float notas[]={7.5,9.5,3.5,4.5,8.5};
	
	
	printf("Ordenação das faltas: ");
		for(i=0;i<5;i++){
        printf("%d ", faltas[i]);
            }
			
	for(i=0;i<5;i++)
	{
		for(x=i+1;x<5;x++)
		{
			if(faltas[i]>faltas[x])
			{
				aux=faltas[i];
				faltas[i]=faltas[x];
				faltas[x]=aux;
			}
		}
	}
	isort (nomes,5);
	for(i=0;i<5;i++){
		printf("%s\t",nomes[i]);
	}
	getch();
	return 0;

}

/*main() {
   float valores[3][3];

   valores[0][0] = 19.0; valores[0][1] = 11.0; valores[0][2] = 5.0;
   valores[1][0] = 32.0; valores[1][1] = 2.0; valores[1][2] = 12.0;
   valores[2][0] = 5.5; valores[2][1] = 4.3; valores[2][2] = 41.0;

   int lin, col;
   float m = BuscaMaiorMatriz(valores, 3, 3, &lin, &col);

   printf("valor: %f na posicao [%d,%d]\n", m, lin, col);

   m = BuscaMaiorMatriz(valores, 2, 3, &lin, &col);
   printf("valor: %f na posicao [%d,%d]", m, lin,col);
}*/
/*void()
{
//nomes
               strcpy(auxNomes, nomes[j]);
                strcpy(nomes[j], nomes[j+1]);
                strcpy(nomes[j+1], auxNomes);
}*/
