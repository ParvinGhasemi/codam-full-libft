/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:09:49 by parvinm.gha       #+#    #+#             */
/*   Updated: 2025/11/07 21:49:50 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static void	free_all(char **str_arr, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(str_arr[i]);
		i++;
	}
	free(str_arr);
}

static int	fill_array(char const *str, char c, char **arr, int words)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (str[i] && j < words)
	{
		while (str[i] && str[i] == c)
			i++;
		start = i;
		while (str[i] && str[i] != c)
			i++;
		arr[j] = ft_substr(str, start, i - start);
		if (!arr[j])
		{
			free_all(arr, j);
			return (0);
		}
		j++;
	}
	arr[j] = NULL;
	return (1);
}

/**
 * @brief Splits a string into an array of substrings using a delimiter.
 *
 * The ft_split() function allocates (with malloc) and returns an array
 * of strings obtained by splitting 'str' using the character 'c' as
 * a delimiter. The resulting array is terminated by a NULL pointer.
 *
 * @param str  The string to be split.
 * @param c    The delimiter character.
 * @return An array of newly allocated strings. Returns NULL if memory
 *         allocation fails.
 */
char	**ft_split(char const *str, char c)
{
	char	**arr_words;
	int		words;

	words = count_words(str, c);
	if (!str)
		return (NULL);
	arr_words = (char **)malloc(sizeof(char *) * (words + 1));
	if (!arr_words)
		return (NULL);
	if (!fill_array(str, c, arr_words, words))
		return (NULL);
	return (arr_words);
}
