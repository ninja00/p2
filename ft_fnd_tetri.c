/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fnd_tetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 13:24:27 by djoly             #+#    #+#             */
/*   Updated: 2015/12/09 12:32:59 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"
#include "libft.h"

int		ft_fnd_tetri(char *bufmap)
{
	int		i;
	int		j;
	int		nb;

	nb = 0;
	i = 0;
	while (i < 16 && bufmap[i] != '#')
		i++;
	j = i;
	while (++j < 20)
	{
		if (bufmap[j] == '#')
			nb = nb * 100 + (j - i);
	}
	return (nb);
}
