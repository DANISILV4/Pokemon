#include <stdio.h>
#include <stdlib.h>
#include "lerarq.h"


void recebeArquivodados(Pokemon **dex, int *quantidadePokemon) {
    char linha[500];
    FILE *arq = fopen("dados.csv", "r");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    *quantidadePokemon = 0;

    // Conta quantas linhas existem no arquivo
    while (fgets(linha, sizeof(linha), arq) != NULL) {
        (*quantidadePokemon)++;
    }

    // Volta para o início do arquivo
    rewind(arq);

    // Aloca memória para o vetor de Pokemon
    *dex = (Pokemon *)malloc(sizeof(Pokemon) * (*quantidadePokemon));

    if (*dex == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    int i = 0;
    while (i < *quantidadePokemon && fgets(linha, sizeof(linha), arq) != NULL) {
        sscanf(linha, "%d ,%19[^,] ,%9[^,] ,%9[^,] ,%d ,%d ,%d ,%d ,%d ,%d ,%d ,%d ,%d ,%19[^,] ,%f ,%f ,%d",
               &(*dex)[i].numero, (*dex)[i].nome, (*dex)[i].tipo1, (*dex)[i].tipo2, &(*dex)[i].total,
               &(*dex)[i].hp, &(*dex)[i].ataque, &(*dex)[i].defesa, &(*dex)[i].ataque_especial,
               &(*dex)[i].defesa_especial, &(*dex)[i].velocidade, &(*dex)[i].geracao, &(*dex)[i].lendario,
               (*dex)[i].cor, &(*dex)[i].altura, &(*dex)[i].peso, &(*dex)[i].taxa_captura);

        i++;
    }

    fclose(arq);
}
