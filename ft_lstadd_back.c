/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:39:24 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/10 11:58:46 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (lst && !*lst)
		*lst = new;
	else
	{
		lastnode = ft_lstlast(*lst);
		lastnode->next = new;
	}
}
