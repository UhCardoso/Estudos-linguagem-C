#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL,"");
    char string[80];
    int espacos = 0;

    printf("Digite algo: ");
    fgets(string, 80, stdin);

    for(int i = 0; i <strlen(string); i++) {
        if(string[i] == 0x20) {
            espacos += 1;
        }
    }

    printf("O numero de caracteres digitado é: %ld\n", strlen(string)-1-espacos);

    return 0;
}
