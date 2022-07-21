/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:05:20 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/21 16:11:31 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	idx;
	size_t	src_len;

	src_len = 0;
	idx = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (idx < dstsize - 1 && idx < src_len)
	{
		dst[idx] = src[idx];
		idx ++;
	}
	dst[idx] = '\0';
	return (src_len);
}
