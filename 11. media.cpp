#include <stdio.h>
#include <locale.h>
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 0, num; 
	float media, soma;
	soma = 0;
	printf("---- Para calcular a média serão solicitados alguns números, ao informar todos digite |0| e envie!----\n");
	do{
			printf("Informe um número par: ");
			scanf("%d", &num);
			
			if((num % 2 == 0) && num != 0){
				soma = soma + num;			
			}
			else{
				i--;
			}
		i++;
	} while(num != 0);
	 media = soma / i ;
	 printf("A media é %.1f", media);
	return 0;
} 
