/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:17:11 by skock             #+#    #+#             */
/*   Updated: 2025/05/06 11:13:25 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"


int	main(void)
{
	Zombie* z = newZombie("Slitherface");
	z->announce();
	randomChump("Zombie");
	delete z;
}