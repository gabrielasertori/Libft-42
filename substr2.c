#include	"libft.h"
#include	<stdio.h>

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	size_t s_len;
	unsigned int	i;
	char	*copy;
	i = 0;
	s_len = ft_strlen(s);

	if (s_len < start || len < 0)
		return (ft_strdup(""));

	if ((start + len) > s_len || len > s_len)
	{
		copy = ft_calloc((s_len - start + 1), sizeof(char));
		i = ft_strlcpy(copy, s + start, s_len - start + 1);
		copy[s_len - start] = '\0';
		//printf("ft_strlcpy: %u | soma s_len - start + 1: %zu\n", i, s_len - start + 1);
		return (copy);
	}

	copy = malloc((len + 1) * sizeof(char));
	ft_strlcpy(copy, s + start, len + 1);
	copy[len + 1] = '\0';
	return (copy);
}
/*
int	main(void)
{
	char * s = ft_substr("tripouille", 0, 42000);
	printf("%s\n", s);
}
*/
