#include <stdio.h>

int main(){
   
    //declaração de variáveis 	
    int v[3];
	double i;
	
	//entrada de dados

	printf("Digite o primeiro valor: ");
	scanf("%d", &v[0]);
	printf("Digite o segundo valor: ");
	scanf("%d", &v[1]);
	printf("Digite o terceiro valor: ");
	scanf("%d", &v[2]);
	
	//saída de dados

	printf("\n Valores de cada vetor\n");

	//estrutura de dados FOR para ajudar a pecorrer o vetor 		
	for (int i = 0; i<=2;i++){
		printf("\n v[%d] = %d", i, v[i]);
	}
	
	return 0;
}

