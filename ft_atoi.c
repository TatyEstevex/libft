/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:49:53 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/27 15:52:32 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *nptr)
{
    int i;
    int res;
    int sinal;

    i = 0;
    res = 0;
    sinal = 1;

    while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            sinal = -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        res = (res * 10) + (nptr[i] - '0');
        i++;
    }
return (res * sinal);
}
int main(void)
{
    const char *nptr = "913419819";

    printf("%d", ft_atoi(nptr));
    return(0);
}