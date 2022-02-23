#include <stdio.h>

typedef struct endereco{
	char rua[10], bairro[10], cidade[10], estado[10]; 
	int cep; 	
} endereco;

typedef struct cadastro{
	char nome[10], estadoCivil[10], sexo[10]; 
	int telefone, idade, identidade, cpf, salario; 	
	endereco end[i];
} cadastro;



void preencherCadastro (cadastro pessoa[][3], int i, int j){
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
		printf("\nNome:\n");
		fflush(stdin);
		fgets(pessoa[i][j].nome, 10, stdin);
		printf("Estado civil:\n");
		fflush(stdin);
		fgets(pessoa[i][j].estadoCivil, 10, stdin);
		printf("Sexo:\n");
		fflush(stdin);
		fgets(pessoa[i][j].sexo, 10, stdin);
		printf("Telefone:\n");
		scanf("%i", &pessoa[i][j].telefone);
		printf("Idade:\n");
		scanf("%f", &pessoa[i][j].idade);
		printf("Identidade:\n");
		scanf("%i", &pessoa[i][j].identidade);
		printf("Cpf:\n");
		scanf("%i", &pessoa[i][j].cpf);
		printf("Salario:\n");
		scanf("%i", &pessoa[i][j].salario);
		
		//para preencher o endereco, usarei struct dentro de struct -- exemplo - fgets (pessoa[i][j].end[i].bairro, 10, stdin)
		}
	}
}

int main (){
cadastro pessoa[3][3]; 

int i, j;		

	
	
}
