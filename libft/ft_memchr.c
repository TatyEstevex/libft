/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:20:26 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/27 13:44:32 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    unsigned char proc;
    size_t i;

    str = (unsigned char *) s;
    proc = (unsigned char) c;
    i = 0;
    if (n == 0)
        return NULL;
    while (str[i] != proc && i < (n -1))
        i++;
    if (str[i] == proc)
        return ((void *) &str[i]);
    return NULL;
}

int main(void)
{
    const void *s = "vamos verD se e isto";
    int c;
    size_t n;
    char *res;

    c = 68;
    n = 10;
    res = memchr(s, c, n);
    printf("%s", res);
    return (0);
}