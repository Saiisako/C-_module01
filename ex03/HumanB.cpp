/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:54:44 by skock             #+#    #+#             */
/*   Updated: 2025/05/06 17:46:09 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(std::string nameB)
{
	name = nameB;
}

void	HumanB::setWeapon(Weapon& type)
{
	weaponB = &type;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weaponB->getType() << std::endl;
}
