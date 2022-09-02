#include<stdio.h>




int mult (int g1, int g2)
{
	int resposta;
	resposta = g1 * g2;
	
	return resposta;
}


int main(void)

{
	
	int j1, j2, resultado;
	
	printf("Escreva um numero:");
	scanf("%d" , &j1);
	printf("Escreva outro numero: ");
	scanf("%d", &j2);
	
	resultado =	mult (j1,j2);
	
	printf("Resultado da operacao = %d\n", resultado);
	
	return 0;
}
