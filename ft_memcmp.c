/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:46:24 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/27 14:11:13 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *a1;
    const unsigned char *a2;

    a1 = (const unsigned char *) s1;
    a2 = (const unsigned char *) s2;
    i = 0;
    if (n == 0)
        return(0);
    while (i < (n-1))
    {
        if (a1[i] != a2[i])
            return (a1[i] - a2[i]);
        i++;
    }
    return (a1[i] - a2[i]);
}

int main(void)
{
    const void *s1 = "compara isto";
    const void *s2 = "compara aquilo";
    size_t n;
    int res; 

    n = 10;
    res = ft_memcmp(s1, s2, n);
    printf("%d", res);
    return (0);
}