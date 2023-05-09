#include "prototipos.h"

char **pegar_instrucoes(const int tipo_de_pao, int *quantidade_de_instrucoes) {
    char    **instrucoes;

    switch (tipo_de_pao)
    {
    case PAO_DE_LEITE:
        *quantidade_de_instrucoes = 7;
        instrucoes = (char **) malloc(*quantidade_de_instrucoes * sizeof(char *));
        instrucoes[0] = strdup("1 - Em uma superfície plana, preferencialmente de mármore ou granito, despeje as farinhas (trigo, trigo integral e centeio), o chocolate, o sal e o açúcar mascavo - eu misturo esses ingredientes numa bacia e só depois despejo na bancada.");
        instrucoes[1] = strdup("2 - Abra um buraco no meio (como se fosse um vulcão) e acrescente um pouco de água morna. Misture e vá repetindo o processo até a água acabar - às vezes sobra água. Ao final, misture a margarina, o mel e o fermento. O processo gera uma massa uniforme e macia (mais para mole). Deixe descansar por uma hora em temperatura de cerca de 35ºC. Eu costumo deixar a massa na bancada em que eu sovei e cubro com uma bacia grande por uma hora, até mesmo porque vou utilizar esse mesmo espaço para enrolar os pães.");
        instrucoes[2] = strdup("3 - Transcorrido o descanso de uma hora, modele os pães conforme desejado.");
        instrucoes[3] = strdup("4 - Para a massa não grudar na bancada (nem no rolo), é necessário que polvilhe fubá sobre a bancada antes de abrir a massa e sobre a massa ao abrir com o rolo - repetir o procedimento a cada modelagem. Pode ser dividida em quatro partes e assada em formas de pão ou em porções menores, como na foto - essa receita rende 15 pães de cerca de 20cm por 5cm");
        instrucoes[4] = strdup("5 - Após enrolados, coloque-os em duas assadeiras untadas, cubra com um pano e deixe descansar por cerca de 1 hora.");
        instrucoes[5] = strdup("6 - Pré-aqueça o forno a 180ºC (fogo baixo). Leve os pães crescidos para o forno e deixe assar até dourar (cerca de 35/40 minutos). Tire do forno e deixe esfriar por 15 minutos. Sirva com manteiga, margarina, requeijão cremoso, cream cheese, mel ou mesmo puro - mais saudável e menos calórico.");
        instrucoes[6] = strdup("7 - Vale lembrar que a massa descansa uma hora antes de enrolar e mais uma hora depois de modelados os pãezinhos. Lembrando, ainda, que os pães crescem mais um pouco ao assarem.");
        break;
    case PAO_AUSTRALIANO:
        *quantidade_de_instrucoes = 6;
        instrucoes = (char **) malloc(*quantidade_de_instrucoes * sizeof(char *));
        instrucoes[0] = strdup("1 - Dissolva o fermento no leite, bata todos os líquidos no liquidificador e despeje na farinha.");
        instrucoes[1] = strdup("2 - Amasse bem até soltar da vasilha e das mãos.");
        instrucoes[2] = strdup("3 - Deixar descansar por uma hora.");
        instrucoes[3] = strdup("4 - Abra a massa na mesa com um pouco de farinha e corta com um copo.");
        instrucoes[4] = strdup("5 - Enrolar e deixar crescer até dobrar de volume.");
        instrucoes[5] = strdup("6 - Assar em forno médio, pré-aquecido.");
        break;
    case PAO_DE_BATATA:
        *quantidade_de_instrucoes = 4;
        instrucoes = (char **) malloc(*quantidade_de_instrucoes * sizeof(char *));
        instrucoes[0] = strdup("1 - Bata todos os ingredientes no liquidificador (menos a farinha).");
        instrucoes[1] = strdup("2 - Acrescente farinha e misture em uma vasilha até não grudar nas mãos.");
        instrucoes[2] = strdup("3 - Faça pequenas bolinhas e deixe descansar por 30 minutos embaixo de uma lâmpada acesa.");
        instrucoes[3] = strdup("4 - Leve ao forno médio por 30 a 40 minutos.");
        break;
    default:
        break;
    }

    return (instrucoes);
}
