/* Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta opera��o � vari�vel PROD. 
A seguir mostre a vari�vel PROD com mensagem correspondente.   
O arquivo de entrada cont�m 2 valores inteiros.
Imprima a mensagem "PROD" e a vari�vel PROD conforme exemplo abaixo, com um espa�o em branco antes e depois da igualdade.*/

#include<stdio.h>
int main(){

	int a, b, prod;
	printf ("Digite o primeiro valor: ");	
	scanf ("%d", &a);
	printf ("Digite o segundo valor: ");	
	scanf ("%d", &b);
	
	prod = a * b;
	printf("PROD = %d", prod);
	
}
