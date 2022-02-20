#include <stdio.h>

int main (){
	float n1[3], n2[3], n3[3], n4[3], media[3], mef, ef;
	int i;
	
	for (i=0;i<3;i++){
		printf("Digite as notas (1, 2, 3 e 4): ");
		scanf("%f%f%f%f", &n1[i], &n2[i], &n3[i], &n4[i]);
		media[i] = (n1[i]*2 + n2[i]*3 + n3[i]*4 + n4[i]*1 )/10;
	}
	for (i=0;i<3;i++){
		printf("Media: %f\t", media[i]);
		printf("\n");
	}
	for (i=0;i<3;i++){
		if (media[i]>= 7)
			printf("\nO aluno esta aprovado!");
		else if (media[i] < 5)
			printf("\nO aluno esta reprovado!");
		else {
			printf("\nO aluno esta em exame final!");
			printf("\nDigite a nota do exame final: ");	
			scanf("%f", &ef);
			mef = (media[i] + ef)/2;
			if (mef >= 5){
				printf("Aluno aprovado!");
				printf("\nMedia final: %f", mef);
			}
			else{
				printf("Aluno reprovado!");
				printf("\nMedia final: %f", mef);	
			}
		}
	}
}
