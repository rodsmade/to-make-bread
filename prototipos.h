#ifndef PROTOTIPOS_H
# define PROTOTIPOS_H

enum e_tipos_de_pao {
    PAO_DE_LEITE,
    PAO_AUSTRALIANO,
    PAO_DE_BATATA
};

enum e_sistema_de_medidas {
    INTERNACIONAL,
    IMPERIAL
};

char *gerar_receita(int opcoes[3]);
char **pegar_instrucoes_do_pao_australiano(void);
char **pegar_instrucoes_do_pao_de_leite(void);
char **pegar_instrucoes_do_pao_de_batata(void);

# endif