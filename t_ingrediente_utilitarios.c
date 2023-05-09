#include "t_ingrediente.h"
#include "libft.h"

char *ingrediente_para_string(t_ingrediente ingrediente, int qtd_pessoas) {
    char    *ingrediente_em_string = strdup("");
    char    quantidade_em_string[20];

    sprintf(quantidade_em_string, "%.1f", ingrediente.quantidade * ((qtd_pessoas + 4) / 4));
    ingrediente_em_string = ft_strjoin(ingrediente_em_string, strdup(quantidade_em_string));
    ingrediente_em_string = ft_strjoin(ingrediente_em_string, strdup(" "));
    ingrediente_em_string = ft_strjoin(ingrediente_em_string, ingrediente.unidade);
    ingrediente_em_string = ft_strjoin(ingrediente_em_string, strdup(" de "));
    ingrediente_em_string = ft_strjoin(ingrediente_em_string, ingrediente.ingrediente);

    return (ingrediente_em_string);
}