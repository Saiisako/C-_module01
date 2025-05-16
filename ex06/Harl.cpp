/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:05:23 by skock             #+#    #+#             */
/*   Updated: 2025/05/16 14:27:19 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// PRIVATE

void	Harl::debug(void)
{
	std::cout	<< ANSI_GRAY <<	"I love having extra bacon for my 7XL-double-cheese-triple"
					"-pickle-specialketchup burger. I really do!" << ANSI_RESET << std::endl;
}

void	Harl::info(void)
{
	std::cout	<< ANSI_GRAY <<	"I cannot believe adding extra bacon costs more money. "
					"You didn't put enough bacon in my burger! "
					"If you did, I wouldn't be asking for more!" << ANSI_RESET << std::endl;
}

void	Harl::warning(void)
{
	std::cout	<< ANSI_GRAY <<	"I think I deserve to have some extra bacon for free. "
					"I've been coming for years, whereas you started working"
					"here just last month." << ANSI_RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout	<< ANSI_GRAY << "This is unacceptable! I want to speak to the manager now."
				<< ANSI_RESET << std::endl;
}

// PUBLIC

Harl::Harl() {}
Harl::~Harl() {}

void	Harl::complain(std::string level)
{
	int index_level = -1;

	std::string	index[] = {"DEBUG", "INFO", "WARNING", "ERROR"};


	for (int j = 0; j < 4; j++)
	{
		if (!index[j].compare(level))
		{
			index_level = j;
			break ;
		}
	}
	switch (index_level)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			debug();
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			info();
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			warning();
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			error();
			std::cout << std::endl;
			break ;
		default :
			std::cout << ANSI_RED << "[ Probably complaining about insignificant problems ]" << ANSI_RESET << std::endl;
			std::cout << std::endl;
	}
}

