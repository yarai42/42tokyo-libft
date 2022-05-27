/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarai </var/mail/yarai>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 07:35:17 by yarai             #+#    #+#             */
/*   Updated: 2022/05/25 00:14:40 by yarai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_split(char const	*s, char	c);
static size_t	split_count(char const	*s, char	c);
static char		*ft_sub_str(char const	*s, size_t	start, size_t	len);
static char		**ft_ans(char	**ans, char const	*s, char	c, size_t	l);
static void		ft_free(char	*arr);

static void	ft_free(char	*arr)
{
	free(arr);
}

static char	*ft_sub_str(char const	*s, size_t	start, size_t	len)
{
	size_t	i;
	char	*ans;

	i = 0;
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (ans == NULL)
	{
		ft_free(ans);
		return (NULL);
	}
	while (i < len)
		ans[i++] = s[start++];
	ans[i] = '\0';
	return (ans);
}

static size_t	split_count(char const	*s, char	c)
{
	size_t	split_cnt;
	size_t	i;
	bool	flag;

	flag = false;
	i = 0;
	split_cnt = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && flag)
		{
			split_cnt++;
			flag = false;
		}
		else if (s[i] != c)
			flag = true;
		i++;
	}
	if (flag)
		split_cnt++;
	return (split_cnt);
}

static char	**ft_ans(char	**ans, char const	*s, char	c, size_t	l)
{
	size_t	i;
	bool	flag;

	i = 0;
	flag = false;
	while (*s)
	{
		if (s[0] == c && flag)
		{
			ans[i++] = ft_sub_str(s - l, 0, l);
			flag = false;
			l = 0;
		}
		else if (s[0] != c)
		{
			flag = true;
			l++;
		}
		s++;
	}
	if (flag)
		ans[i++] = ft_sub_str(s - l, 0, l);
	ans[i] = NULL;
	return (ans);
}

char	**ft_split(char const	*s, char	c)
{
	char	**ans;
	size_t	split_elemlen;
	size_t	split_strlen;

	split_elemlen = split_count(s, c);
	split_strlen = 0;
	ans = (char **)malloc(sizeof(char *) * (split_elemlen + 1));
	if (ans == NULL)
		return (NULL);
	return (ft_ans(ans, s, c, split_strlen));
}
