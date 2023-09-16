#include <stdio.h>
#include <locale.h>

/*Quest�o 1)  Escrever um algoritmo  que l� um vetor A(20) e o escreve. 
Troque a seguir o 1� elemento com o �ltimo, o 2� com  o pen�ltimo, e assim 
por diante, at�  o 10� com o 11�  e escreva o vetor A assim modificado. Utilizar 
somente um vetor para resolver o exerc�cio. A altera��o deve ser feita no pr�rpio vetor A. Defina um modulo para leitura , impress�o e troca.
*/

//PROTOTIPAGEM
void lerVetor(int vetA[20]);
void mostraVetor(int vetA[20]);
void trocaVetor(int vetA[20]);

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int x, vetorA[20];
	lerVetor(vetorA); //pede para o usuario informar os valores desejados de cada posi�ao do vetor
	
	printf ("\n\nORDEM ORIGINAL\n");
	mostraVetor(vetorA); // mostra na tela os numeros digitados pelo usuario
	
	trocaVetor(vetorA); // faz a troca do 1� com o ultimo e etc...
	
	printf ("\n\nORDEM INVERSA\n");
	mostraVetor(vetorA); // mostra os numeros que o usuario digitou de tras para frente.
	
}

void lerVetor(int vetA[20])
{
	int x;
	printf ("DIGITE 20 NUMEROS: \n");
	for (x=0; x < 20; x++)
	{
		printf ("Digite o valor da %d� posi��o do vetor: \n", x+1); //lembrando que a primeira posi��o � sempre ZERO.
		scanf ("%d", &vetA[x]);
	}
}

void mostraVetor(int vetA[20])
{
	int x;
	printf ("Os numeros digitados foram: \n");
	for (x=0; x < 20; x++)
	{
		printf ("%d", vetA[x]);
		if (x < 20-1)
		{
			printf (", ");
		}else
			printf (". \n");
	}
}

void trocaVetor(int vetA[20])
{
	int x, y=20-1, aux=0;
	for (x=0; x < 20/2; x++)
	{
		aux = vetA[x]; //auxiliar recebe o valor do vetor x
		vetA[x] = vetA[y];  //vetor x recebe o valor de vetor y
		vetA[y] = aux; //E finalmente o vetor y recebe o valor de x por meio da AUXILIAR.
		y--;
	}
}

