#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num, num_pens;
	
		printf("Ol�, informe o n�mero que voc� pensou: ");
		scanf("%d", &num);
		
		for(i = 1; i <= num; i++){
			printf("Qual n�mero foi pensado? ");
			scanf("%d", &num_pens);
			if(num_pens == num){
			printf("Voc� descobriu o n�mero, %d! Em %d tentativas, boa!", num, i);
			}
				else if(num_pens > num){
					printf("Vish, errou! Dica: o n�mero � menor que esse.\n");
				}
					else if(num_pens < num){
						printf("Vish, errou! Dica: o n�mero � maior que esse.\n");
					}	
		}
    	
	return 0;
}
