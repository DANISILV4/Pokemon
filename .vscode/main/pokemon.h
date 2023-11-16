// pokemon.h
#include <stdio.h>
#include <stdlib.h>

#ifndef POKEMON_H
#define POKEMON_H

typedef struct {
    int numero;
    char nome[30];
    char tipo1[15];
    char tipo2[15];
    int total;
    float hp;
    int ataque;
    int defesa;
    int ataque_especial;
    int defesa_especial;
    int velocidade;
    int geracao;
    int lendario;
    char cor[15];
    float altura;
    float peso;
    int taxa_captura;
    int proxima_evolucao;
    int pre_evolucao;
} Pokemon;
void exibirPokemon(Pokemon *p);
#endif  // POKEMON_H
