/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:54:42 by skock             #+#    #+#             */
/*   Updated: 2025/05/06 17:22:55 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *weaponB;
	std::string name;
public:
	HumanB();
	HumanB(std::string nameB);
	void	setWeapon(Weapon& type);
	void	attack();
};
