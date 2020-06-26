/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldithake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:08:01 by ldithake          #+#    #+#             */
/*   Updated: 2020/06/26 10:12:57 by ldithake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power < 0)
	{
	   	return (0);
	}
	
	if (power == 0)
	{
	    return (1);
	}
	
	while (power-- > 1)
	{
	    result *= nb;
	}
	return (result);
}
