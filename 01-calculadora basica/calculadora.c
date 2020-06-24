#include <stdio.h>
#include <stdlib.h>

int main() {
int run = 1;
while(run == 1) {
    int opcao = 0;
    int opcao2 = 0;
    int num1 = 0;
    int num2 = 0;
    int resultado = 0;

    printf("-----------------------\n");
    printf("|selecione a operacao:|\n");
    printf("|[1] - soma           |\n");
    printf("|[2] - subtracao      |\n");
    printf("|[3] - multiplicacao  |\n");
    printf("|[4] - divisao        |\n");
    printf("|[5] - modulo         |\n");
    printf("|[6] - sair           |\n");
    printf("-----------------------\n");
    scanf("%d", &opcao);
    system("cls");

    if(opcao == 1) {
        //soma
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);
        resultado = num1 + num2;

        system("cls");
        printf("A soma de %d mais %d e igual a: %d \n", num1, num2, resultado);
        printf("Deseja reiniciar o programa [1]-sim [2]-nao?");
        scanf("%d", &opcao2);
        if(opcao2 == 1) {
            run = 1;
        } else {
            run = 0;
        }
        system("cls");

    } else if(opcao == 2) {
        //subtracao
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);
        resultado = num1 - num2;

        system("cls");
        printf("A diferenca entre %d e %d e igual a: %d \n", num1, num2, resultado);
        printf("Deseja reiniciar o programa [1]-sim [2]-nao?");
        scanf("%d", &opcao2);
        if(opcao2 == 1) {
            run = 1;
        } else {
            run = 0;
        }
        system("cls");

    } else if(opcao == 3) {
        //multiplicacao
        printf("Digite o numero a ser multiplicado: ");
        scanf("%d", &num1);
        printf("Digite o numero de vezes que ele sera multiplicado: ");
        scanf("%d", &num2);
        resultado = num1 * num2;

        system("cls");
        printf("%d vezes %d e igual a: %d \n", num1, num2, resultado);
        printf("Deseja reiniciar o programa [1]-sim [2]-nao?");
        scanf("%d", &opcao2);
        if(opcao2 == 1) {
            run = 1;
        } else {
            run = 0;
        }
        system("cls");

    } else if(opcao == 4) {
        //divisao
        printf("Digite o numero a ser dividido: ");
        scanf("%d", &num1);
        printf("Digite o numero de vezes em que ele sera dividido: ");
        scanf("%d", &num2);
        resultado = num1 / num2;

        system("cls");
        printf("%d dividido por %d e igual a: %d \n", num1, num2, resultado);
        printf("Deseja reiniciar o programa [1]-sim [2]-nao?");
        scanf("%d", &opcao2);
        if(opcao2 == 1) {
            run = 1;
        } else {
            run = 0;
        }
        system("cls");

    } else if(opcao == 5) {
        //modulo
        printf("Digite o numero a ser dividido: ");
        scanf("%d", &num1);
        printf("Digite o numero de vezes em que ele sera dividido: ");
        scanf("%d", &num2);
        resultado = num1 % num2;

        system("cls");
        printf("%d dividido por %d da resto: %d \n", num1, num2, resultado);
        printf("Deseja reiniciar o programa [1]-sim [2]-nao?");
        scanf("%d", &opcao2);
        if(opcao2 == 1) {
            run = 1;
        } else {
            run = 0;
        }
        system("cls");

    } else if (opcao == 6) {
        //encerrar programa
        run = 0;
    } else {
        //mensagem erro e reiniciar programa
        system("cls");
        printf("!!Opcao invalida. \n");
        run = 1;
    }
}

    return 0;
}
