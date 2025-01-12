#include <stdio.h>

#define TAM 5

//os endereços na memória são sempre continuos

int main() {
    int opcao;

    printf("Escolha o tipo de dado do vetor:\n");
    printf("[1] Inteiro\n[2] Float\n[3] Char\n");
    scanf("%d",&opcao);

    if(opcao == 1){
        int vetor[TAM];
        for(int i = 0; i < TAM; i++){
            printf("Entre com o %dº número inteiro.\n",i+1);
            scanf("%d",&vetor[i]);
        }
        printf("Imprimindo:\n");
        for(int j = 0; j < TAM; j++){
            printf("[%p] -> %d.\n",vetor+j,*(vetor+j));
        }
    }
    else if (opcao == 2){
        float vetor[TAM];
        for(int i = 0; i < TAM; i++){
            printf("Entre com o %dº número inteiro.\n",i+1);
            scanf("%f",&vetor[i]);
        }
        printf("Imprimindo:\n");
        for(int j = 0; j < TAM; j++){
            printf("[%p] -> %f.\n",vetor+j,*(vetor+j));
        }
    }
    else if (opcao == 3){
        char vetor[TAM];
        for(int i = 0; i < TAM; i++){
            printf("Entre com o %dº número inteiro.\n",i+1);
            scanf(" %c",&vetor[i]);
        }
        printf("Imprimindo:\n");
        for(int j = 0; j < TAM; j++){
            printf("[%p] -> %c.\n",vetor+j,*(vetor+j));
        }
    }
    else {
        printf("Opção inválida.");
    }
}