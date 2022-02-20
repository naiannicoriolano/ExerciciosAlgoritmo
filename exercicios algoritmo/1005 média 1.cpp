/* Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. 
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). 
Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
O arquivo de entrada contém 2 valores com uma casa decimal cada um.
Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, com 5 dígitos após o ponto decimal e com um espaço em branco antes e depois da igualdade. 
Utilize variáveis de dupla precisão (double). */

#include<stdio.h>
int main(){
	
	double a, b, media;
	printf("Digite a primeira nota: ");
	scanf("%lf", &a);
	printf("Digite a segunda nota: ");
	scanf("%lf", &b);
	
	media = (a*3.5 + b*7.5)/ 11;
	
	printf("MEDIA = %lf", media);	
}
