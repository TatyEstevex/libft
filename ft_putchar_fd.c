/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alm@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:20:49 by tde-alme          #+#    #+#             */
/*   Updated: 2026/05/06 11:32:37 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
/*
int main(void)
{
    int     fd;

    fd = open("a.txt", 2);
    ft_putchar_fd('a', fd);
}
*/
