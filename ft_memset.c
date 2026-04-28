/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alm@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:05:04 by tde-alme          #+#    #+#             */
/*   Updated: 2026/04/20 14:59:40 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = s;
    size_t i = 0;

    while(i < n)
    {
        ptr[i] = (unsigned char) c;
        i++;
    }
    return (s);
}

