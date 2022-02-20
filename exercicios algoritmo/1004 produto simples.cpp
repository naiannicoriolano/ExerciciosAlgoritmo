/* Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. 
A seguir mostre a variável PROD com mensagem correspondente.   
O arquivo de entrada contém 2 valores inteiros.
Imprima a mensagem "PROD" e a variável PROD conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.*/

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
