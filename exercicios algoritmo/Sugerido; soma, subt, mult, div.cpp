// Em double, apresente a soma, diferenca, divisao e multiplicao de dois numeros.

#include<stdio.h>
int main(){
	
	double a, b, x;
	printf ("Digite o primeiro valor: ");	
	scanf ("%lf", &a);
	printf ("Digite o segundo valor: ");	
	scanf ("%lf", &b);
	
	x = a + b;
	printf("SOMA: %.1lf\n", x);
	x = a - b;
	printf("SUBTRACAO: %.1lf\n", x);
	x = a * b;
	printf("MULTIPLICACAO: %.1lf\n", x);
	x = a/b;
	printf("DIVISAO: %.1lf\n", x);
	
}
