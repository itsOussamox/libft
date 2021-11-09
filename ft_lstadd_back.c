/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:39:24 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/09 15:31:16 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//s#include <stdio.h>

/* void ft_display(t_list *head)
{
    t_list  *temp;

    temp = head;
    while (temp->next != NULL)
    {
        printf("%s\n", temp->content);
        temp = temp->next;
    }
        printf("%s\n", temp->content);
} */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;
	
	if (!lst || !new)
		return ;
	new->next = NULL;
	lastnode = *lst;
	if ( (*lst) != NULL)
	{
		while ((*lst)->next != NULL)
			(*lst) = (*lst)->next;
		(*lst)->next = new; 
	}
	*lst = lastnode;
}
/* 

int main()
{
    t_list  *head;
    t_list  *n1;
    t_list  *n2;
    t_list  *n3;
    
    n1 = ft_lstnew("FIRST");
    n2 = ft_lstnew("SECOND");
    n3 = ft_lstnew("THIRD");
    head = n1;
    ft_lstadd_back(&n1, n2);
    ft_lstadd_back(&n2, n3);
    // ft_display(head);
    // puts("--------");
    ft_display(n1);
    
    return (0); 
} */