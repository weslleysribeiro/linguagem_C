#include <stdio.h>

typedef struct {

        char  nome[100];
        float altura;
        float peso;
        long long cpf;
        char sexo[100];
} Pessoa;


int main(){
	
	int qtd_pessoa;
	int i;
	float imc [1000];

	printf("Digite a quantidade de pessoas:");
	scanf("%d", &qtd_pessoa);
	Pessoa pessoas[qtd_pessoa];

	
        for(int i=0; (i < qtd_pessoa); i++){
                printf("\nNome da pessoa(%i): ",i+1);
                scanf("%s",pessoas[i].nome);
                printf("Altura da pessoa(%i): ",i+1);
                scanf("%f",&pessoas[i].altura);
                printf("Peso da pessoa(%i): ",i+1);
                scanf("%f",&pessoas[i].peso);
				printf("CPF da pessoa(%i): ",i+1);
                scanf("%ld",&pessoas[i].cpf);
                printf("Sexo da pessoa(%i): ",i+1);
                scanf("%s",pessoas[i].sexo);
        }
        
        long long cpf_digitado;
        
        printf("\n\nInforme CPF da pessoa: ");
        scanf("%ld",&cpf_digitado);
        
        for(int i=0; (i < qtd_pessoa); i++){
                if (pessoas[i].cpf == cpf_digitado) {
                	
                	imc[i] = (pessoas[i].peso) / ((pessoas[i].altura)*(pessoas[i].altura));
                        printf("\nIMC: %.2f\n", imc[i]);
                }
        }
        	
        return 0;	
}
