#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int ano_passar, anacleto, felisberto, ano;
	
	anacleto = 150 + 2*ano;
	felisberto = 110 + 3*ano;
	
	for(ano = 0; felisberto < anacleto; ano++){
		anacleto = 150 + 2*ano;
		felisberto = 110 + 3*ano;
	}
	
	printf("Quantos anos serão necessários para o felisberto passar o anacleto?\n");
	printf("%d anos!",ano);
	
	return 0;
}
