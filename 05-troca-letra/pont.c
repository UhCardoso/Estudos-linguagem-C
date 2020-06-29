#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char * trocaletra(char *str, char letravelha, char letranova);
void preenchezero(char *str, unsigned int num);
int main() {
    int run = 1;
    int opcao = 1;
    setlocale(LC_ALL,"");
    char string[100];
    char letravelha, letranova;

    while(run == 1) {
        printf("Digite uma frase: ");
        fgets(string, 100, stdin);

        printf("Qual letra será substituida? ");
        letravelha = getchar();
        getchar();

        printf("Qual a será a nova letra? ");
        letranova = getchar();

        printf("A frase digitada foi: %s", string);
        printf("A nova frase é: %s", trocaletra(string, letravelha, letranova));

        printf("Deseja reiniciar p programa? [1]-sim [2]-não");
        scanf("%d",&opcao);
        system("cls");

        if(opcao == 1) {
            run = 1;
        } else {
            run = 0;
        }
    }

    return 0;
}

void preenchezero(char *str, unsigned int num) {
    unsigned int i;
    for(i = 0; i<num; i++) {
        *str = '\0';
        str++;
    }
}

char * trocaletra(char *str, char letravelha, char letranova) {
    char *inicio = str;
    while(*str != '\0') {
        if(*str == letravelha)
            *str = letranova;
        str++;
    }
    return inicio;
}
