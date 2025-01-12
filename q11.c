#include <stdio.h>
#include <time.h>

#define TAM 10

void GeraValores(int x[], int y[], int);
void ContarCoocorrencias(int x[], int y[], int**);
void ImprimirMatriz(int**,int);

int main () {
    int vetorx[TAM], vetory[TAM], n = 0, **m;

    printf("Entre com o valor de N:\n");
    scanf("%d",&n);

    m = (int**)malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++){
        m[i] = (int *)calloc(n,sizeof(int));
    }

    GeraValores(vetorx,vetory,n);
    ContarCoocorrencias(vetorx,vetory,m);
    ImprimirMatriz(m,n);


}

void GeraValores(int x[], int y[], int n){
    srand(time(NULL));
    for (int i = 0; i < TAM; i++){
        x[i] = rand()%n;
        y[i] = rand()%n;
    }
    printf("\nVetor X: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", x[i]);
    }

    printf("\nVetor Y: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", y[i]);
    }
    printf("\n");
}
void ContarCoocorrencias(int x[], int y[], int **m){
    for(int i = 0; i < TAM; i++){
        m[x[i]][y[i]]++;
    }
}
void ImprimirMatriz(int **m, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}