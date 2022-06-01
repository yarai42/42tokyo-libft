/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 23:08:07 by yarai             #+#    #+#             */
/*   Updated: 2022/05/31 22:00:41 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list	*lst, void	(*f)(void *));

void	ft_lstiter(t_list	*lst, void	(*f)(void *))
{
	while (lst && f)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
