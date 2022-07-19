/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:05:44 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/20 02:05:45 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*answer;
	size_t	idx;

	idx = 0;
	answer = (char *)malloc(len * sizeof(char) + 1);
	if (answer == NULL)
		return (NULL);
	while (idx < len)
	{
		answer[idx] = s[start + idx];
		idx ++;
	}
	answer[idx] = '\0';
	return (answer);
}
