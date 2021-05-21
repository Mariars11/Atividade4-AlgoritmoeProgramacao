#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int total1 = 0, total2 = 0, total3 = 0, ouro1 = 0, ouro2 = 0, ouro3 = 0, prata1 = 0, prata2 = 0, prata3 = 0, bronze1 = 0, bronze2 = 0, bronze3 = 0;
	char nome1[20], nome2[20], nome3[20];
	
	printf("Qual o nome do país 1? ");
	fgets(nome1, 20, stdin);
	fflush(stdin);
	
	printf("Quantas medalhas de ouro, prata e bronze, respectivamente, esse país recebeu? ");
	scanf("%d%d%d", &ouro1,&prata1,&bronze1);
	fflush(stdin);
	
	printf("Qual o nome do país 2? ");
	fgets(nome2, 20, stdin);
	fflush(stdin);
	
	printf("Quantas medalhas de ouro, prata e bronze, respectivamente, esse país recebeu? ");
	scanf("%d%d%d", &ouro2,&prata2,&bronze2);
	fflush(stdin);
	
	printf("Qual o nome do país 3? ");
	fgets(nome3, 20, stdin);
	fflush(stdin);
	
	printf("Quantas medalhas de ouro, prata e bronze, respectivamente, esse país recebeu? ");
	scanf("%d%d%d", &ouro3,&prata3,&bronze3);
	fflush(stdin);
	
	total1 = 3 * ouro1 + 2 * prata1 + 1 * bronze1;
	total2 = 3 * ouro2 + 2 * prata2 + 1 * bronze2;
	total3 = 3 * ouro3 + 2 * prata3 + 1 * bronze3;
	
	if (total1 > total2 && total1 > total3 && total2 > total3){
		printf("O 1º lugar é do país %scom %d medalhas", nome1, total1);
		printf("\nO 2º lugar é do país %scom %d medalhas", nome2, total2);
		printf("\nO 3º lugar é do país %scom %d medalhas", nome3, total3);
	}
	else if (total1 > total2 && total1 > total3 && total3 > total2){
		printf("O 1º lugar é do país %scom %d medalhas", nome1, total1);
		printf("\nO 2º lugar é do país %scom %d medalhas", nome3, total3);
		printf("\nO 3º lugar é do país %scom %d medalhas", nome2, total2);
	}
	else if (total2 > total1 && total2 > total3 && total1 > total3){
		printf("O 1º lugar é do país %scom %d medalhas", nome2, total2);
		printf("\nO 2º lugar é do país %scom %d medalhas", nome1, total1);
		printf("\nO 3º lugar é do país %scom %d medalhas", nome3, total3);
	}
	else if (total2 > total1 && total2 > total3 && total3 > total1){
		printf("O 1º lugar é do país %scom %d medalhas", nome2, total2);
		printf("\nO 2º lugar é do país %scom %d medalhas", nome3, total3);
		printf("\nO 3º lugar é do país %scom %d medalhas", nome1, total1);
	}
	else if (total3 > total2 && total3 > total1 && total2 > total1){
		printf("O 1º lugar é do país %scom %d medalhas", nome3, total3);
		printf("\nO 2º lugar é do país %scom %d medalhas", nome2, total2);
		printf("\nO 3º lugar é do país %scom %d medalhas", nome1, total1);
	}
	else if (total3 > total2 && total3 > total1 && total1 > total2){
		printf("O 1º lugar é do país %scom %d medalhas", nome3, total3);
		printf("\nO 2º lugar é do país %scom %d medalhas", nome1, total1);
		printf("\nO 3º lugar é do país %scom %d medalhas", nome2, total2);
	}
	
	return 0;
}
