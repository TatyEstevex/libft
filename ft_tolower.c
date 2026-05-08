/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: tde-alme <tde-alm@student.42porto.com>     +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2026/04/24 16:13:18 by tde-alme          #+#    #+#             */
/*   Updated: 2026/05/08 15:54:43 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// converte letras de upper to lower caso nao seja letra devolve c
int	ft_tolower(int c)
{
	if ((c >= 65) && (c <= 90))
		c = c + 32;
	return (c);
}
/*
int	main(void)
{
	char c;

	c = 'B';
	printf("%c\n", ft_tolower(c));
	return (0);
}
*/