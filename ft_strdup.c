/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:05:02 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/20 02:05:03 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		idx;
	char	*result;

	idx = 0;
	while (s1[idx])
		idx ++;
	result = (char *)malloc(sizeof(char) * idx + 1);
	if (result == 0)
		return (0);
	while (idx != -1)
	{
		result[idx] = s1[idx];
		idx --;
	}
	return (result);
}
