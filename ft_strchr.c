/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alm@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:24:16 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/29 12:25:08 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//retorna um ponteiro para a primeira ocorrencia de um caracter numa string, retorna null se nao existir
char *ft_strchr(const char *s, int c)
{    
    char n;
    int i;
    
    i = 0;
    n = (char) c;
    while((s[i] != n) && (s[i] != '\0'))
        i++;
    if (s[i] == n)
        return ((char *) (s + i));
    return (NULL);
}
/* 
int main(void)
{
    const char *s = "nao percebi";
    char *res;
    
    res = ft_strchr(s, 'a');
    if(res != NULL)
        printf("Encontrado o resultado é: %s\n", res);
    else
        printf("Não encontrado\n");
    return(0);
}
 */