/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alm@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 15:25:07 by tde-alme          #+#    #+#             */
/*   Updated: 2026/05/08 15:57:32 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	mudaste(unsigned int t, char *c)
{
	*c = *c + t;
}
/*
int	main(void)
{
	char s[] = "abcd";

	ft_striteri(s, mudaste);
	printf("%s\n", s);
	return (0);
}
*/