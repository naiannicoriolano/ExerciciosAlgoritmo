/*Leia quatro valores inteiros A, B, C e D. 
A seguir, calcule e mostre a diferen�a do produto de A e B pelo produto de C e D segundo a f�rmula: DIFERENCA = (A * B - C * D).
O arquivo de entrada cont�m 4 valores inteiros.
Imprima a mensagem DIFERENCA com todas as letras mai�sculas, conforme exemplo abaixo, com um espa�o em branco antes e depois da igualdade.*/

#include<stdio.h>
int main(){
	
	int a, b, c, d, diferenca;
	printf ("Digite o primeiro valor: ");	
	scanf ("%d", &a);
	printf ("Digite o segundo valor: ");	
	scanf ("%d", &b);
	printf ("Digite o terceiro valor: ");	
	scanf ("%d", &c);
	printf ("Digite o quarto valor: ");	
	scanf ("%d", &d);	
	
	diferenca = a*b - c*d;
	
	printf ("DIFERENCA: %d", diferenca);	
}
