#include <stdio.h>
#include <locale.h>
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 0, num; 
	float media, soma;
	soma = 0;
	printf("---- Para calcular a m�dia ser�o solicitados alguns n�meros, ao informar todos digite |0| e envie!----\n");
	do{
			printf("Informe um n�mero par: ");
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
	 printf("A media � %.1f", media);
	return 0;
} 
