/* Aluna: Tha�se Francielle Machado Souto.
Exerc�cio 5
*/

#include <stdio.h>
#include <locale.h>
int main ()

{
setlocale(LC_ALL, "Portuguese");
 
int x, i, qtdfilho, qtdpesquisa, filhos, vet[4]={0, 0, 0, 0};
float salario, bonusporfilho, bonuspelosfilhos[4], bonustotal, porcento[4]={0,0,0,0};
char classe;


	do{
	printf ("\nOl�! \nPor favor, informe de 1 � 100 quantos funcionarios desejam realizar a pesquisa: \n");
	scanf ("%d", &qtdpesquisa);
		if (qtdpesquisa <= 0 || qtdpesquisa > 100){
			printf ("Valor inv�lido! Redigite. \n");
			}
	}while (qtdpesquisa <= 0 || qtdpesquisa > 100);
	
	for (x=1; x<=qtdpesquisa; x++){
	
	printf ("\n==========PESQUISA==========\nInicando a pesquisa:\n");
	printf ("\nQual o salario do funcion�rio? \n");
	scanf ("%f", &salario);
	
	printf ("Digite a quantidade de filhos: \n");
	scanf ("%d", &qtdfilho);
	
		if (salario <= 1000){
		classe ='D';
		bonusporfilho = 20.00;
		bonuspelosfilhos[0] = bonusporfilho * qtdfilho;	
		vet[0]++;
		porcento[0]= 100 * vet[0] /qtdpesquisa;
		printf ("%c -  � a classifica��o do funcion�rio. \n", classe);
		printf ("O valor de b�nus por filho �: %.2f. \n", bonusporfilho);
		printf ("O valor TOTAL de b�nus pela quantidade de filhos �: %.2f. \n", bonuspelosfilhos[0]);
	}

		if (salario > 1000 && salario <=2000){
			classe = 'C';
			bonusporfilho = 15.00;
			bonuspelosfilhos[1] = bonusporfilho * qtdfilho;
			vet[1]++;
			porcento[1] = 100 * vet[1] /qtdpesquisa;
			printf ("%c -  � a classifica��o do funcion�rio. \n", classe);
		printf ("O valor de b�nus por filho �: %.2f. \n", bonusporfilho);
		printf ("O valor TOTAL de b�nus pela quantidade de filhos �: %.2f. \n", bonuspelosfilhos[1]);

	}
	if (salario > 2000 && salario <= 3000){
		classe = 'B';
		bonusporfilho = 10.00;
		bonuspelosfilhos[2] = bonusporfilho * qtdfilho;
		vet[2]++;
		porcento[2] = 100 * vet[2] /qtdpesquisa;
		printf ("%c -  � a classifica��o do funcion�rio. \n", classe);
		printf ("O valor de b�nus por filho �: %.2f. \n", bonusporfilho);
		printf ("O valor TOTAL de b�nus pela quantidade de filhos �: %.2f. \n", bonuspelosfilhos[2]);

	}
	if (salario > 3000){
		classe = 'A';
		bonusporfilho = 5.00;
		bonuspelosfilhos[3] = bonusporfilho * qtdfilho;
		vet[3]++;
		porcento[3] = 100 * vet[3] /qtdpesquisa;
		printf ("%c -  � a classifica��o do funcion�rio. \n", classe);
		printf ("O valor de b�nus por filho �: %.2f. \n", bonusporfilho);
		printf ("O valor TOTAL de b�nus pela quantidade de filhos �: %.2f. \n", bonuspelosfilhos[3]);

	}
		
		}
		printf ("\n************RELAT�RIO TOTAL CLASSIFICA��O************\n");
		printf ("\nTotal de funcion�rios � Classifica��o A: %d \nPorcentagem de funcion�rios: %.2f \nR$ pelo total de filhos da categoria: %.2f \n", vet[3], porcento[3],  bonuspelosfilhos[3]);
		printf ("\nTotal de funcion�rios � Classifica��o B: %d \nPorcentagem de funcion�rios: %.2f \nR$ pelo total de filhos da categoria: %.2f \n", vet[2], porcento[2],  bonuspelosfilhos[2]);
		printf ("\nTotal de funcion�rios � Classifica��o C: %d \nPorcentagem de funcion�rios: %.2f \nR$ pelo total de filhos da categoria: %.2f \n", vet[1], porcento[1],  bonuspelosfilhos[1]);
		printf ("\nTotal de funcion�rios � Classifica��o D: %d \nPorcentagem de funcion�rios: %.2f \nR$ pelo total de filhos da categoria: %.2f \n", vet[0], porcento[0],  bonuspelosfilhos[0]);
	}

