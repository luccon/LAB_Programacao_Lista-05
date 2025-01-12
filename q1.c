#include <stdio.h>

void somar(int*, int*, int*);

int main (){
    int num1, num2, resultado;
    int *p_resultado = &resultado;

    puts("Entre com o primeiro número:");
    scanf("%d",&num1);
    puts("Entre com o segundo número:");
    scanf("%d",&num2);

    somar(&num1, &num2, &resultado);

    printf("O resultado da soma: %d\n",*p_resultado);
    printf("Endereço da memória: [%p]",p_resultado);

    return 0;
}
void somar(int *a, int *b, int *resultado){
    *resultado = *a + *b;
}