#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num, num_pens;
	
		printf("Olá, informe o número que você pensou: ");
		scanf("%d", &num);
		
		for(i = 1; i <= num; i++){
			printf("Qual número foi pensado? ");
			scanf("%d", &num_pens);
			if(num_pens == num){
			printf("Você descobriu o número, %d! Em %d tentativas, boa!", num, i);
			}
				else if(num_pens > num){
					printf("Vish, errou! Dica: o número é menor que esse.\n");
				}
					else if(num_pens < num){
						printf("Vish, errou! Dica: o número é maior que esse.\n");
					}	
		}
    	
	return 0;
}
