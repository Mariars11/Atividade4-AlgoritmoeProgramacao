#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, i, n = 20, soma;
	printf("A s�rie Fibonacci � uma sucess�o de n�meros, iniciada em 0,1 e os n�meros seguintes s�o sempre\n"); 
 	printf("a soma dos dois n�meros anteriores.\n");
	
	printf("Informe o n�mero 1: ");
	scanf("%d", &num1);
	printf("Informe o n�mero 2: ");
	scanf("%d", &num2);
	
	for(i = 2; i <= n; i++){
		soma = num1 + num2;
		num1 = num2;
		num2 = soma;
		printf("%d\n",soma);
	}
}
