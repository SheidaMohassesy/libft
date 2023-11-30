#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	l;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	s = 0;
	while (s1[s] && ft_strchr(set, s1[s]))
	{
		s++;
	}
	l = ft_strlen(s1 + s);
	while (ft_strchr(set, s1[s + l]))
	{
		l--;
	}
	res = ft_substr(s1, s, l + 1);
	if (!res)
		return (NULL);
	return (res);
}
