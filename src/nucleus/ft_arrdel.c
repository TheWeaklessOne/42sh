/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:03:47 by qmartina          #+#    #+#             */
/*   Updated: 2020/06/15 23:31:21 by wstygg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fshell.h"

void	ft_arrdel(char **arr)
{
	int		i;

	i = 0;
	if (arr == NULL)
		return ;
	while (arr[i] != NULL)
	{
		ft_strdel(&arr[i]);
		i++;
	}
	free(arr);
}
