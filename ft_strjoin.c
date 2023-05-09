#include "libft.h"

/**
 * @brief Allocates memory (with malloc(3)) for a new string that is the result
 * of concatenating a prefix string 's1' with a suffix string 's2'.
 * 
 * @param s1 A prefix string
 * @param s2 A suffix string
 * @return char* A malloc'd string containing the resulting joined strings.
 */
char	*ft_strjoin(char *s1, char *s2)
{
	char	*joint;
	int		i;
	int		length_s1;
	int		length_s2;

	length_s1 = strlen(s1);
	length_s2 = strlen(s2);
	joint = malloc((length_s1 + length_s2 + 1) * sizeof(char));
	if (joint == NULL || s1 == NULL || s2 == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		joint[i] = s1[i];
	i = -1;
	while (s2[++i])
		joint[i + length_s1] = s2[i];
	joint[length_s1 + length_s2] = '\0';
	ft_free_ptr((void *) &s1);
	ft_free_ptr((void *) &s2);
	return (joint);
}

