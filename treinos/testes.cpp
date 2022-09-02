

#include<stdio.h>

int main()

{
	
	int contar;
	int a,b,c;
	for(contar = 1; contar <=3; contar++)
	{
		printf("Digite um numero \n");
		scanf("%d",&a);
		printf("digite mais um numero \n");
		scanf("%d", &b);
		
		c=a+b;
		
		printf("A soma e %d \n", c);
		
		
		printf ("%d", contar);
	}
}


