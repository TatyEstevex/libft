/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alm@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:38:39 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/29 14:14:03 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include

char **ft_split(char const *s, char c)
{

}

int main(void)
{
    char const *s = "tenho que dividir isto num monte de strings";
    char c;
    char **res;
    int  i; 

    c = 'a';
    res = ft_split(s,c);
    while (res[i])
    {
        printf("%s",i, res[i]);
        i++;
    }
    return (0);
}