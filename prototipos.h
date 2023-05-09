#ifndef PROTOTIPOS_H
# define PROTOTIPOS_H

# include <stdlib.h> // malloc
# include <string.h> // strdup

# include "t_ingrediente.h"
# include "libft.h"

enum e_tipos_de_pao {
    PAO_DE_LEITE,
    PAO_AUSTRALIANO,
    PAO_DE_BATATA
};

enum e_sistema_de_medidas {
    INTERNACIONAL,
    IMPERIAL
};

char *gerar_receita(int opcoes[2]);
char            **pegar_instrucoes(const int tipo_de_pao, int *quantidade_de_instrucoes);
t_ingrediente   *pegar_ingredientes(const int tipo_de_pao, int *quantidade_de_ingredientes);


# endif