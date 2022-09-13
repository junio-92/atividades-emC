#include<stdio.h>
#include<stdlib.h>



int main(void)

{
	
	char  lingua='l', portugues='p', espanhol='e', russo='r';
	
	printf("Escreva o nome da lingua:");
	
	scanf("%c", &lingua);
	

	
	if(lingua == portugues){
		
		printf(" Va para portugal " );
	}
	

	
	else if(lingua ==espanhol){
		printf("\t Va para a Espanha \n");
	}
	

	
	else if(lingua == russo){
	
			printf("\t Va para a Russia \n");
			
	}else
		printf("lingua nao identificada");
	
	
		
		
	
	
	
	return 0;
}
