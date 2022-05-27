/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:47:56 by yarai             #+#    #+#             */
/*   Updated: 2022/05/26 23:04:16 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list	*lst, void	(*del)(void *));
void	*del(void	*lst);

void	*del(void	*lst)
{
	
}

void	ft_lstdelone(t_list	*lst, void	(*del)(void *))
{
	t_list	*tmp;

	if (!(*del))
		return ;
	tmp = (*del) -> next;
	free(lst);
	*del = tmp;
}
