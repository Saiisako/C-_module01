/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:35:49 by skock             #+#    #+#             */
/*   Updated: 2025/05/06 17:19:30 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon();
		Weapon(std::string nametype);
		~Weapon();
		std::string	getType(void) const;
		void		setType(std::string WeaponType);
};