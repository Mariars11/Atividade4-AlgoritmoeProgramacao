#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia, mes;
	
	printf("Informe o dia: ");
	scanf("%d", &dia);
	printf("Informe o m�s: ");
	scanf("%d", &mes);
	
	if(mes == 3 && dia >= 21 && dia <= 31 || mes == 4 && dia >= 1 && dia <= 20){
		printf("%d/%d � do signo zod�aco: �RIES!\n", dia,mes);
	}
		else if(mes == 4 && dia >= 21 && dia <= 30 || mes == 5 && dia >= 1 && dia <= 20){
				printf("%d/%d � do signo zod�aco: TOURO!\n", dia,mes);		
		}
			else if(mes == 5  && dia >= 21 && dia <= 31 || mes == 6 && dia >= 1 && dia <= 20){
					printf("%d/%d � do signo zod�aco: GEM�OS!\n", dia,mes);		
			}
				else if(mes == 6 && dia >= 21 && dia <= 30 || mes == 7 && dia >= 1 && dia <= 21){
						printf("%d/%d � do signo zod�aco: C�NCER!\n", dia,mes);
					}
					else if(mes == 7  && dia >= 22 && dia <= 31 || mes == 8 && dia >= 1 && dia <= 22){
							printf("%d/%d � do signo zod�aco: LE�O!\n", dia,mes);
						}
						else if(mes == 8 && dia >= 23 && dia <= 31 ||mes == 9 && dia >= 1 && dia <= 22){
								printf("%d/%d � do signo zod�aco: VIRGEM!\n", dia,mes);
							}							
							else if(mes == 9  && dia >= 23 && dia <= 30 || mes == 10 && dia >= 1 && dia <= 22){
									printf("%d/%d � do signo zod�aco: LIBRA!\n", dia,mes);								
							}
								else if(mes == 10  && dia >= 23 && dia <= 31 || mes == 11 && dia >= 1 && dia <= 21){
										printf("%d/%d � do signo zod�aco: ESCORPI�O!\n", dia,mes);
									}									
									else if(mes == 11 && dia >= 22 && dia <= 30 || mes == 12 && dia >= 1 && dia <= 21){
											printf("%d/%d � do signo zod�aco: SAGIT�RIO!\n", dia,mes);										
									}
										else if(mes == 11 && dia >= 22 && dia <= 31 || mes == 12 && dia >= 1 && dia <= 20){
												printf("%d/%d � do signo zod�aco: CAPRIC�RNIO!\n", dia,mes);
											}										
											else if(mes == 1 && dia >= 21 && dia <= 31 || mes == 12 && dia >= 1 && dia <= 19){
												printf("%d/%d � do signo zod�aco: AQU�RIO!\n", dia,mes);
												}											
												else if(mes == 2 && dia >= 20 && dia <= 29 || mes == 3 && dia >= 1 && dia <= 20){
													printf("%d/%d � do signo zod�aco: PEIXES!\n", dia,mes);
												} 
													else printf("Dia ou m�s informado � inv�lido!");
													
	
	return 0;
}
