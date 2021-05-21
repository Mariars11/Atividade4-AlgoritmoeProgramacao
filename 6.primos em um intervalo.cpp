#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");	
	int num1, num2;
	
	printf("Informe o número 1: ");
	scanf("%d", &num1);
	printf("Informe o número 2: ");
	scanf("%d", &num2);
	
	for(int i = num1; i <= num2; i++){
		if((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0) && (i % 7 != 0) && (i % 11 != 0) || i== 1 || i == 2 || i == 3 || i == 5 || i == 7 || i ==11){
			printf("%d é primo!\n", i);
		}
	}	
	return 0;
}
