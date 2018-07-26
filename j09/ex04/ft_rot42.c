/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rot42.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 11:59:52 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 12:00:44 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;
	int rot;

	rot = 42 - 26;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] > 'j')
				str[i] = (str[i] + 42) - 26 - 26;
			else
				str[i] = (str[i] + 42) - 26;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			str[i] = str[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}