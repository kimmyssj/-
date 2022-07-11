/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:58:19 by seungjki          #+#    #+#             */
/*   Updated: 2022/05/04 16:22:53 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

int	check_str(char const *s, char c)
{
	int	str_idx;
	int	idx;

	str_idx = 0;
	idx = 0;
	if (idx == 0 && s[1] == c)
			str_idx ++;
	while (s[idx] != '\0')
	{
		if ((s[idx] == c || idx == 0)
			&& (s[idx + 1] != c && s[idx + 1] != '\0'))
			str_idx ++;
		idx ++;
	}
	return (str_idx);
}

void	create_str_1(char const *s, char c, char **answer, int str_idx)
{
	int	idx;
	int	char_idx;

	idx = 0;
	char_idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == c || idx == 0)
		{
			while (s[idx + 1 + char_idx] != c && s[idx + 1 + char_idx] != '\0')
					char_idx ++;
			if (char_idx != 0)
			{
				answer[str_idx] = (char *)malloc(sizeof(char) * char_idx);
				answer[str_idx][char_idx] = '\0';
				str_idx ++;
			}
			char_idx = 0;
		}	
		idx ++;
	}
}

void	create_str_0(char const *s, char c, char **answer)
{
	int	idx;
	int	char_idx;
	int	str_idx;

	idx = 0;
	char_idx = 0;
	str_idx = 0;
	if (idx == 0 && s[1] == c)
	{
			answer[str_idx] = (char *)malloc(sizeof(char) * 2);
			answer[str_idx][char_idx + 1] = '\0';
			str_idx++;
	}
	create_str_1(s, c, answer, str_idx);
}

void	put_char_in(char const *s, char c, char **answer)
{
	int	idx;
	int	char_idx;
	int	str_idx;

	idx = 0;
	str_idx = 0;
	char_idx = 0;
	if (char_idx == 0 && s[idx] == c)
			answer[str_idx][char_idx] = s[0];
	while (s[idx] != '\0')
	{
		char_idx = 0;
		while (s[idx] != c && s[idx] != '\0')
		{
				answer[str_idx][char_idx] = s[idx];
				char_idx ++;
				idx ++;
		}
		if (char_idx != 0)
				str_idx ++;
		else
				idx ++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		strnumb;
	char	**answer;

	strnumb = check_str(s, c);
	answer = (char **)malloc(sizeof(char *) * strnumb);
	if (answer == NULL)
		return (NULL);
	create_str_0(s, c, answer);
	put_char_in(s, c, answer);
	return (answer);
}

/*
#include<stdio.h>
int	main(void)
{
	  printf("-------ex05-------\n\n");
    char **ex05_split1;
    char **ex05_split2;
    char **ex05_split3;
	char *ex05_str1 = " hello   my name is huuuuuuuuuuunpark! yours me mine akd ";
	char *ex05_str2 = "@!!!!!!#";
	char *ex05_str3 = "i1myme111mineyou11111111111youryou1yours";
	ex05_split1 = ft_split(ex05_str1, ' ');
    ex05_split2 = ft_split(ex05_str2, '!');
    ex05_split3 = ft_split(ex05_str3, '1');
    printf("---test1---\n");
	for (int j = 0; j < 9; j++)
	{
		printf("%s\n", ex05_split1[j]);
	}
    printf("---test2---\n");
    for (int j = 0; j < 2; j++)
	{
		printf("%s\n", ex05_split2[j]);
	}
    printf("\n\n");
   printf("---test3---\n");
    for (int j = 0; j < 5; j++)
	{
		printf("%s\n", ex05_split3[j]);
	}
	free(ex05_split1);
    free(ex05_split3);
    free(ex05_split2);
}
*/
