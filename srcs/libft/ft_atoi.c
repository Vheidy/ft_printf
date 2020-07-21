/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtacos <rtacos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:20:31 by rtacos            #+#    #+#             */
/*   Updated: 2020/07/08 16:36:37 by rtacos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	space(char c)
{
	if (c == ' ' || c == '\n' || c == '\f' || c == '\v'
			|| c == '\t' || c == '\r')
		return (1);
	return (0);
}

int			ft_atoi(const char *s)
{
	int				fl;
	long long int	at;
	long long int	r;
	int				i;

	fl = 1;
	at = 0;
	i = 0;
	while (space(s[i]) == 1)
		i++;
	if (s[i] == '-')
		fl = -1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (ft_isdigit(s[i]) == 1)
	{
		r = at;
		at = at * 10 + (s[i] - '0');
		if (r != (at / 10) && fl == 1)
			return (-1);
		if (r != (at / 10) && fl == -1)
			return (0);
		i++;
	}
	return (at * fl);
}
