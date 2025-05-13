/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:54:47 by skock             #+#    #+#             */
/*   Updated: 2025/05/06 17:40:16 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon	 	&weapon;
	public:
		HumanA(std::string nameA, Weapon &weaponA);
		void	attack();
};


