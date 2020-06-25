#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial(int numero);
int main() {
    setlocale(LC_ALL,"");
    int num = 0;
    int resultado = 0;
    int run = 1;
    int opcao = 1;

    while(run == 1) {
        printf("Digite o n�mero a ser fatorado: ");
        scanf("%d", &num);

        resultado = fatorial(num);

        system("cls");
        printf("O fatorial de %d � igual a: %d \n", num, resultado);

        printf("Voc� deseja reiniciar o programa? [1]-sim [2]-n�o ");
        scanf("%d", &opcao);
        system("cls");
        if(opcao == 1) {
            run = 1;

        } else {
            run = 0;
        }
    }

    return 0;
}

int fatorial(int x) {
    if(x == 0)
        return 1;
    if(x == 1)
        return 1;
    return (x * fatorial(x-1));
}
