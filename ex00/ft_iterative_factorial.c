/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldithake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:37:52 by ldithake          #+#    #+#             */
/*   Updated: 2020/06/26 09:44:25 by ldithake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int power;

	power = 1;
	if (nb < 0)
	{
	    return (0);
	}
	
	while (nb > 0)
	{
	    power *= nb--;
	}
	    return (power);
    
}

