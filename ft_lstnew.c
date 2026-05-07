/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:54:16 by tde-alme          #+#    #+#             */
/*   Updated: 2026/05/07 13:11:15 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

t_list *ft_lstnew(void *content)
{
    t_list  *new_node;

    new_node = malloc(sizeof (t_list));
    if (!new_node)
        return NULL;

    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}