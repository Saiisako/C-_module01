/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:05:23 by skock             #+#    #+#             */
/*   Updated: 2025/05/16 13:15:16 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <stdio.h>

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
	static int i = 0;

	std::string	index[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void(Harl::*f[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int j = 0; j < 4; j++)
	{
		if (!index[j].compare(level))
		{
			(this->*f[j])();
			return ;
		}
	}
	std::cout << ANSI_RED << "level doesn't exist." << ANSI_RESET << std::endl;
	std::cout << ANSI_RED << "Please, enter the right level." << ANSI_RESET << std::endl;
	std::cout << std::endl;
	if (++i == 3)
	{
		i = 0;
		std::cout << "Remember :" << std::endl;
		std::cout << "Enter level : DEBUG / INFO / WARNING / ERROR" << std::endl;
		std::cout << "Press 'EXIT' to leave the program." << std::endl;
	}
	
}

