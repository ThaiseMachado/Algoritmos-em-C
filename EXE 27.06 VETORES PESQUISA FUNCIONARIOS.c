/* Aluna: Thaíse Francielle Machado Souto.
Exercício 5
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
	printf ("\nOlá! \nPor favor, informe de 1 à 100 quantos funcionarios desejam realizar a pesquisa: \n");
	scanf ("%d", &qtdpesquisa);
		if (qtdpesquisa <= 0 || qtdpesquisa > 100){
			printf ("Valor inválido! Redigite. \n");
			}
	}while (qtdpesquisa <= 0 || qtdpesquisa > 100);
	
	for (x=1; x<=qtdpesquisa; x++){
	
	printf ("\n==========PESQUISA==========\nInicando a pesquisa:\n");
	printf ("\nQual o salario do funcionário? \n");
	scanf ("%f", &salario);
	
	printf ("Digite a quantidade de filhos: \n");
	scanf ("%d", &qtdfilho);
	
		if (salario <= 1000){
		classe ='D';
		bonusporfilho = 20.00;
		bonuspelosfilhos[0] = bonusporfilho * qtdfilho;	
		vet[0]++;
		porcento[0]= 100 * vet[0] /qtdpesquisa;
		printf ("%c -  é a classificação do funcionário. \n", classe);
		printf ("O valor de bônus por filho é: %.2f. \n", bonusporfilho);
		printf ("O valor TOTAL de bônus pela quantidade de filhos é: %.2f. \n", bonuspelosfilhos[0]);
	}

		if (salario > 1000 && salario <=2000){
			classe = 'C';
			bonusporfilho = 15.00;
			bonuspelosfilhos[1] = bonusporfilho * qtdfilho;
			vet[1]++;
			porcento[1] = 100 * vet[1] /qtdpesquisa;
			printf ("%c -  é a classificação do funcionário. \n", classe);
		printf ("O valor de bônus por filho é: %.2f. \n", bonusporfilho);
		printf ("O valor TOTAL de bônus pela quantidade de filhos é: %.2f. \n", bonuspelosfilhos[1]);

	}
	if (salario > 2000 && salario <= 3000){
		classe = 'B';
		bonusporfilho = 10.00;
		bonuspelosfilhos[2] = bonusporfilho * qtdfilho;
		vet[2]++;
		porcento[2] = 100 * vet[2] /qtdpesquisa;
		printf ("%c -  é a classificação do funcionário. \n", classe);
		printf ("O valor de bônus por filho é: %.2f. \n", bonusporfilho);
		printf ("O valor TOTAL de bônus pela quantidade de filhos é: %.2f. \n", bonuspelosfilhos[2]);

	}
	if (salario > 3000){
		classe = 'A';
		bonusporfilho = 5.00;
		bonuspelosfilhos[3] = bonusporfilho * qtdfilho;
		vet[3]++;
		porcento[3] = 100 * vet[3] /qtdpesquisa;
		printf ("%c -  é a classificação do funcionário. \n", classe);
		printf ("O valor de bônus por filho é: %.2f. \n", bonusporfilho);
		printf ("O valor TOTAL de bônus pela quantidade de filhos é: %.2f. \n", bonuspelosfilhos[3]);

	}
		
		}
		printf ("\n************RELATÓRIO TOTAL CLASSIFICAÇÃO************\n");
		printf ("\nTotal de funcionários – Classificação A: %d \nPorcentagem de funcionários: %.2f \nR$ pelo total de filhos da categoria: %.2f \n", vet[3], porcento[3],  bonuspelosfilhos[3]);
		printf ("\nTotal de funcionários – Classificação B: %d \nPorcentagem de funcionários: %.2f \nR$ pelo total de filhos da categoria: %.2f \n", vet[2], porcento[2],  bonuspelosfilhos[2]);
		printf ("\nTotal de funcionários – Classificação C: %d \nPorcentagem de funcionários: %.2f \nR$ pelo total de filhos da categoria: %.2f \n", vet[1], porcento[1],  bonuspelosfilhos[1]);
		printf ("\nTotal de funcionários – Classificação D: %d \nPorcentagem de funcionários: %.2f \nR$ pelo total de filhos da categoria: %.2f \n", vet[0], porcento[0],  bonuspelosfilhos[0]);
	}

