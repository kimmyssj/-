/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:04:23 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/21 20:55:21 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s11;
	char	*s22;
	size_t	idx;
	size_t	flag;

	s11 = (char *)s1;
	s22 = (char *)s2;
	idx = 0;
	flag = 0;
	if (n == 0)
		return (0);
	while (s11[idx] && s11[idx] == s22[idx] && idx < n)
		idx ++;
	if (idx == n && s11[idx - 1] == s22[idx - 1])
		return (0);
	return ((unsigned char)s11[idx - 1] - (unsigned char)s22[idx - 1]);
}
