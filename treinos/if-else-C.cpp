#include<stdio.h>

int main ()
{
	int a1,a2,a3;
	
	
	scanf("%d", &a1);
	scanf("%d", &a2);
	
	a3=a1+a2;
	
	printf("Resposta %d \n", a3);
	
	if (a3==10)
	printf("tudo bom");
	else if (a3 >=90 && a3 < 120)
	printf("Deu certo");
	else if (a3=8 && a3<12)
	printf("cansei");
	else
	printf("FIM");
}
