#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define RG 100

int vetor[TAM];
int *p_vetor = vetor;

int main () {
    srand(time(NULL));

    for (int i = 0; i < TAM; i++){
        *(p_vetor+i) = rand()%RG;
    }

    puts("Geração antes da ordenação:\n");
    for(int i = 0; i < TAM; i++){
        printf("%p - [%d] : [%d]\n",p_vetor+i,i,*(p_vetor+i));
    }
    int cont = 0;
    int flag = 1;
    for (int i = 0; i < TAM; i++){
        flag = 1;
        for (int k = 0; k < TAM-1; k++){
            if (*(p_vetor+k) > *(p_vetor+k+1)){
                *(p_vetor+k) = *(p_vetor+k) ^ *(p_vetor+k+1);
                *(p_vetor+k+1) = *(p_vetor+k) ^ *(p_vetor+k+1);
                *(p_vetor+k) = *(p_vetor+k) ^ *(p_vetor+k+1);

                flag = 0;
            }
        }
        if (flag){
            break;
        }
        cont++;
    }

    puts("Após a ordenação:\n");
    for(int i = 0; i < TAM; i++){
        printf("%p - [%d] : [%d]\n",p_vetor+i,i,*(p_vetor+i));
    }
    printf("O laço rodou %d vezes.\n",cont);
}