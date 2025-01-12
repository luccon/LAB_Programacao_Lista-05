#include <stdio.h>

#define TAM 100

void CopiaString(char*, char*);

int main(){ 
    char string[TAM];
    char string2[TAM];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') {
            string[i] = '\0';
            break;
        }
    }

    CopiaString(string,string2);

    printf("Primeira string: %s\n",string);
    printf("Segunda string: %s\n",string2);
}

void CopiaString(char *str1, char *str2) {
    while (*str1 != '\0') { 
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';
}