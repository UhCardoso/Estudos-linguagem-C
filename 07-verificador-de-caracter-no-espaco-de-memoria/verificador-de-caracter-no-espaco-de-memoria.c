#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//programa que lê valor digitado pelo o usuario e retorne o local da memoria do valor que ele procura x vezes
int main() {
    setlocale(LC_ALL,"");
    char *memoria = NULL;
    char caracter;
    char texto[80];
    printf("digite algo: ");
    fgets(texto, 80, stdin);

    memoria = malloc(sizeof(texto)+1);

    strcpy(memoria, texto);

    printf("qual caracter voce deseja procurar?");
    caracter = getchar();

    printf("o valor %c está na memoria de endereço: \n", caracter);
    for(int i=0; i<80; i++) {
        if(memchr(memoria, caracter, 1)) {
            printf("%x \n", memchr(memoria, caracter, 1));
        }

        memoria = memoria + 1;
    }

    return 0;
}
