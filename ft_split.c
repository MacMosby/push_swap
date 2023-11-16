/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:01:08 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/11/16 14:52:25 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
char	**ft_create_outer_ptr(int wc)
{
	char	**ptr;

	ptr = (char **)malloc((wc + 1) * sizeof(char *));
	if (!ptr)
		exit(-3);
	return (ptr);
}

int ft_get_word_count(char *s)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	if (s[i] == 0)
		return (0);
	if (s[i] == ' ')
		i++;
		while (s[i] != 0)
		{
			if (s[i] == ' ' && s[i - 1] != ' ')
				words++;
			i++;
		}
		if (s[i] == 0 && s[i - 1] != ' ')
			words++;
		return (words);
}

char	*ft_set_str(int i, int start, char *s)
{
	int		j;
	char	*str;

	str = malloc((i - start + 1) *sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	while (j < i - start)
	{
		str[j] = s[start + j];
		j++;
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(char *str)
{
	int		wc;
	char	**optr;
	int		i;
	int		start;
	int		word;

	wc = ft_get_word_count(str);
	optr = ft_create_outer_ptr(wc);
	i = 0;
	start = 0;
	word = 0;
	while (str[i] && wc > 0)
	{
		if (str[i] == ' ' && str[i - 1] != ' ' && i > 0)
			optr[word++] = ft_set_str(i, start, str);
		if (str[i] != ' ' && str[i - 1] == ' ' && i > 0)
			start = i;
		i++;
	}
	if (str[i] == 0 && str[i - 1] != ' ' && wc > 0)
		optr[word] = ft_set_str(i, start, str);
	optr[wc] = NULL;
	return (optr);
}
