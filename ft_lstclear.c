/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:09:13 by tde-alme          #+#    #+#             */
/*   Updated: 2026/05/07 16:21:59 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
    void            *conteudo;
    struct s_list   *next;
} t_list;

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *temp;
    
    if(!lst || !del)
        return;
    while(*lst)
    {
        temp = (*lst) -> next;
        del ((*lst) -> conteudo);
        free (*lst);
        *lst = temp;
    }
}