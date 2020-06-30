#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    char sair = 0;
    char *memoria = NULL;
    char texto[80];
    char texto2[80];
    printf("Digite alguma coisa: ");
    scanf("%79s", &texto);
    memoria = malloc(sizeof(texto)+1);
    strcpy(memoria, texto);

    printf("Conteudo: %s \n", memoria);

    char *maismemoria = NULL;
    while(sair == 0) {
        printf("Digite outra palavra: ");
        scanf("%79s", &texto2);
        if(strcmp(texto2, "sair")== 0)
            exit(1);
        maismemoria = realloc(memoria, sizeof(texto)+sizeof(texto2)+1);
        memoria = maismemoria;
        strcat(memoria,texto2);
        printf("Conteudo: %s \n", memoria);
    }

    return 0;
}
