#include "prototipos.h"

static char *converter_ingredientes_para_string(int tipo_de_pao, int qtd_pessoas) {
    int             i = -1;
    int             qtd_ingredientes;
    char            *ingredientes_em_string = strdup("");
    t_ingrediente   *ingredientes;

    ingredientes_em_string = ft_strjoin(ingredientes_em_string, strdup("INGREDIENTES:\n"));
    ingredientes = pegar_ingredientes(tipo_de_pao, &qtd_ingredientes);
    while (++i < qtd_ingredientes) {
        ingredientes_em_string = ft_strjoin(ingredientes_em_string, ingrediente_para_string(ingredientes[i], qtd_pessoas));
        ingredientes_em_string = ft_strjoin(ingredientes_em_string, strdup("\n"));
    }
    ingredientes_em_string = ft_strjoin(ingredientes_em_string, strdup("\n"));

    return (ingredientes_em_string);
}

static char *converter_instrucoes_para_string(int tipo_de_pao) {
    int     i = -1;
    int     qtd_instrucoes;
    char    *instrucoes_em_string = strdup("");
    char    **instrucoes;

    instrucoes_em_string = ft_strjoin(instrucoes_em_string, strdup("INSTRUÇÕES:\n"));
    instrucoes = pegar_instrucoes(tipo_de_pao, &qtd_instrucoes);
    while (++i < qtd_instrucoes) {
        instrucoes_em_string = ft_strjoin(instrucoes_em_string, instrucoes[i]);
        instrucoes_em_string = ft_strjoin(instrucoes_em_string, strdup("\n"));
    }
    instrucoes_em_string = ft_strjoin(instrucoes_em_string, strdup("\n"));

    return (instrucoes_em_string);
}

char *gerar_receita(int opcoes[2]) {
    int             tipo_de_pao = opcoes[0];
    int             qtd_pessoas = opcoes[1];
    char            *receita_em_texto = strdup("");

    receita_em_texto = ft_strjoin(receita_em_texto, converter_ingredientes_para_string(tipo_de_pao, qtd_pessoas));
    receita_em_texto = ft_strjoin(receita_em_texto, converter_instrucoes_para_string(tipo_de_pao));
    return (receita_em_texto);
};