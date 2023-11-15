#include <stdio.h>
#include <stdlib.h>
#include "lerarq.h"
#include "pokemon.h"
#include "colecao.h"
#include "mochila.h"
#include "pokedex.h"

int main() {
    Pokedex *dex = NULL;
    Mochila mochila;
    Colecao colecao;

    int quantidadePokemon = 0;
    recebeArquivodados(&dex, &quantidadePokemon);

    inicializaMochila(&mochila);
    inicializaColecao(&colecao);

    int escolha;
    do {
        exibeMenu();
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                capturarPokemon(&mochila, &colecao, dex, quantidadePokemon);
                break;
            case 2:
                listarPokemonMochila(&mochila);
                break;
            case 3:
                listarPokemonColecao(dex, &colecao);
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 4);

    // Liberar a memória alocada para a Pokedex
    liberaMemoria(dex);

    // Liberar a memória alocada para a coleção
    liberaColecao(&colecao);

    return 0;
}
