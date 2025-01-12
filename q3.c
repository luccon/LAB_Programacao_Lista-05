#include <stdio.h>

//Para finalizar o programa digite "-99"

int main(){
    int num = 0, menor = 0, aux = 0;
    int *p_num = &num, *p_menor = &menor, *p_aux = &aux;

    while(1){

        printf("Digite o %dº número:\n",*p_aux+1);
        scanf("%d",p_num);
        if(*p_num == -99){
        break;
        }
        if(aux == 0){
            *p_menor = *p_num;
        }
        if(*p_num < *p_menor){
            *p_menor = *p_num;
        }
        aux++;
    }
    printf("Programa encerrado. O menor número digitado foi: [%p] %d.\n",p_menor,*p_menor);
}
