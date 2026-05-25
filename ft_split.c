/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-alme <tde-alm@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:38:39 by tde-alme          #+#    #+#             */
/*   Updated: 2026/05/11 12:41:19 by tde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contpal(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static void	free_all(char **arr, int i)
{
	while (i >= 0)
		free(arr[i--]);
	free(arr);
}

static char	*make_word(char const *s, int start, int end)
{
	char	*word;

	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	ft_memcpy(word, &s[start], end - start);
	word[end - start] = '\0';
	return (word);
}

static int	fill_words(char const *s, char c, char **res)
{
	int		start;
	int		i;
	int		wordsize;

	i = 0;
	wordsize = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			res[wordsize] = make_word(s, start, i);
			if (!res[wordsize])
				return (free_all(res, wordsize - 1), 0);
			wordsize++;
		}
	}
	res[wordsize] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (s == NULL)
		return (NULL);
	res = malloc(sizeof(char *) * (contpal(s, c) + 1));
	if (res == NULL)
		return (NULL);
	if (!fill_words(s, c, res))
		return (NULL);
	return (res);
}
/*
int	main(void)
{
	char const *s = "tenho,que,dividir,isto,num,monte,de,strings";
	char c;
	char **res;
	int i;

	c = ',';
	i = 0;
	res = ft_split(s, c);
	while (res[i])
	{
		printf("%d %s\n", i, res[i]);
		i++;
	}
	return (0);
}
    */