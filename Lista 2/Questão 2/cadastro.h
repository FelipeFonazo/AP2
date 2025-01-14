#ifndef CADASTRO_H
#define CADASTRO_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Cadastro {
    char nome[50];
    int matricula;
    float media;
};

struct Cadastro cad;

int cadastro(char *nome, int *matricula, float *media);

#endif