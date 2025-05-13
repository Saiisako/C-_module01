/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:09:34 by skock             #+#    #+#             */
/*   Updated: 2025/05/06 15:29:00 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	var = "HI THIS IS BRAIN";
	std::string	*stringPTR = &var;
	std::string	&stringREF = var;

	std::cout << &var << std::endl;
	std::cout << "String address = " << stringPTR << std::endl;
	std::cout << "String address = " << &stringREF << std::endl;

	std::cout << var << std::endl;
	std::cout << "String value = " << *stringPTR << std::endl;
	std::cout << "String value = " << stringREF << std::endl;
}