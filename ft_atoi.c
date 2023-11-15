/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:56:50 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/09/20 16:56:52 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	long	res;
	int		minus;

	i = 0;
	res = 0;
	if (nptr[i] == 45)
		minus = 1;
	if (nptr[i] == 43 || nptr[i] == 45)
		i++;
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		res *= 10;
		res += (int)nptr[i] - 48;
		i++;
	}
	if (minus == 1)
		res *= (-1);
	if (nptr[i] == 0 && res >= -2147483648 && res <= 2147483647)
		return (res);
	else
	{
		write(2, "Error\n", 6);
		exit(-2);
	}
}
