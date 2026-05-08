/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: tde-alme <tde-alm@student.42porto.com>     +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2026/04/25 16:48:48 by tde-alme          #+#    #+#             */
/*   Updated: 2026/05/08 15:52:21 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (i < (n - 1))
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	const char *s1 = "primeiro";
	const char *s2 = "prima";
	size_t n;
	int res;

	n = 5;
	res = strncmp(s1, s2, n);
	printf("%d", res);
	return(0);
}
*/