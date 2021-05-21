#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tinto = 0, branco= 0, rose = 0;
	float totalVinhos, porcentagemT, porcentagemB, porcentagemR;
	char vinho;
	
	printf("------- AVISO: para a contabilização, digite |T|- tinto, |B|- branco, |R|- rosê!-------\n");
	printf("\n------- O programa será finalizado quando você informar |F|!-------\n");
	
	do{
		printf("\nInforme o tipo de vinho, conforme instruções anteriores: ");
		scanf("%c", &vinho);
		fflush(stdin);
		vinho = toupper(vinho);
		
		if(vinho == 'T'){
		tinto = tinto + 1;
			}
			else if( vinho == 'R'){
				rose = rose + 1;
			}
				else if(vinho == 'B'){
					branco = branco +1;
				}
					else{
						printf("Tipo informado, inválido!\n");
					}		
	}while(vinho != 'F');
	
	totalVinhos = tinto + rose + branco;
	
	porcentagemT = (tinto/totalVinhos) * 100;
	porcentagemR = (rose/totalVinhos) * 100;
	porcentagemB = (branco/totalVinhos) * 100;
	
	printf("Muito obrigado, pela colaboração! Seguem os dados coletados:\n");
	printf("%.1f são de vinhos tintos\n%.1f de vinhos brancos\n%.1f de vinhos rosê!", porcentagemT, porcentagemB, porcentagemR);
	
	return 0;
}
