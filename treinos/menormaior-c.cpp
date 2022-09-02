#include <stdio.h>

int main ()


{
	
	int num, maior, menor;
	int  inicio = 1;
	
	printf("digite numeros:");
	
	while(num>=0){
		scanf("%d", &num);
		if (inicio == 1){
			maior = num;
			menor = num;
		}
		
		inicio = 0;
		
			if(num>=0){
			
		
		
		if(num > maior){
			maior = num;
		}
		
		if(num<menor){
			menor = num;
		}
		
		
		}
	}
	
	printf("Maior numero: %d \n" , maior);
	printf("Menor numero: %d", menor);
}
