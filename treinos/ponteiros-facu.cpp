#include<stdio.h>
#include<conio.h>

int main(void)

{
	
	
	int valor=50;
	
	int *ptb;
	
	ptb = &valor;
	
	printf (" PONTEIROS \n\n");
	printf("Conteudo da variavel valor: %d\n", valor);
	printf("Endereço da variavel valor: %x \n", &valor);
	printf("Conteudo da variavel ponteiro ptb: %x", ptb);
	
	getch ();
	return(0);
}
