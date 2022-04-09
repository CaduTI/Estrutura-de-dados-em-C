#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
# include <locale.h>
#define MAX 5


void noun(char Name[][20], float Score[], int Fault[], int qtd)
{
    int i, j, auxFault;
    char auxName[20];
    float auxScore;

    for (i = 1; i < qtd; i++)
    {
        for (j = 0; j < qtd - i; j++)
        {
            if (strcmp(Name[j], Name[j + 1]) > 0)
            {
                strcpy(auxName, Name[j]);
                auxScore = Score[j];
                auxFault = Fault[j];
                strcpy(Name[j], Name[j + 1]);
                Score[j] = Score[j + 1];
                Fault[j] = Fault[j + 1];
                strcpy(Name[j + 1], auxName);
                Score[j + 1] = auxScore;
                Fault[j + 1] = auxFault;
            }
        }
    }
}

void score(char Name[][20], float Score[], int Fault[], int qtd)
{

    int i, j, min, auxFault;
    char auxName[20];
    float auxScore;

    for (i = 0; i < qtd - 1; i++)
    {
        min = i;
        for (j = i + 1; j < qtd; j++)
        {
            if (Score[j] < Score[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            strcpy(auxName, Name[i]);
            auxScore = Score[i];
            auxFault = Fault[i];
            strcpy(Name[i], Name[min]);
            Score[i] = Score[min];
            Fault[i] = Fault[min];
            strcpy(Name[min], auxName);
            Score[min] = auxScore;
            Fault[min] = auxFault;
        }
    }
}

void fault(char Name[][20], float Score[], int Fault[], int qtd)
{
    int i, j, auxFault;
    char auxName[20];
    float auxScore;

    for (i = 1; i < qtd; i++)
    {
        auxFault = Fault[i];
        strcpy(auxName, Name[i]);
        auxScore = Score[i];
        j = i - 1;
        while (j >= 0 && Fault[j] > auxFault)
        {
            Fault[j + 1] = Fault[j];
            strcpy(Name[j + 1], Name[j]);
            Score[j + 1] = Score[j];
            j--;
        }
        Fault[j + 1] = auxFault;
        strcpy(Name[j + 1], auxName);
        Score[j + 1] = auxScore;
    }
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
    char Name[MAX][20] = {"Lia", "Ana", "Ivo", "Teo", "Gil"};
    float Score[MAX] = {7.5, 9.5, 3.5, 4.5, 8.5};
    int Fault[MAX] = {3, 7, 15, 11, 1}, i, opc;

    do
    {
        printf("Escolha uma opção:");
        printf("\n1- Ordem por Nome");
        printf("\n2- Ordem por Nota");
        printf("\n3- Ordem por Falta");
        printf("\n4- Sair");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            noun(Name, Score, Fault,MAX);
            printf("\n");
            break;
        case 2:
            score(Name, Score, Fault, MAX);
            printf("\n");
			break;
        case 3:
            fault(Name, Score, Fault, MAX);
            printf("\n");
			break;
        default:
            printf("Opção Inválida!!!");
            printf("\n");
            break;
        }
        if (opc > 0 && opc < 4)
        {
            for (i = 0; i < MAX; i++)
            {
                printf("%s\t", Name[i]);
            }
            printf("\n");

            for (i = 0; i < MAX; i++)
            {
                printf("%.2f\t", Score[i]);
            }
            printf("\n");

            for (i = 0; i < MAX; i++)
            {
                printf("%d\t", Fault[i]);
            }
            printf("\n");
        }
    } while (opc != 4);

    getch();
    return 0;
}
