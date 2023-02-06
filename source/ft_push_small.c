/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataskin <ataskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:57:19 by ataskin           #+#    #+#             */
/*   Updated: 2023/02/06 21:57:21 by ataskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_small_a(t_list **stackA, t_list **stackB, int flag)
{
	t_list	*head;
	int	i;
	i = 0;
	head = *stackA;
	while (head)
	{
		if (head->index == flag)
		{
			if (i <= 2 - flag)
				while (i > 0)
				{
					ra(stackA);
					i--;
				}
			else
				while ((5 - flag) > i)
				{
					rra(stackA);
					i++;
				}
			pb(stackA, stackB);
		}
		i++;
		head = head->next;
	}
}
