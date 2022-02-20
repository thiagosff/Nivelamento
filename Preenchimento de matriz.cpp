#include <stdio.h>

int main (){
	int matriz[12][12], i, j, soma;
	
	for(i=0;i<12;i++)
		for(j=0;j<12;j++){
			matriz[i][j] = i+j;
		}	
		
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			//printf("%i\t", matriz[i][j]); //matriz inteira;
			//if (i>j)
				//soma = matriz[i][j] + matriz[i][j];
				//printf("%i\t", soma);//diagonal principal	
		}
		printf("\n");	
	}
	for(i=0;i<12;i++)
		for(j=i+1;j<12;j++)
	soma += matriz[i][j];	
	
	printf("%i", soma);
}
