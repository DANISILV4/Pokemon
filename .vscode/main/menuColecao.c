#include <stdio.h>
#include <stdlib.h>
#include "menuColecao.h"


void exibirSubMenuColecao(Colecao *colecao) {
    int escolha;
    do {
        exibeMenuColecao();
        printf("Escolha uma opção para a Coleção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                adicionarPokemonColecao(colecao);
                break;
            case 2:
                listarPokemonColecao(colecao);
                break;
            
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 0);
}