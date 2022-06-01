/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:47:56 by yarai             #+#    #+#             */
/*   Updated: 2022/05/31 21:59:29 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list	*lst, void	(*del)(void *));

void	ft_lstdelone(t_list	*lst, void	(*del)(void *))
{
	if (!del || !lst)
		return ;
	del(lst -> content);
	lst -> content = NULL;
	lst -> next = NULL;
	free(lst);
	lst = NULL;
}
