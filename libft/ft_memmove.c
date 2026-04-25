/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 08:56:18 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/25 11:12:45 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;

    d = (unsigned char *) dest; //Typechange
    s = (const unsigned char*) src; //Typechange
    i = 0;

    if (d == s || n == 0)
        return dest;
    if (d < s)
        {
            for (; i < n; i++)
            {
            d[i] = s[i];    
            }
        }
    else
    {
        while (n > 0)
       {
        n--;
        d[n] = s[n];
       }
    }
    return (dest);
}

int main(void)
{
    unsigned char dest [11];
    const unsigned char src [11] = "aisantinho";

    ft_memmove(dest, src, 8);
    dest[8] = '\0';
    printf("%s %s\n", src, dest);
    return(0);
}