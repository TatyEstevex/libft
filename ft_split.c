/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alm@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:38:39 by tde-alme          #+#    #+#             */
/*   Updated: 2026/05/05 11:52:34 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int contpal(char const *s, char c)
{
    int i;
    int palavras;

    i = 0;
    palavras = 0;
    if(s == NULL)
        return 0;
    while (s[i] != '\0')
    {    
        if (s[i] != c && (i == 0 || s[i - 1] == c ))
           palavras++;
        i++;
    }
    return (palavras);
}

void free_all(char **arr, int i)
{
    while (i >= 0)
        free(arr[i--]);
    free(arr);
}

char **ft_split(char const *s, char c)
{
    int i;
    char **res;
    int inicio;
    int pal;
    size_t comp;

    if (s == NULL)
        return NULL;
    res = malloc(sizeof(char *) * (contpal(s, c) + 1));
    if (res == NULL)
        return (NULL);
    i = 0;
    pal = 0;
    while (s[i])
    {
        if (s[i] != c )
        {
            inicio = i;
            while(s[i] != '\0' && s[i] != c)
                i++;
            comp = i - inicio;
            res[pal] = malloc(comp + 1);
            if(res[pal] == NULL)
            {
                free_all(res, pal-1);
                return (NULL);
            }
            ft_memcpy (res[pal], &s[inicio], comp);
            res[pal][comp] = '\0';
            pal++;
        }
        else
            i++;     
    }
    res[pal] = NULL;
    return (res);
}

int main(void)
{
    char const *s = "tenho,que,dividir,isto,num,monte,de,strings";
    char c;
    char **res;
    int  i; 

    c = ',';
    i = 0;
    res = ft_split(s,c);
    while (res[i])
    {
        printf("%d %s\n",i, res[i]);
        i++;
    }
    return (0);
}