/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:33:17 by yarai             #+#    #+#             */
/*   Updated: 2022/05/24 21:27:01 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const	char	*src, size_t	dstsize);
size_t	ft_strLen(char	*s);

size_t	ft_strLen(char	*s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char	*dst, const	char	*src, size_t	dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strLen(dst);
	src_len = ft_strLen((char *)src);
	i = dst_len;
	j = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (dstsize - dst_len - 1 > 0 && src[j] != '\0')
	{
		dst[i++] = src[j++];
		dstsize--;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
