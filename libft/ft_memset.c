/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:50:16 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/21 12:51:28 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *p;

    p = (unsigned char *) s;
    while(n > 0)
    {
        *p = (unsigned char) c;
        n--;
        p++;
    }
    return (s);
}
int	main(void)
{
	char str[20] = "Coisinhas";
	
	ft_memset(str, 'A', 6);
	printf("%s \n", str);
	return (0);
}