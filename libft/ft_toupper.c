/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:45:11 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/24 16:20:43 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
//converte letras de lower to upper caso nao seja letra devolve c
int ft_toupper(int c)
{
    if((c >= 97) && (c <= 122))
        c = c - 32;
    return (c);
}

int main(void)
{
    char c;
    
    c = 'b';
    printf("%c\n", ft_toupper(c));
    return (0);
}