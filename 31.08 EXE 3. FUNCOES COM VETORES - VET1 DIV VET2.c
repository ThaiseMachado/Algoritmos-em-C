#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define MAX 8
#define DIV 3

/*
Quest�o 3) Fa�a um programa que receba um vetor de inteiros  Vet1[8] e um segundo vetor Vet2[3] posi��es 
de valores inteiros. O programa dever� imprimir uma lista dos n�meros do primeiro vetor com seus respectivos 
divisores armazenados no segundo vetor, assim como suas posi��es. Se n�o possuir nenhum divisor, dever� ser 
impressa a frase �N�o possui divisores no segundo vetor�
Estruture os modulos como achares mais apropriado.
*/

float divisor (int v1[MAX], int v2[DIV]);

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int x, vet1[MAX], vet2[DIV];
	
	printf ("\nDigite OITO n�meros para o vetor 1");
	for (x=0; x < MAX; x++)
	{
			printf ("\nDigite o %d� n�mero: ", x+1);
			scanf ("%d", &vet1[x]);
	}
	
	printf ("\nDigite TRES n�meros para o vetor 2");
		for (x=0; x < DIV; x++)
	{
			printf ("\nDigite o %d� n�mero: ", x+1);
			scanf ("%d", &vet2[x]); 
	}
	system("cls");
	divisor (vet1, vet2);
}

float divisor (int v1[MAX], int v2[DIV])
{
	int x, y, cont;
	for (x=0; x < MAX; x++)
	{
		cont = 0;
		printf ("\nValor %d \n", v1[x]);
		
		for (y=0; y < DIV; y++)
		{
			if (v1[x] % v2[y] == 0)
			{
				printf("Divis�vel por %d, na posicao %d \n", v2[y], y);
				cont++ ;
			}
		}
		if (cont < 1) // para nao ter divisores cont tem que ser 0;
		{
			printf("N�o possui divisores no segundo vetor \n");	
		}
	}
}
