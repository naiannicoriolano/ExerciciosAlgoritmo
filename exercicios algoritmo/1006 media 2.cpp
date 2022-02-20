/* Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. 
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double).
Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, 
com 1 dígito após o ponto decimal e com um espaço em branco antes e depois da igualdade. */

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

