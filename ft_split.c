/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:01:08 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/11/16 12:49:41 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_split(char *str)
{
	int		wc;
	char	**optr;
	int		i;
	int		start;
	int		word;

	// find number of words
	wc = ft_get_word_count(str);
	// create outer pointer
	optr = (char **)malloc((wc + 1) * sizeof(char*));
	if (!optr)
		exit(-3);
	i = 0;
	start = 0;
	word = 0;
	// iterate over string
	while (str[i] && wc > 0)
	{
		// if space
		if (str[i] == ' ' && str[i - 1] != ' ' && i > 0)
			// create inner pointer and asign
			optr[word++] = ft_set_str(i, start, str);
			// copy word to pointer
		if (str[i] != ' ' && str[i - 1] == ' ' && i > 0)
			start = i;
		i++;
	}
	if (str[i] == 0 && s[i - 1] != ' ' && wc > 0)
		optr[word] = ft_set_str(i, start, str);
	optr[wc] = NULL;
	return (optr);
}
