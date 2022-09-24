#include<stdio.h>
#include<stdlib.h>

int main ()
{
	
	struct dados_universitario
	{
		
	int ra;
	float nota;
	char nome[50];
	
		
	};
	
	struct dados_universitario universitario;
	
	printf("Nome do universitario: \n");
	fgets (universitario.nome,50,stdin);
	printf ("Digite o RA d universitario: \n");
	scanf("%d", &universitario.ra);
	printf("Digite a nota dele: \n");
	scanf("%f", &universitario.nota);
	
	printf ("\n\n----DADOS DO ESTUDANTE------\n\n");
	
	printf("Nome .....: %s \n", universitario.nome);
	printf("Nota .....: %.2f \n", universitario.nota);
	printf("RA .....: %d \n", universitario.ra);
	
	
return(0);
	
	
}
