/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:32:24 by truello           #+#    #+#             */
/*   Updated: 2023/08/31 15:23:42 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (str[0] != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	is_ascii_first(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] || s2[i]))
		i++;
	if (s1[i] < s2[i])
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < argc)
	{
		j = i;
		while (j < i)
		{
			if (is_ascii_first(argv[j + 1], argv[j]))
			{
				swap = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
