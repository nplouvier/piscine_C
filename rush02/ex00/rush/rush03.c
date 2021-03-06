/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush03.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 18:55:01 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 21:58:21 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../srcs/header.h"

char	position03(int col, int row, int x, int y)
{
	char	c;

	c = 'B';
	if ((row == 1 && col == 1) || (row == 1 && col == y))
		c = 'A';
	else if ((row == x && col == y) || (row == x && col == 1))
		c = 'C';
	else if ((row > 1 && col > 1) && (row < x && col < y))
		c = ' ';
	return (c);
}

t_list	*rush03(int x, int y)
{
	int		row;
	int		col;
	t_list	*str;

	col = 1;
	str = NULL;
	if (x <= 0 || y <= 0)
		return (NULL);
	while (col <= y)
	{
		row = 1;
		while (row <= x)
		{
			ft_list_push_back(&str, position03(col, row, x, y));
			row++;
		}
		ft_list_push_back(&str, '\n');
		col++;
	}
	return (str);
}
