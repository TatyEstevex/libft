/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alm@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:55:06 by tde-alme          #+#    #+#             */
/*   Updated: 2026/05/05 14:27:03 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int cntrdig(int n)
{
    int ndig;
    
    ndig = 0;
    if (n <= 0)
        ndig++;
    while (n != 0)
    {
        n = n / 10;
        ndig++;
    }
        return (ndig); 
}

char *ft_itoa(int n)
{
    char *res;
    int ndig;
    long    nb;

    nb = n;
    ndig = cntrdig(n);
    res = malloc(ndig+ 1);
    if (res == NULL)
    return (NULL);   
    res[ndig] = '\0';
    if (nb == 0)
    {
        res[0] = '0';
        return (res);
    }
    if (nb < 0)
    {
        res[0] = '-';
        nb = -nb;
    }   
    while (nb > 0) 
    {
        res[ndig]-- = (nb% 10) + '0';
        nb = nb / 10;    
    }
return (res);
}

int main(void)
{
    int n;
    char *res;

    n = 123456789;
    res = ft_itoa(n);
    printf("%s\n", res);
    free(res);
    return (0);
}