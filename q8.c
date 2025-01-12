#include <stdio.h>

#define TAM 100

void BuscaCaracter(char*, char*);

int main () {
    char string[TAM], carac;
    char *p_string = string, *p_carac = &carac;

    printf("Digite a string:\n");
    fgets(string, sizeof(string),stdin);
    for(int i = 0; *(p_string+i)!= '\0'; i++ ){
        if(*(p_string+i) == '\n'){
            *(p_string+i) = '\0';
            break;
        }
    }
    printf("Digite o caracter para busca:\n");
    scanf(" %c",&carac);
    BuscaCaracter(p_string,p_carac);
}

void BuscaCaracter(char *string, char *p_caracter){
    int cnt = 0;
    char *vaux[TAM];
    while(*string != '\0'){
        if(*string == *p_caracter){
            *(vaux+cnt) = string;
            cnt++;
        }
        string++;
    }
    printf("O caracter %c foi encontrado %d vezes na string:\n",*p_caracter,cnt);
    for(int j = 0; j < cnt; j++){
        printf("[%p] %c\n",vaux+j,*vaux[j]);
    }
}