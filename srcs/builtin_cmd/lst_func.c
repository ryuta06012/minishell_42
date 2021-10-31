/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yootaki <yootaki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 11:42:49 by yootaki           #+#    #+#             */
/*   Updated: 2021/10/14 21:02:05 by yootaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtin_cmd.h"

void	ft_envlstdelone(t_envlist *lst)
{
	t_envlist	*prev;
	t_envlist	*next;

	prev = lst->prev;
	next = lst->next;
	prev->next = next;
	next->prev = prev;
	free(lst);
}

void	free_envlst(t_envlist *lst)
{
	t_envlist	*tmp;
	int			n;

	n = ft_envlstsize(lst);
	while (n-- >= 0)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}
