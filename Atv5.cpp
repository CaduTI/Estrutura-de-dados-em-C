#include <stdio.h>
#include <conio.h>
# include <locale.h>
#define MAX 7

void bsort( float[], int qtd){
 	int i, j;
 	int aux;
 	float v[MAX];
 	for (i= 1;i < qtd;i++){
      	for(j=0;j<qtd;j++){
           	if( v [ j ] > v [ j + 1 ]){
                    aux = v [ j ] ;
                 	v [ j ] = v [ j + 1 ] ;
                 	v [ j + 1 ] = aux ;
           	}
     	}
	}
}
int pesqbin(float v[], float busca []);
int main(){
	int i, v1[MAX] = {13,5,7,21,77,43,11};
	float v2[MAX] = {21.7,13.1,5.9,33.7,7.5, 3.13,1.21};
	float v3[MAX];
	setlocale(LC_ALL,"Portuguese");
	//comando para gerar dados para o 3º vetor
	for(i=0; i< MAX; i++){
		v3[i]= v1[i] + v2[i];
	}
	//comando para chamar a função de ordenação
	
	bsort(v3,MAX);
	printf("Valores ordenados no 3º vetor:\n",i, v3[i]);
	for(i=0;i<MAX;i++){
		printf("%.2f\t\n\n",i,v3[i]);
	}
	for (i=0; i <MAX; i++)
		printf(" %.2f\n", v3[i]);
	if (v3[i] != 33.7){
		printf("\n\n Não achou");
	}
	else{
		printf("\n\n Achou");
	}
	getch();
	return 0; 	
}

//função de ordenação


//função de pesquisa
