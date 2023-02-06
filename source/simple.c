/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataskin <ataskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:58:19 by ataskin           #+#    #+#             */
/*   Updated: 2023/02/06 21:58:21 by ataskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_small_sort(t_list **stackA, t_list **stackB)
{
	(void)stackB;
	if (ft_lstsize(*stackA) == 2)
	{
		if ((*stackA)->content > (*stackA)->next->content)
			sa(stackA);
	}
	else if (ft_lstsize(*stackA) == 3)
		ft_sort_three(stackA);
	else if (ft_lstsize(*stackA) == 4)
		ft_sourt_four(stackA, stackB);
	else if (ft_lstsize(*stackA) == 5)
		ft_sort_five(stackA, stackB);
}
