#include <stdio.h>

typedef struct endereco{
	char rua[30], bairro[30], cidade[30], estado[30], cep[30];	
} endereco;

typedef struct cadastro{
	char nome[10], estadoCivil[10], sexo[10], telefone[20], idade[10], identidade[20], cpf[20], salario[10]; 
	endereco end[5];
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
		fflush(stdin);
		fgets(pessoa[i][j].telefone, 20, stdin);
		printf("Idade:\n");
		fflush(stdin);
		fgets(pessoa[i][j].idade, 10, stdin);
		printf("Identidade:\n");
		fflush(stdin);
		fgets(pessoa[i][j].identidade, 20, stdin);
		printf("Cpf:\n");
		fflush(stdin);
		fgets(pessoa[i][j].cpf, 20, stdin);
		printf("Salario:\n");
		fflush(stdin);
		fgets(pessoa[i][j].salario, 10, stdin);
		printf("\n------Endereco------\n");
		printf("\nRua:\n");
		fflush(stdin);
		fgets(pessoa[i][j].end[i].rua, 30, stdin);
		printf("Bairro:\n");
		fflush(stdin);
		fgets(pessoa[i][j].end[i].bairro, 30, stdin);
		printf("Cidade:\n");
		fflush(stdin);
		fgets(pessoa[i][j].end[i].cidade, 30, stdin);
		printf("Estado:\n");
		fflush(stdin);
		fgets(pessoa[i][j].end[i].estado, 30, stdin);
		printf("Cep:\n");
		fflush(stdin);
		fgets(pessoa[i][j].end[i].cep, 30, stdin);
		}
	}
}

void imprimirCadastro (cadastro pessoa[][3], int i, int j){
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
		printf("\nNome: %s\n", pessoa[i][j].nome);
		printf("Estado civil: %s\n", pessoa[i][j].estadoCivil);
		printf("Sexo: %s\n", pessoa[i][j].sexo);
		printf("Telefone: %i\n", pessoa[i][j].telefone);
		printf("Idade: %i\n", pessoa[i][j].idade);
		printf("Identidade: %i\n", pessoa[i][j].identidade);
		printf("Cpf: %i\n", pessoa[i][j].cpf);
		printf("Salario: %i\n", pessoa[i][j].salario);
		printf("\n------Endereco------\n");
		printf("\nRua: %s\n", pessoa[i][j].end[i].rua);
		printf("Bairro: %s\n", pessoa[i][j].end[i].bairro);
		printf("Cidade: %s\n", pessoa[i][j].end[i].cidade);
		printf("Estado: %s\n", pessoa[i][j].end[i].estado);
		printf("Cep: %s\n", pessoa[i][j].end[i].cep);
		}
	}
}

int main (){
cadastro pessoa[3][3]; 
endereco end [5];
int i, j;

preencherCadastro(pessoa, i, j);
imprimirCadastro(pessoa, i, j);		
	
}
