/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:52:12 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/21 16:46:53 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
    unsigned char *p;

    p = (unsigned char *) s;
    while (n > 0)
        {
            *p = 0;
            p++;
            n--;
        }
}
int main(void)
{
    unsigned char str [20] = "aiocaraças";
    
    ft_bzero(str, 5);
    printf("%s \n", str);
    return (0);
}