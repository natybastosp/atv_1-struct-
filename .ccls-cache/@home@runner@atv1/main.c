#include <stdio.h>

typedef unsigned int uint;

typedef struct Pessoa {
	char nome[100]; 
	uint idade;
	char sexo; // 'F', 'M'
	char raca[100];		
}t_pet;

int main(void) {
	
	t_pet pet = {
	.nome = "nome",
	.idade = 0,
	.sexo = 's',
	.raca = "raca"
	};

	printf("Informações gerais de seu Pet\n");
	printf("\n");
	printf("Informe o nome:\n");
	scanf("%c", &pet.nome);
	
	printf("Informe a idade (em anos):\n");
	scanf("%u", &pet.idade);

	printf("Informe o sexo (F ou M):\n");
	scanf("%c", &pet.sexo);

	printf("Informe a raça:\n");
	scanf("%c", &pet.raca);

	printf("Informações\n");
	printf("nome; %c\n", *pet.nome);
	printf("Idade: %u\n", pet.idade);
	printf("Sexo: %c\n", pet.sexo);
	printf("raça; %c", *pet.raca);
	
  return 0;
}