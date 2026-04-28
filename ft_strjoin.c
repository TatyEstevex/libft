/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:09:35 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/28 17:08:34 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    char   *final;

    i = 0;
    j = 0;
    if (s1 == NULL || s2 == NULL)
        return NULL;
    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
        j++;
    final = (char *) malloc(sizeof(char) * (i + j + 1));
    if (final == NULL)
        return NULL;
    i = -1;
    j = -1;
    while(s1[++i])
        final[i] = s1[i];
    while (s2[++j])
        final[i + j] = s2[j];
    final [i + j] = '\0';
    return (final);
}

int main(void)
{
    char *s1 = "primeira";
    char *s2 = "segunda";
    char *res;

    res = ft_strjoin(s1, s2);
    printf("%s\n", res);
    return (0);
}