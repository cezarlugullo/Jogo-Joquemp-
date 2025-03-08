#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhajogador, escolhaComputador;
    char continuar;

    srand(time(0));

    do {
        printf("Jogo de Joquempô\n");
        printf("Escolha uma opção:\n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n");
        printf("Escolha:");
        scanf("%d", &escolhajogador);

        if (escolhajogador < 1 || escolhajogador > 3) {
            printf("Opção inválida\n");
            continue; // Volta ao início do loop
        }

        escolhaComputador = rand() % 3 + 1;

        switch (escolhajogador)
        {
        case 1:
            printf("Jogador: Pedra\n");
            break;
        case 2: 
            printf("Jogador: Papel\n");
            break;
        case 3:
            printf("Jogador: Tesoura\n");
            break;
        }

        switch (escolhaComputador)
        {
        case 1:
            printf("Computador: Pedra\n");
            break;
        case 2: 
            printf("Computador: Papel\n");
            break;
        case 3:
            printf("Computador: Tesoura\n");
            break;
        }

        if(escolhaComputador == escolhajogador) {
            printf("Empate\n");
        } else if((escolhaComputador == 1 && escolhajogador == 3) || (escolhaComputador == 2 && escolhajogador == 1) || (escolhaComputador == 3 && escolhajogador == 2)) {
            printf("Computador venceu\n");
        } else {
            printf("Jogador venceu\n");
        }

        printf("Digite 's' para sair ou qualquer outra tecla para continuar: ");
        scanf(" %c", &continuar);
    } while(continuar != 's' && continuar != 'S');

    printf("Saindo do jogo...\n");
    return 0;
}