/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:03:09 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/28 14:20:01 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

 void *ft_calloc(size_t nmemb, size_t size)
 {
    void    *ptr;
    size_t  total;
    size_t  i;
    unsigned char   *p;

    i = 0;
    total = nmemb * size;
    ptr = malloc(total);
    if (ptr == NULL)
        return NULL;
    p = (unsigned char *) ptr;
    while ( i < total)
    {
        p[i] = 0;
        i++;
    }
    return (ptr);
 }
