/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:14:14 by yarai             #+#    #+#             */
/*   Updated: 2022/05/24 21:22:58 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len);
bool	ft_ncmp(const	char	*s1, const	char	*s2, size_t	n);

bool	ft_ncmp(const	char	*s1, const	char	*s2, size_t	n)
{
	size_t	i;

	i = 0;
	while (n-- && s2[i])
	{
		if (s1[i] != s2[i])
			return (false);
		i++;
	}
	if (s2[i])
		return (false);
	return (true);
}

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	char	*hay;

	hay = (char *)haystack;
	if (!(*needle))
		return (hay);
	else if (!len)
		return (0);
	while (len && *hay)
	{
		if (ft_ncmp(hay, needle, len))
			return (hay);
		hay++;
		len--;
	}
	return (NULL);
}
