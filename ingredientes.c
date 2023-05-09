#include "prototipos.h"

t_ingrediente   *pegar_ingredientes(const int tipo_de_pao, int *quantidade_de_ingredientes) {
    t_ingrediente   *ingredientes;

    switch (tipo_de_pao)
    {
    case PAO_DE_LEITE:
        *quantidade_de_ingredientes = 8;
        ingredientes = (t_ingrediente *) malloc(*quantidade_de_ingredientes * sizeof(t_ingrediente));
        ingredientes[0] = (t_ingrediente) {.quantidade = 1.0, .unidade = strdup("colher de sopa"), .ingrediente = strdup("fermento para pão")};
        ingredientes[1] = (t_ingrediente) {.quantidade = 1.0, .unidade = strdup("kg"), .ingrediente = strdup("farinha de trigo")};
        ingredientes[2] = (t_ingrediente) {.quantidade = 3.0, .unidade = strdup("copo"), .ingrediente = strdup("leite morno")};
        ingredientes[3] = (t_ingrediente) {.quantidade = 0.5, .unidade = strdup("colher de chá"), .ingrediente = strdup("sal")};
        ingredientes[4] = (t_ingrediente) {.quantidade = 8.0, .unidade = strdup("colher de chá"), .ingrediente = strdup("açúcar")};
        ingredientes[5] = (t_ingrediente) {.quantidade = 0.5, .unidade = strdup("copo"), .ingrediente = strdup("óleo")};
        ingredientes[6] = (t_ingrediente) {.quantidade = 3.0, .unidade = strdup("unidade"), .ingrediente = strdup("ovos")};
        ingredientes[7] = (t_ingrediente) {.quantidade = 1.0, .unidade = strdup("colher de sopa"), .ingrediente = strdup("margarina")};
        break;
    case PAO_AUSTRALIANO:
        *quantidade_de_ingredientes = 10;
        ingredientes = (t_ingrediente *) malloc(*quantidade_de_ingredientes * sizeof(t_ingrediente));
        ingredientes[0] = (t_ingrediente) {.quantidade = 3.0, .unidade = strdup("xícara"), .ingrediente = strdup("água morna")};
        ingredientes[1] = (t_ingrediente) {.quantidade = 0.5, .unidade = strdup("xícara"), .ingrediente = strdup("mel")};
        ingredientes[2] = (t_ingrediente) {.quantidade = 2.0, .unidade = strdup("xícara"), .ingrediente = strdup("farinha de trigo integral")};
        ingredientes[3] = (t_ingrediente) {.quantidade = 4.0, .unidade = strdup("colher de sopa"), .ingrediente = strdup("chocolate em pó")};
        ingredientes[4] = (t_ingrediente) {.quantidade = 1.0, .unidade = strdup("colher de chá"), .ingrediente = strdup("sal")};
        ingredientes[5] = (t_ingrediente) {.quantidade = 4.0, .unidade = strdup("colher de sopa"), .ingrediente = strdup("manteiga")};
        ingredientes[6] = (t_ingrediente) {.quantidade = 4.0, .unidade = strdup("xícara"), .ingrediente = strdup("farinha de trigo")};
        ingredientes[7] = (t_ingrediente) {.quantidade = 2.0, .unidade = strdup("xícara"), .ingrediente = strdup("farinha de centeio")};
        ingredientes[8] = (t_ingrediente) {.quantidade = 20.0, .unidade = strdup("g"), .ingrediente = strdup("fermento biológico seco")};
        ingredientes[9] = (t_ingrediente) {.quantidade = 0.0, .unidade = strdup(""), .ingrediente = strdup("Fubá fina para polvilhar")};
        break;
    case PAO_DE_BATATA:
        *quantidade_de_ingredientes = 9;
        ingredientes = (t_ingrediente *) malloc(*quantidade_de_ingredientes * sizeof(t_ingrediente));
        ingredientes[0] = (t_ingrediente) {.quantidade = 2.0, .unidade = strdup("unidade"), .ingrediente = strdup("ovo")};
        ingredientes[1] = (t_ingrediente) {.quantidade = 2.0, .unidade = strdup("unidade"), .ingrediente = strdup("batatas grandes")};
        ingredientes[2] = (t_ingrediente) {.quantidade = 30.0, .unidade = strdup("g"), .ingrediente = strdup("fermento")};
        ingredientes[3] = (t_ingrediente) {.quantidade = 2.0, .unidade = strdup("colher de sobremesa"), .ingrediente = strdup("óleo")};
        ingredientes[4] = (t_ingrediente) {.quantidade = 1.0, .unidade = strdup("colher de sopa"), .ingrediente = strdup("margarina")};
        ingredientes[5] = (t_ingrediente) {.quantidade = 0.5, .unidade = strdup("colher de sobremesa"), .ingrediente = strdup("sal")};
        ingredientes[6] = (t_ingrediente) {.quantidade = 0.5, .unidade = strdup("copo"), .ingrediente = strdup("leite")};
        ingredientes[7] = (t_ingrediente) {.quantidade = 0.5, .unidade = strdup("xícara"), .ingrediente = strdup("açúcar")};
        ingredientes[8] = (t_ingrediente) {.quantidade = 700.0, .unidade = strdup("g"), .ingrediente = strdup("farinha de trigo (colocar até não grudar as mãos)")};
        break;
    
    default:
        break;
    }

    return (ingredientes);
}
