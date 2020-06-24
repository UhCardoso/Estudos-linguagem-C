#include <stdio.h>
#include <stdlib.h>

int main() {
    char palavra[50];
    char cripty[50];
    int opcao = 0;
    int run = 1;
    int opcao2 = 1;

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
            printf("Digite a palavrar que voce quer encriptar: ");
            scanf("%49s", &palavra);
            system("cls");

            printf("Palavra gerada: ");
            for(int i = 0; i <= 49; i++) {
                if(palavra[i] == 0)
                    break;
                cripty[i] = palavra[i] + 3;
                printf("%c", cripty[i]);
            }

            printf("\n Voce quer reiniciar o programa? [1]-sim [2]-nao ");
            scanf("%d", &opcao2);

            if(opcao2 == 2) {
                run = 0;
            } else {
                run = 1;
            }
            system("cls");

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

            printf("\n Voce quer reiniciar o programa? [1]-sim [2]-nao ");
            scanf("%d", &opcao2);

            if(opcao2 == 2) {
                run = 0;
            } else {
                run = 1;
            }
            system("cls");

        } else if(opcao == 3) {
            //finalizar programa
            run = 0;

        } else {
            //mensagem erro e reiniciar programa
            system("cls");
            printf("!!Opcao invalida \n");
            run = 1;
        }
    }
    return 0;
}
