/* Leia 2 valores inteiros A e B. 
A seguir, se A for maior que B, imprima "Valores aceitos". Caso n�o, imprima "Valores n�o aceitos".*/

#include<stdio.h>
int main(){
	
	int a, b;
	printf ("Digite o valor A: ");	
	scanf ("%d", &a);
	printf ("Digite o valor B: ");	
	scanf ("%d", &b);
	
	if(a > b)
	printf("Valores aceitos");
	else printf("Valores nao aceitos");
}

