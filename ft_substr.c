/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:20:20 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/28 16:02:32 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t     i;
    size_t  s_start;

    i = 0;
    if (s == NULL)
        return NULL;
    while (s[i] != '\0')
        i++;
    s_start = (size_t) start;
    if (s_start >= i)
        len = 0;
    else if ( len > i - s_start)
        len = i - s_start;
    sub = (char *) malloc (sizeof (char) * (len + 1));
    if (sub == NULL)
        return NULL;
    i = 0;
    while ( i < len && s[s_start + i] != '\0')
    {
        sub[i] = s [s_start + i];
        i++;
    }
    sub [i] = '\0';
    return (sub);
}

int main(void)
{
    char const* s = "vamos ver isto";
    unsigned int    start;
    char *  res;
    size_t  len;

    start = 7;
    len = 5;
    res = ft_substr(s, start, len);
    printf("%s\n", res);
    return(0);
}