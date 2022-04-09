//94- Considerando uma lista (vetor) com os seguintes elementos: : Maria, Sandra, Andr�, Mario, Dirce, Sandro, simular a ordena��o por trocas em ordem crescente (a-z) do vetor e efetuando as compara��es indicadas no algoritmo, quantas trocas ser�o realizadas e quantas compara��es?

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# define MAX 7

void bsort (char v[], int qtd) {
     int i, j;
     char aux;
     for (i=1;i<qtd;i++) {
          for (j=0;j<qtd-i;j++){
               if (v[j]>v[j+1]){
                     aux=v[j];
                     v[j]=v[j+1];
                     v[j+1]=aux;
               }
          }
     }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[MAX]={'Miriam', 'Sueli', 'Ana', 'Miguel', 'Daniel', 'Tales', 'Humberto'};
    int i;
    bsort(nome,MAX);
    for(i=0;i<MAX;i++){
        printf("%c\t",nome[i]);
    }
    getch();
    return 0;
}
