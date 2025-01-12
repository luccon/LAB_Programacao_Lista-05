#include <stdio.h>

#define TAM 100

int stringTAM(char*);

int main(){ 
    char string[TAM];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') {
            string[i] = '\0';
            break;
        }
    }

    int tamanho = stringTAM(string);
    printf("O tamanho da string é: %d\n", tamanho);
}

int stringTAM(char *str) {
    char *ptr = str; 
    while (*ptr != '\0') { 
        ptr++;
    }
    return ptr - str;
}