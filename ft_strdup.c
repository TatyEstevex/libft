/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:27:01 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/28 13:18:30 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *strdup(const char *s)
{
    char    *copy;
    size_t  tam;
    size_t  i;

    tam = 0;
    while (s[tam] != '\0')
        tam++;
    copy = (char *) malloc (sizeof (char) * (tam + 1));
    if (copy == NULL)
        return NULL;
    i = 0;
        while (i < tam)
        {
            copy [i] = s[i];
            i++;
        }
    copy [i] = '\0';
    return (copy);
}
