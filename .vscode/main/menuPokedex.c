#include <stdio.h>
#include <stdlib.h>
#include "menuPokedex.h"



void exibirSubMenuPokedex(Pokedex *pokedex) {
    int escolha;
    do {
        exibeMenuPokedex();
        printf("Escolha uma opção para a Pokédex: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                listarTodosPokemons(pokedex);
                break;
            // Adicione mais opções conforme necessário
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 0);
}