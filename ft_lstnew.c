/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:04:16 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/20 02:04:17 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*answer;

	answer = 0;
	answer = (void *)malloc(sizeof(void *) * 2);
	if (!answer)
		return (0);
	answer->content = content;
	answer->next = NULL;
	return (answer);
}
