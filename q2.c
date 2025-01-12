#include <stdio.h>

int main(){
    int num1, num2;
    int *p1 = &num1, *p2 = &num2;

    puts("Entre com primeiro número:");
    scanf("%d",&num1);
    puts("Entre com segundo número:");
    scanf("%d",&num2);

    printf("[%p] %d <- primeiro número.\n",p1,*p1);
    printf("[%p] %d <- segundo número.\n",p2,*p2);

    *p1 = *p1 ^ *p2;
    *p2 = *p1 ^ *p2;
    *p1 = *p1 ^ *p2; 

    printf("Após inversão:\n");
    printf("[%p] %d <- primeiro número.\n",p1,*p1);
    printf("[%p] %d <- segundo número.\n",p2,*p2);
}