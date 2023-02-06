/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataskin <ataskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:56:37 by ataskin           #+#    #+#             */
/*   Updated: 2023/02/06 21:56:39 by ataskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
