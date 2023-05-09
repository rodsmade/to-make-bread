#include <stdio.h>

#include "prototipos.h"

int main() {
    int tipo_de_pao;
    int quantidade_de_pessoas;
    int opcoes_escolhidas[2];
    char *receita_em_texto = strdup("");

    printf("Qual tipo de pão você deseja fazer?\n1 - Pão de Forma\n2 - Pão Australiano\n3 - Pão de Batata\nEscolha: ");
    scanf("%d", &tipo_de_pao);
    opcoes_escolhidas[0] = tipo_de_pao - 1;

    printf("\nPara quantas pessoas você deseja cozinhar?\nEscolha: ");
    scanf("%d", &quantidade_de_pessoas);
    opcoes_escolhidas[1] = quantidade_de_pessoas;

    receita_em_texto = gerar_receita(opcoes_escolhidas);
    printf("\nTá aqui sua receita de ");
    switch (opcoes_escolhidas[0])
    {
    case PAO_AUSTRALIANO:
        printf("PÃO AUSTRALIANO:\n\n");
        break;
    case PAO_DE_LEITE:
        printf("PÃO DE LEITE:\n\n");
        break;
    case PAO_DE_BATATA:
        printf("PÃO DE BATATA:\n\n");
        break;
    default:
        break;
    }
    printf("%s", receita_em_texto);

    return (0);
}