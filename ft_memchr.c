/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:04:20 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/20 02:04:22 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		idx;
	const char	*str;

	idx = 0;
	str = (char *)s;
	while (idx < n)
	{
		if (str[idx] == c)
			return ((void *)str + idx);
		idx ++;
	}
	return (0);
}
