/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:10:23 by tde-alme          #+#    #+#             */
/*   Updated: 2026/05/07 15:16:41 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct  s_list
{
    void           *content;
    struct s_list  *next;
} t_list;

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return(NULL);
    while(lst -> next)
        lst = lst -> next;

    return (lst);
}