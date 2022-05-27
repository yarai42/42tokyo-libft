/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:19:36 by yarai             #+#    #+#             */
/*   Updated: 2022/05/26 20:42:35 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list	*lst);

t_list	*ft_lstlast(t_list	*lst)
{
	t_list	*last;

	last = lst;
	while (last -> next)
		last = last -> next;
	return (last);
}
