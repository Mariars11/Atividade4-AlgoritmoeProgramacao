#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int altura, menor = 0, maior = 0, alturaFem = 0, feminino = 0, mediaFem;
	char sexo;
	
	menor = altura;
	
	
	for(int i = 1; i <= 50; i++){
		printf("Informe o sexo |M|- masculino ou |F|- feminino da pessoa %d: ",i);
		scanf("%c", &sexo);
		fflush(stdin);
		sexo = toupper(sexo);
		printf("Informe a altura, em cm, dessa pessoa: ");
		scanf("%d", &altura);
		fflush(stdin);
	
		if(maior < altura){
			maior = altura;
		}		
		if(sexo == 'F'){
			feminino++;
			alturaFem = alturaFem + altura;
		}
  		if(menor > altura){
			menor = altura;		
		}
    }
		mediaFem = alturaFem / feminino;
		
		printf("A maior altura do grupo é: %d\n", maior);
		printf("A menor altura do grupo é: %d\n", menor);
		printf("A média de altura das mulheres é: %d", mediaFem);
	
	return 0;
}
