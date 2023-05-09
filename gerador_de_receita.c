

char *gerar_receita(int opcoes[3]) {
    char *receita_em_texto = "";

    pegar_ingredientes(opcoes[0]);
    calcular_quantidades(opcoes[1]);
    converter_para_sistema_de_medidas(opcoes[3]);
};