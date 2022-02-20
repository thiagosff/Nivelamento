#include <stdio.h>

int main (){
	int n[10], i;
	
	printf("Digite o valor para completar a tabela: ");
	scanf("%i", &n[0]);
	
	for(i=1;i<10;i++)
		n[i] = n[i-1] * 2;
	for(i=0;i<10;i++)
		printf("n[%i] = %i\n", i, n[i]);	
		
}
