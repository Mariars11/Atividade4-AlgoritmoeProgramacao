#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, i, n = 20, soma;
	printf("A série Fibonacci é uma sucessão de números, iniciada em 0,1 e os números seguintes são sempre\n"); 
 	printf("a soma dos dois números anteriores.\n");
	
	printf("Informe o número 1: ");
	scanf("%d", &num1);
	printf("Informe o número 2: ");
	scanf("%d", &num2);
	
	for(i = 2; i <= n; i++){
		soma = num1 + num2;
		num1 = num2;
		num2 = soma;
		printf("%d\n",soma);
	}
}
