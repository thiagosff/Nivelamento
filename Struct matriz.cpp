#include <stdio.h>

typedef struct automovel{
	char marca[15], cor[10], modelo[15];
	float motor, preco;
	int ano;
} automovel;

void preencherMatriz (automovel a1[][1], int i, int j){
	for (i=0;i<2;i++){
		for (j=0;j<1;j++){
		printf("\nMarca:\n");
		fflush(stdin);
		fgets(a1[i][j].marca, 15, stdin);
		printf("Cor:\n");
		fflush(stdin);
		fgets(a1[i][j].cor, 10, stdin);
		printf("Modelo:\n");
		fflush(stdin);
		fgets(a1[i][j].modelo, 15, stdin);
		printf("Motor:\n");
		scanf("%f", &a1[i][j].motor);
		printf("Preco:\n");
		scanf("%f", &a1[i][j].preco);
		printf("Ano:\n");
		scanf("%i", &a1[i][j].ano);
		}
	}

}

void imprimirMatriz (automovel a1[][1], int i, int j){
	for (i=0;i<2;i++){
		for (j=0;j<1;j++){
		printf("\n-----------------");
		printf("\nMarca: %s", a1[i][j].marca);
		printf("\n");
		printf("Cor: %s", a1[i][j].cor);
		printf("\n");
		printf("Modelo: %s", a1[i][j].modelo);
		printf("\n");
		printf("Motor: %f", a1[i][j].motor);
		printf("\n");
		printf("Preco: %f", a1[i][j].preco);
		printf("\n");
		printf("Ano: %i", a1[i][j].ano);
		}
	}

}


int main (){
	
	//declaracoes
	automovel a1[2][1];
	int i, j;
	
	preencherMatriz (a1, i, j);
	
	imprimirMatriz (a1, i, j);
	
	
}
