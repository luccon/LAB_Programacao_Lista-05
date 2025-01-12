#include <stdio.h>

#define TAM 100

void ConcatenaStrings(char*, char*, int, int);

int main(){ 
    char string[TAM];
    int stringT = 0;
    char string2[TAM];
    int string2T = 0;

    printf("Digite a primeira string:");
    fgets(string, sizeof(string), stdin);
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') {
            string[i] = '\0';
            break;
        }
        stringT++;
    }
    printf("Digite a segunda string:");
    fgets(string2, sizeof(string2), stdin);
    for (int i = 0; string2[i] != '\0'; i++) {
        if (string2[i] == '\n') {
            string2[i] = '\0';
            break;
        }
        string2T++;
    }

    ConcatenaStrings(string,string2,stringT,string2T);

    printf("String concatenada: %s\n",string);
}

void ConcatenaStrings(char *str1, char *str2, int T1,int T2) {
    for(int i = 0; i < T2; i++){
        *(str1+T1+i) = *(str2+i);
    }
    *(str1+T1+T2) = '\0';
}