/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 23:11:24 by yarai             #+#    #+#             */
/*   Updated: 2022/06/02 00:15:54 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void	(*del)(void *));

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void	(*del)(void *))
{
	t_list		*new;
	t_list		*head;
	t_list		*tail;

	new = ft_lstnew(f(lst -> content));
	if (!lst || !f || !del || !new)
		return (NULL);
	head = NULL;
	ft_lstadd_back(&head, new);
	tail = head;
	lst = lst -> next;
	while (lst)
	{
		new = ft_lstnew(f(lst -> content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&tail, new);
		tail = tail -> next;
		lst = lst -> next;
	}
	return (head);
}
