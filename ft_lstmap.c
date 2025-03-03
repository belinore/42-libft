/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belinore <belinore@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:16:34 by belinore          #+#    #+#             */
/*   Updated: 2025/03/03 20:51:33 by belinore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current_node;
	t_list	*content;
	t_list	*new_list_node;
	t_list	*new_list_head;

	current_node = lst;
	new_list_head = NULL;
	while (current_node)
	{
		content = f(current_node->content);
		new_list_node = ft_lstnew(content);
		if (new_list_node == NULL)
		{
			del(content);
			ft_lstclear(&new_list_head, del);
			return (NULL);
		}
		if (new_list_head == NULL)
			new_list_head = new_list_node;
		else
			ft_lstadd_back(&new_list_head, new_list_node);
		current_node = current_node->next;
	}
	return (new_list_head);
}
