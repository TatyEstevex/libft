/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alm@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 14:27:52 by tde-alme          #+#    #+#             */
/*   Updated: 2026/05/08 16:05:43 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*nova;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	nova = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (nova == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		nova[i] = f(i, s[i]);
		i++;
	}
	nova[i] = '\0';
	return (nova);
}
/*
char	funcaoteste(unsigned int t, char c)
{
	c = t + c;
	return (c);
}
int	main(void)
{
	char *s = "abcd";
	char *resultado;

	resultado = ft_strmapi(s, &funcaoteste);
	printf("%s\n", resultado);
	return (0);
}
*/