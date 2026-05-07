/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:33:04 by tde-alme          #+#    #+#             */
/*   Updated: 2026/05/07 15:41:51 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
    void            *conteudo;
    struct s_list   *next;
} t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(!new || !lst)
        return;

    new -> next = *lst;
    *lst = new;
}