// mochila.h
#ifndef MOCHILA_H
#define MOCHILA_H

#include "pokedex.h"

#define MAX_POKEMONS_MOCHILA 6

typedef struct {
    int pokemons[MAX_POKEMONS_MOCHILA];
    int quantidadeAtual;
} Mochila;

void inicializarMochila(Mochila *mochila);
void adicionarPokemonMochila(Mochila *mochila, int numeroPokemon);

#endif // MOCHILA_H
