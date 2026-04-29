/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alm@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:17:17 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/29 13:49:44 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    size_t  inicio;
    size_t  fim;
    
    char    *res;
    if(s1 == 0 || set == 0)
        return (0);
    inicio = 0;
    while((s1[inicio] != '\0') && (ft_strchr(set, s1[inicio])))
        inicio++;
    fim = ft_strlen(s1);
    while ((fim > inicio) && (ft_strchr(set, s1[fim - 1])))
        fim--;
    res = ((char *) malloc(sizeof(char) * (fim - inicio + 1)));
    if (!res)
        return (0);
    i = 0;
    while (inicio < fim)
    {
        res[i] = s1[inicio];
        i++;
        inicio++;
    }
    res[i] = '\0';
    return (res);
    }
int main(void)
{
    char const *s1 = "#@#bom dia@@##"; 
    char const *set = "#@";
    char    *res;

    res = ft_strtrim(s1, set);
    printf ("%s\n", res);
    return (0);
}