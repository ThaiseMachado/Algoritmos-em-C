#include <stdio.h>
#include <locale.h>
#define MAX 10

/*Questão 2)  Desenvolva um programa para realizar a correção de provas de múltipla escolha. 
A prova é composta por 10 questões, onde cada uma possui peso igual (1.0). Primeiramente realize 
a leitura do gabarito e armazene no vetor G[10]. Após informe o nome do aluno e o código de sua matrícula 
e faça a leitura das respostas que o aluno teve e armazene no vetor R[10]. A turma é composta por N alunos
(faça a leitura do N validando o valor para ser de 1 a no máximo 50). 

A leitura do gabarito é em um módulo denominado leitura.

A leitura das resposta do aluno é em um modulo denominado resposta.

O Calculo de acertos e o relatório deve ser desenvolvido em um modulo denominado calculo.

Calcule e imprima como saída no modulo calculo:

- o código da matrícula, o nome do aluno e a sua nota

- o percentual de aprovação e reprovação, sabendo que a nota mínima é 7.0.
*/

void leitura (char G[MAX]);
void resposta (char R[MAX]);
void calculo (char G[MAX], char R[MAX], char aluno[20], int cod);

int main (){
	setlocale(LC_ALL, "Portuguese"); 
	
	char gabarito[MAX], res[MAX], nome[20];
	int x, codmatricula, Nalunos;
	printf ("\n********************GABARITO********************\n\n");
	leitura (gabarito);
	
	do
	{
		printf ("\n Qual a quantidade de alunos que realizaram a prova ? ");
		scanf ("%d", &Nalunos);
		if (Nalunos < 1 || Nalunos > 50)
		{
			printf ("Quantidade insuficiente! Redigite. \n");
		}
	} while (Nalunos < 1 || Nalunos > 50);
	
	for (x=0; x < Nalunos; x++)
	{
		printf ("\n****************DADOS ALUNO(A)****************\n\n");
		printf ("Nome: ");
		scanf ("%s", &nome);
		printf ("\nCodigo Matricula: ");
		scanf ("%d", &codmatricula);
	
		printf ("\n****************RESPOSTA ALUNO(A)****************\n\n");
		resposta (res);
		calculo (gabarito, res, nome, codmatricula);
	}
}

void leitura (char G[MAX])
{
	int x = 0;
	printf ("(Alternativas de A até E) \n");
	for (x=0; x < MAX; x++)
	{
		do 
		{
			printf ("Gabarito da %dª Questão: ", x+1);
			scanf (" %c", &G[x]);
			
			G[x]= toupper(G[x]);
			if (G[x] != 'A' && G[x] != 'B' && G[x] != 'C' && G[x] != 'D' && G[x] != 'E')
			{
				printf ("Resposta inválida! Redigite.\n");
			}
		}while (G[x] != 'A' && G[x] != 'B' && G[x] != 'C' && G[x] != 'D' && G[x] != 'E');
	}
}

void resposta (char R[MAX])
{
	int x = 0;
	printf ("(Alternativas de A até E) \n");
	for (x=0; x < MAX; x++)
	{
		do 
		{
		printf ("Resposta do aluno para a %dª Questão: ", x+1);
		scanf (" %c", &R[x]);
		R[x]= toupper(R[x]);
			if (R[x] != 'A' && R[x] != 'B' && R[x] != 'C' && R[x] != 'D' && R[x] != 'E')
			{
				printf ("Resposta inválida! Redigite.\n");
			}
		}while (R[x] != 'A' && R[x] != 'B' && R[x] != 'C' && R[x] != 'D' && R[x] != 'E');
	}
}

void calculo (char G[MAX], char R[MAX], char aluno[20], int cod)
{
	int x, acertos = 0;
	float porcentagem=0;
	
	for (x=0; x < MAX; x++)
	{
		if (G[x] == R[x])
		{
			acertos++;
			porcentagem = ((float)acertos / MAX) * 100;
		}
	}
	if (acertos >= 7)
	{
		printf ("\nO(A) aluno(a) %s, de matrícula %d, foi APROVADO, acertando %d questoes - equivalente à %.2f%% da prova.\n", aluno, cod, acertos, porcentagem);
	}else
		printf ("\nO(A) aluno(a) %s, de matrícula %d, foi REPROVADO, acertando %d questoes - equivalente à %.2f%% da prova.\n", aluno, cod, acertos, porcentagem);
}
