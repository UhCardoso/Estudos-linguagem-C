#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int finalizarPrograma(int run);
int main() {
    setlocale(LC_ALL,"");
    char palavra[50];
    char cripty[50];
    int opcao = 0;
    int run = 1;

    while(run == 1) {
        printf("-------------------------------- \n");
        printf("|Qual servico vc quer iniciar? | \n");
        printf("|[1] - encriptar               | \n");
        printf("|[2] - desencriptar            | \n");
        printf("|[3] - sair                    | \n");
        printf("-------------------------------- \n");
        scanf("%d", &opcao);
        system("cls");

        if(opcao == 1) {
            //encriptar
            printf("Digite a palavrar que você quer encriptar: ");
            scanf("%49s", &palavra);
            system("cls");

            printf("Palavra gerada: ");
            for(int i = 0; i <= 49; i++) {
                if(palavra[i] == 0)
                    break;
                cripty[i] = palavra[i] + 3;
                printf("%c", cripty[i]);
            }

            run = finalizarPrograma(run);

        } else if(opcao == 2) {
            //desencriptar
            printf("Digite a palavra encriptada: ");
            scanf("%49s", cripty);
            system("cls");

            printf("Palavra origem: ");
            for(int i = 0; i<49; i++) {
                if(cripty[i] == 0)
                    break;
                palavra[i] = cripty[i] - 3;
                printf("%c", palavra[i]);
            }

            run = finalizarPrograma(run);

        } else if(opcao == 3) {
            //finalizar programa
            run = 0;

        } else {
            //mensagem erro e reiniciar programa
            system("cls");
            printf("!!Opcao inválida \n");
            run = 1;
        }
    }
    return 0;
}

int finalizarPrograma(int run) {
    int opcao2 = 0;

    printf("\n Voce quer reiniciar o programa? [1]-sim [2]-não ");
    scanf("%d", &opcao2);

    if(opcao2 == 2) {
        run = 0;
    } else {
        run = 1;
    }
    system("cls");

    return (run);
}
