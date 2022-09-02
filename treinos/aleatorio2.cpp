#include <stdio.h>
int main ()

{
	int a, b, c, media;
	scanf("%d", &a);
	scanf("%d", &b);
	
	
	c = a + b; 
	
		media = (a + b) /2;
	printf("A soma e:%d\n", c);
	printf(" A media e:%d  \n", media);
	
	switch(media){
		
			case 1 : 
	printf("razoavel");
	break;
	
	case 2 :
		printf("bom");
		break;
		
		default : 
		printf ("ERRO");
		
		
	}

	
	
}
