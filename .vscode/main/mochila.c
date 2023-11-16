#include <stdio.h>
#include <string.h>
#include "mochila.h"
#include "pokemon.h"


// Função auxiliar para verificar se um número de Pokémon é válido
int numeroPokemonValido(int numeroPokemon, Pokedex *pokedex) {
    return (numeroPokemon >= 1 && numeroPokemon <= pokedex->quantidade);
}
void inicializarMochila(Mochila *mochila) {
    // Inicialize a mochila conforme necessário
    mochila->quantidadeAtual = 0;
}

void adicionarPokemonMochila(Mochila *mochila, int numeroPokemon) {
    // Adicione o número do Pokémon à mochila se houver espaço
    if (mochila->quantidadeAtual < MAX_POKEMONS_MOCHILA) {
        mochila->pokemons[mochila->quantidadeAtual++] = numeroPokemon;
        printf("Pokemon adicionado à mochila!\n");
    } else {
        printf("Mochila cheia! Não é possível adicionar mais pokemons.\n");
    }
}
