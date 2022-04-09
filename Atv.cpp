#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	
	printf("Programa Ponteiros \n\n");
	int *p1,p2,*p3,p4,*p5,p6,**p7;
	p1=(int*)malloc(sizeof(int*));
	*p1=41;
	p2=17;
	p3=(int*)malloc(sizeof(int));
	*p3=95;
	p4=29;
	p5=&p6;
	p6=33;
	printf("*p1=%d p2=%d \n",*p1, p2);
	printf("*p3=%d p4=%d \n",*p3, p4);
	printf("*p5=%d p6=%d \n",*p5, p6);
	p1=p5;
	p2=*p3;
	p3=&p4;
	p4=11;
	p5=&p2;
	*p5=21;
	p6=p2;
	p7=&p3;
	p2=59;
	printf("*p1=%d p2=%d \n",*p1, p2);
	printf("*p3=%d p4=%d \n",*p3, p4);
	printf("*p5=%d p6=%d \n",*p5, p6);
	printf("*p7=%d,**p7");
	getch();
	return 0;
}
