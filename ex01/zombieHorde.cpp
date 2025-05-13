/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:26:26 by skock             #+#    #+#             */
/*   Updated: 2025/05/06 13:03:22 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		Horde[i].setname(name);
	return (Horde);
}