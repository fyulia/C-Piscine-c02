/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sporcini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 19:12:48 by sporcini          #+#    #+#             */
/*   Updated: 2021/02/20 20:30:19 by sporcini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] <= 90)
					|| (str[i] >= 97 && str[i] <= 122)))
		{
			check = 0;
			break ;
		}
		i++;
	}
	return (check);
}
