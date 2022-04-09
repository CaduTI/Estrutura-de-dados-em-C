# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float x,y,z;
printf ("Digite os valores:");
scanf("%f",&x,&y);
z=x/y;
printf("o valor de divisao eh:%.2f/n",x,y,z);
	return 0;
}
