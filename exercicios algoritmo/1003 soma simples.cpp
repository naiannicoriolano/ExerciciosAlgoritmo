/* Leia dois valores inteiros, no caso para vari�veis A e B. A seguir, calcule a soma entre elas e atribua � vari�vel SOMA. A seguir escrever o valor desta vari�vel.
O arquivo de entrada cont�m 2 valores inteiros.
Imprima a mensagem "SOMA" com todas as letras mai�sculas, com um espa�o em branco antes e depois da igualdade seguido pelo valor correspondente � soma de A e B. */

#include<stdio.h>
int main(){
	
	int a, b, soma;
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	
	soma = a + b;
	
	printf("SOMA: %d", soma);

}

