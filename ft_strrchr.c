/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:10:30 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/25 16:47:41 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
    int		i;
	char	n;

	i = 0;
	while (s[i] != '\0')
		i++;
	n = (char) c; //Typecast
	while (i >= 0)
	{
		if (s[i] == n)
			return ((char *) (s + i));
		i--;
	}
	return (NULL);
}

int	main(void)
{
	const char *s = "de trás para a frente";
	char *res;

	res = ft_strrchr(s, 'b');
	if (res == NULL)
		printf("Já fosteis");
	else
		printf("%s", res);
	return(0);
}