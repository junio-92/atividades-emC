#include<stdio.h>
#include<stdlib.h>

int main(){
	

	int mat[3][3], k,z;
	
	printf ("\n Digite um numero \n");
	
	for (k =0;  k<3; k++)
	for (z =0;  z<3; z++)
	{
		
	printf ("Valor [%d] [%d] = " , k,z); 
	scanf("%d", &mat[k] [z]);
	}

	printf("\n \n -------------saida de dados------------ \n \n ");
	
	
	for (k =0;  k<3; k++)
	for (z =0;  z<3; z++)
	{
		printf (" \n\n Valor [%d] [%d] = %d" , k,z, mat[k] [z] ); 
		
	}
	
	
	return(0);
	
	
	
}
