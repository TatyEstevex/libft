/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:11:40 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/27 14:49:34 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t l;

    i = 0;
    l = 0;
    if (little[i] == '\0')
        return((char *)big);
    while ((big[i] != '\0') && (i < (len)))
    {
        l = 0;
        while (big[i + l] == little[l] && (i + l < len))
        {
            if(little[l + 1] == '\0')
                return((char *)&big[i]);
            l++;
        }    
        i++;
    }
return NULL;
}

int main(void)
{
    const char *big = "esta e a frase grande";
    const char *little = "frase gra";
    size_t len;
    char *res;

    len = 20;
    res = ft_strnstr(big, little, len);
    printf("%s", res);
    return (0);
}