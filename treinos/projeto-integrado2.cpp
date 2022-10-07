#include<stdio.h>
#include<stdlib.h>

int main()

{
	
	char nome[50], endereco[50];
	
	char telefone[11];
	
	printf ("Aperte ENTER logo apos digitar cada informacao \n\n");
	printf("Escreva seu nome:\n");
	fgets(nome, 50, stdin);
	
	printf("Escreva o seu endereco:\n");
	fgets(endereco, 50, stdin);
	
	printf("Escreva o seu telefone: \n");
	fgets(telefone,11, stdin );
	
	printf("\n\n Nome : %s \n", nome);
	printf("Endereco: %s \n", endereco);
	printf("Telefone: %s \n", telefone);
}
