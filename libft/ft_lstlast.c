/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataskin <ataskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:56:23 by ataskin           #+#    #+#             */
/*   Updated: 2023/02/06 21:56:25 by ataskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst -> next != NULL)
		lst = lst->next;
	return (lst);
}
