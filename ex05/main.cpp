/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:04:47 by skock             #+#    #+#             */
/*   Updated: 2025/05/16 13:02:34 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl		harl;
	std::string	input;
	
	std::cout << "Enter level : DEBUG / INFO / WARNING / ERROR" << std::endl;
	std::cout << "Press 'EXIT' to leave the program." << std::endl;
	while (1)
	{
		std::cin >> input;
		if (!input.compare("EXIT"))
			exit (0);
		if (!input.empty())
			harl.complain(input);
	}
}