/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:29:29 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/24 15:45:00 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//adiciona o src ao fim do dest, e devolve o tamanho total que queria criar
size_t ft_strlcat(char *restrict dst , const char *restrict src, size_t size)
{
    int i;
    int s;
    size_t comp_dst;
    size_t comp_src;

    i = 0;
    s = 0;
    comp_dst = 0;
    comp_src = 0;
    while(dst[comp_dst] != '\0')
        comp_dst++;
    while(src[comp_src] != '\0')
        comp_src++;
    i = comp_dst;
    if (comp_dst >= size)
        return (comp_src + comp_dst);
    while((src[s] != '\0') && (i + 1 < size))
        {
        dst[i] = src[s];
        s++;
        i++;
        }
    dst[i] = '\0';
    return (comp_src+comp_dst);
}

int main(void)
{
    char *src = "istonaoéfácil";
    char dst[15] = "vamoslá";
    size_t size = sizeof(dst);
    size_t resultado;
    
    resultado = ft_strlcat(dst, src, size);

    printf ("%s %zu %s\n", src, resultado, dst);
    return (0);
}