#include <stdio.h>

#include "prototipos.h"

int main() {
    // int tipo_de_pao;
    // int quantidade_de_pessoas;
    // int sistema_de_medidas;
    // int opcoes_escolhidas[3];
    // char *receita_em_texto = "";

    // printf("Qual tipo de pão você deseja fazer?\n1 - Pão de Forma\n2 - Pão Australiano\n3 - Pão de Batata\nEscolha: ");
    // scanf("%d", &tipo_de_pao);
    // opcoes_escolhidas[0] = tipo_de_pao;

    // printf("\nPara quantas pessoas você deseja cozinhar?\nEscolha: ");
    // scanf("%d", &quantidade_de_pessoas);
    // opcoes_escolhidas[1] = quantidade_de_pessoas;

    // printf("\nVocê prefere uma receita escrita em gramas e litros, ou em onças e copos?\n1 - Gramas e litros\n2 - Onças e copos\nEscolha: ");
    // scanf("%d", &sistema_de_medidas);
    // opcoes_escolhidas[2] = sistema_de_medidas;

    // // receita_em_texto = gerar_receita(opcoes_escolhidas);
    // printf("\nTá aqui sua receita:\n%s", receita_em_texto);

    char **instrucoes = pegar_instrucoes_do_pao_de_leite();

    for (int i = 0; i < 6; i++)
        printf("%s\n", instrucoes[i]);

    return (0);
}