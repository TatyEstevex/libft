/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 14:57:21 by tde-alme          #+#    #+#             */
/*   Updated: 2026/05/07 15:07:29 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

int ft_lstsize(t_list *lst)
{
    int     tamanho;

    tamanho = 0;
    while(lst)
    {
        tamanho ++;
        lst = lst -> next;
    }
    return (tamanho);
}