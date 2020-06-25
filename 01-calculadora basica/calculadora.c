#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int finalizarPrograma(int run);
int main() {
    setlocale(LC_ALL,"");
    int run = 1;
    while(run == 1) {
        int opcao = 0;
        int num1 = 0;
        int num2 = 0;
        int resultado = 0;

        printf("-----------------------\n");
        printf("|selecione a operação:|\n");
        printf("|[1] - soma           |\n");
        printf("|[2] - subtração      |\n");
        printf("|[3] - multiplicação  |\n");
        printf("|[4] - divisão        |\n");
        printf("|[5] - modulo         |\n");
        printf("|[6] - sair           |\n");
        printf("-----------------------\n");
        scanf("%d", &opcao);
        system("cls");

        if(opcao == 1) {
            //soma
            printf("Digite o primeiro número: ");
            scanf("%d", &num1);
            printf("Digite o segundo número: ");
            scanf("%d", &num2);
            resultado = num1 + num2;

            system("cls");
            printf("A soma de %d mais %d é: %d \n", num1, num2, resultado);

            run = finalizarPrograma(run);

        } else if(opcao == 2) {
            //subtracao
            printf("Digite o primeiro número: ");
            scanf("%d", &num1);
            printf("Digite o segundo número: ");
            scanf("%d", &num2);
            resultado = num1 - num2;

            system("cls");
            printf("A diferenca entre %d e %d é: %d \n", num1, num2, resultado);

            run = finalizarPrograma(run);

        } else if(opcao == 3) {
            //multiplicacao
            printf("Digite o número a ser multiplicado: ");
            scanf("%d", &num1);
            printf("Digite o número de vezes que ele será multiplicado: ");
            scanf("%d", &num2);
            resultado = num1 * num2;

            system("cls");
            printf("%d vezes %d é: %d \n", num1, num2, resultado);

            run = finalizarPrograma(run);

        } else if(opcao == 4) {
            //divisao
            printf("Digite o número a ser dividido: ");
            scanf("%d", &num1);
            printf("Digite o número de vezes em que ele será dividido: ");
            scanf("%d", &num2);
            resultado = num1 / num2;

            system("cls");
            printf("%d dividido por %d é: %d \n", num1, num2, resultado);

            run = finalizarPrograma(run);

        } else if(opcao == 5) {
            //modulo
            printf("Digite o número a ser dividido: ");
            scanf("%d", &num1);
            printf("Digite o número de vezes em que ele será dividido: ");
            scanf("%d", &num2);
            resultado = num1 % num2;

            system("cls");
            printf("%d dividido por %d da resto: %d \n", num1, num2, resultado);

            run = finalizarPrograma(run);

        } else if (opcao == 6) {
            //encerrar programa
            run = 0;
        } else {
            //mensagem erro e reiniciar programa
            system("cls");
            printf("!!Opcao inválida. \n");
            run = 1;
        }
    }

    return 0;
}

int finalizarPrograma(int run) {
    int opcao2 = 0;
    printf("Deseja reiniciar o programa [1]-sim [2]-não?");
    scanf("%d", &opcao2);
    if(opcao2 == 1) {
        run = 1;
    } else {
        run = 0;
    }
    system("cls");

    return (run);
}
