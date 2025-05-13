/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:19:20 by skock             #+#    #+#             */
/*   Updated: 2025/05/06 13:01:33 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie() : _name("default")
{
	std::cout << "Constructor" << std::endl;
}

Zombie::Zombie(const std::string& name) : _name(name)
{
	std::cout << "name Constructor" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " destructor" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setname(std::string newname)
{
	_name =  newname;
}
