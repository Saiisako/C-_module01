/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:17:11 by skock             #+#    #+#             */
/*   Updated: 2025/05/06 13:07:49 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int	main(void)
{
	Zombie *Horde;
	int		N = 5;

	Horde = zombieHorde(N, "caca");
	for (int i = 0; i < N; i++)
		Horde[i].announce();
	delete[] Horde;
}