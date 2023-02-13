/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:59:49 by jebucoy           #+#    #+#             */
/*   Updated: 2022/06/21 22:52:34 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// function to count how many 'words' in the string.

static int	str_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i]) || (s[i + 1] == 0))
		{
			count++;
			while (s[i] == c && s[i + 1] == c)
				i++;
		}
		i++;
	}
	return (count);
}

// counts the characters in s[i] for malloc

static int	wordinstr_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i])
			return (i);
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (str_count(s, c) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			str[j] = ft_substr(s, i, wordinstr_len(&s[i], c));
			i += wordinstr_len(&s[i], c);
			j++;
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}

// #include <stdio.h>
// int	main()
// {
// 	// char s[] = "    thi sis  ates   tst ring   ";
// 	char s[] = "";
// 	char c = ' ';
// 	char **word;
// 	word = ft_split(s, c);
// 	// printf("%i\n", str_count(str, c));
// 	// printf("%s\n", word[0]);
// 	free (word[0]);
// 	// printf("%s\n", word[1]);
// 	// free (word[1]);
// 	// printf("%s\n", word[2]);
// 	// free (word[2]);
// 	// printf("%s\n", word[3]);
// 	// free (word[3]);
// 	// printf("%s\n", word[4]);
// 	// free (word[4]);
// 	// // printf("%s\n", word[5]);
// 	// free (word[5]);
// 	free (word);
// 	// printf("%s\n", word[1]);
// 	// printf("%s\n", word[2]);
// 	// printf("%s\n", word[3]);
// 	// printf("%s\n", word[4]);
// 	// printf("%s\n", word[5]);
// }