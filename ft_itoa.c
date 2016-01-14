/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 18:56:04 by upierre-          #+#    #+#             */
/*   Updated: 2016/01/14 15:42:45 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_str(int n)
{
	int		i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = size_str(n);
	res = ft_strnew(i);
	if (!res)
		return (NULL);
	if (n == 0)
		return ("0");
	if (n < 0)
		res[0] = '-';
	while (n != 0)
	{
		res[i - 1] = ft_fabs(n % 10) + '0';
		i--;
		n /= 10;
	}
	return (res);
}
