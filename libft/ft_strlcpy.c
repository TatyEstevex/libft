/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:33:56 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/24 12:28:59 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  compr_src;

    i = 0;
    compr_src = 0;

    while (src[compr_src] != '\0')
        compr_src++;
    if (size == 0)
        return(compr_src);
    while ((src[i] != '\0') && (i < size -1))
        {
            dest[i] = src[i];
            i++;
        }
    dest[i] = '\0';
    return (compr_src);
}

int main(void)
{
    const char *src = "truncar é cortar";
    char dest[14];
    size_t size = sizeof(dest);
    size_t ret;
    
    printf("%s\n", src);
    ret = ft_strlcpy (dest, src, size);
    printf("%s, %zu, %zu\n", dest, ret, size);
    return(0);
}