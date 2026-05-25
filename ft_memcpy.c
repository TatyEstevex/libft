/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alm@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:43:13 by tde-alme          #+#    #+#             */
/*   Updated: 2026/05/11 11:28:37 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
/*
int main(void)
{
    const unsigned char src [20] = "olhamesta";
    unsigned char dest [20];
    
    ft_memcpy(dest, src, 6);
    dest [6] = '\0';

    printf("%s \n", dest);
    return (0);
}
*/