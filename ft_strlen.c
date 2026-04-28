/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alm@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:33:01 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/20 13:58:00 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *c)
{
    int i;

    i = 0;
    while (c[i] != '\0' )
        i++;
    return(i);
}

int main(void)
{
    char *c;

    c = "cenas";
    printf ("%d", ft_strlen(c));
    return(0);

}
