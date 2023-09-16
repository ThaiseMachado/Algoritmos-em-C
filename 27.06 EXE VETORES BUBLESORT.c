/* Aluna: Thaíse Francielle Machado Souto.
Exercício 6
*/

#include <stdio.h>
#include <locale.h>
int main ()

{
setlocale(LC_ALL, "Portuguese");
 
int num[5], x, i, cont, aux;

for (x=0; x<5; x++){
	printf ("Digite cinco números aleatórios: ");
	scanf ("%d", &num[x]);
}

printf ("\n======ORDEM CONFORME DIGITAÇÃO======\n");

	for (x=0; x<5; x++){
	printf ("%d \n", num[x]);
}
// ORDENAÇAO BUBBLE
for (cont =1; cont < 5; cont++){
	for (i = 0; i < 5-1; i++){
		if (num[i] > num [i+1]){
			aux = num[i];
			num[i] = num[i+1];
			num[i+1] = aux;
		}
	}
}
printf ("\n======Em Ordem CRESCENTE======\n");

	for (x=0; x<5; x++){
		printf ("%d \n", num[x]);
}
printf ("\n======Em Ordem DECRESCENTE======\n");

	for (x=5-1; x>=0; x--){
		printf ("%d \n", num[x]);

}
}
