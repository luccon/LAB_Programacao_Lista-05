#include <stdio.h>
#include <time.h>

#define VX 10

int main () {
    int vetorx[VX],vetorf[VX];
    int n = 0;

    srand(time(NULL));

    printf("Digite o intervalo N:");
    scanf("%d",&n);

    for(int i = 0; i < VX; i++){
        vetorx[i] = rand()%n;
    }
    printf("Vetor X:\n");
    for(int j = 0; j < VX; j++){
        printf("%d ",*(vetorx+j));
    }
    printf("\nGerando vetor F.\n");
    for(int k = 0; k < n; k++){
    int cnt = 0;
        for(int l = 0; l < VX; l++){
            if(vetorx[l] == k){
                cnt++;
            }
            vetorf[k] = cnt;
        }
    }
    printf("Imprimindo Vetor F:\n");
    for(int m = 0; m < n; m++){
        printf("%d ",*(vetorf+m));
    }
}