/* Leia 3 valores, no caso, vari�veis A, B e C, que s�o as tr�s notas de um aluno. 
A seguir, calcule a m�dia do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
Considere que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.
O arquivo de entrada cont�m 3 valores com uma casa decimal, de dupla precis�o (double).
Imprima a mensagem "MEDIA" e a m�dia do aluno conforme exemplo abaixo, 
com 1 d�gito ap�s o ponto decimal e com um espa�o em branco antes e depois da igualdade. */

#include<stdio.h>
int main(){
	
	double a, b, c, media;
	printf ("Digite a primeira nota: ");	
	scanf ("%lf", &a);
	printf ("Digite a segunda nota: ");	
	scanf ("%lf", &b);
	printf ("Digite a terceira nota: ");	
	scanf ("%lf", &c);
	
	media = (a*2 + b*3 + c*5)/ 10;
	printf ("MEDIA = %lf", media);


}

