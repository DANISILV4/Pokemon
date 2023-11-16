#include <stdio.h>
#include <stdlib.h>
#include "menuMochila.h"



void exibirSubMenuMochila(Mochila *mochila, Pokedex *pokedex) {
    int escolhaSubMenu;
    do {
        printf("\n----- Submenu Mochila -----\n");
        printf("1. listarPokemons na Mochila\n");
        printf("2. Voltando ao menu principal\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolhaSubMenu);

        switch (escolhaSubMenu) {
            case 1:
                listarPokemonMochila(mochila);
                  break;
            case 2:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolhaSubMenu != 2);
}