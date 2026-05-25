/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alm@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:09:13 by tde-alme          #+#    #+#             */
/*   Updated: 2026/05/11 13:48:55 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del || !*lst)
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		del ((*lst)-> content);
		free (*lst);
		*lst = temp;
	}
	*lst = NULL;
}
