/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:04:13 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/20 02:04:15 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*answer;
	void	*asd;

	asd = NULL;
	answer = NULL;
	del(asd);
	while (lst->next != NULL)
	{
		ft_lstadd_back(&answer, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	ft_lstadd_back(&answer, ft_lstnew(f(lst->content)));
	return (answer);
}
