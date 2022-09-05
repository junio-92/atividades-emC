#include<stdio.h>
#include<stdlib.h>



int main(void)

{
	
	char  lingua;
	
	printf("Escreva o nome da lingua:");
	
	scanf("%c", &lingua);
	

	
	if(lingua == 'portugues')
	{
		
		printf(" Va para portugal " );
	}
	

	
	if(lingua =='espanhol')
	{
			printf("\t Va para a Espanha \n");
	}
	

	
	if(lingua == 'russo')
	
	{
			printf("Va para a Russia");
	}
	

	
	else
	{
		printf("ERRO");
		
	}
	
	
	return 0;
}
