/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:35:33 by skock             #+#    #+#             */
/*   Updated: 2025/05/06 17:19:49 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string nametype)
{
	type = nametype;
}

Weapon::~Weapon()
{
	
}

std::string	Weapon::getType(void) const
{
	return (type);
}

void	Weapon::setType(std::string WeaponType)
{
	type = WeaponType;
}