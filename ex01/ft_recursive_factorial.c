/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldithake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:56:25 by ldithake          #+#    #+#             */
/*   Updated: 2020/06/26 09:58:44 by ldithake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
	    return (0);
	}
	else if (nb <= 1)
	{	
	    return (1);
	}
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

