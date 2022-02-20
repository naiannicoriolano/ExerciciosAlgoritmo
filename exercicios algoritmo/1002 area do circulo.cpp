/* A f�rmula para calcular a �rea de uma circunfer�ncia �: area = p . raio2. Considerando para este problema que p = 3.14159:
- Efetue o c�lculo da �rea, elevando o valor de raio ao quadrado e multiplicando por p.
A entrada cont�m um valor de ponto flutuante (dupla precis�o), no caso, a vari�vel raio.
Apresentar a mensagem "A=" seguido pelo valor da vari�vel area, conforme exemplo abaixo, com 4 casas ap�s o ponto decimal. Utilize vari�veis de dupla precis�o (double).*/

#include<stdio.h>
#include<math.h>
#define PI 3.14159 
int main(){
	
	double area, raio;
	printf ("Digite o raio: ");	
	scanf ("%lf", &raio);
	
	printf("A = %.4lf", pow(raio,2) * PI);
}
