/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strtrim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtacos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:46:24 by rtacos            #+#    #+#             */
/*   Updated: 2019/09/15 20:28:51 by rtacos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	l;

	i = 0;
	if (s)
	{
		while (*s && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
			i++;
		l = ft_strlen(s) - 1;
		while ((s[l] == ' ' || s[l] == '\t' || s[l] == '\n') && l > i)
			l--;
		if ((str = ft_strsub(s, i, l - i + 1)))
			return (str);
	}
	return (NULL);
}
