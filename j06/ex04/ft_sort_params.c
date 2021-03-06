/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_params.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 13:06:27 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 19:47:29 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	long	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort_params(char **list, int size)
{
	int		sorted;
	int		i;
	char	*tmp;

	i = 0;
	sorted = 0;
	while (!sorted)
	{
		i = 0;
		sorted = 1;
		while (i < size - 1)
		{
			if (ft_strcmp(list[i], list[i + 1]) > 0)
			{
				sorted = 0;
				tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_params(argv + 1, argc - 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
