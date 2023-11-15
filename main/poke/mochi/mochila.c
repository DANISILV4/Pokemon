#include <stdio.h>
#include <string.h>
#include "mochila.h"
#include "pokemon.h"

// Função auxiliar para verificar se um número de Pokémon é válido
int numeroPokemonValido(int numeroPokemon, Pokedex *pokedex) {
    return (numeroPokemon >= 1 && numeroPokemon <= pokedex->quantidade);
}

void listarPokemonsPorGeracao(Mochila *mochila, Pokedex *pokedex, int geracao) {
    printf("\n------ Pokemon na Mochila (Geração %d) ------\n", geracao);
    for (int i = 0; i < mochila->quantidadeAtual; i++) {
        int numeroPokemon = mochila->pokemons[i];
        if (numeroPokemonValido(numeroPokemon, pokedex) &&
            pokedex->pokemons[numeroPokemon - 1].geracao == geracao) {
            // Exibir informações básicas sobre o Pokémon
            printf("Número: %d, Nome: %s\n", numeroPokemon, pokedex->pokemons[numeroPokemon - 1].nome);
        } else {
            printf("Número de Pokémon inválido na mochila: %d\n", numeroPokemon);
        }
    }
    printf("--------------------------------------------\n");
}

void listarPokemonsPorTipo(Mochila *mochila, Pokedex *pokedex, const char *tipo) {
    printf("\n------ Pokemon na Mochila (Tipo %s) ------\n", tipo);
    for (int i = 0; i < mochila->quantidadeAtual; i++) {
        int numeroPokemon = mochila->pokemons[i];
        if (numeroPokemonValido(numeroPokemon, pokedex) &&
            (strcmp(pokedex->pokemons[numeroPokemon - 1].tipo1, tipo) == 0 ||
             strcmp(pokedex->pokemons[numeroPokemon - 1].tipo2, tipo) == 0)) {
            // Exibir informações básicas sobre o Pokémon
            printf("Número: %d, Nome: %s\n", numeroPokemon, pokedex->pokemons[numeroPokemon - 1].nome);
        }
    }
    printf("--------------------------------------------\n");
}
