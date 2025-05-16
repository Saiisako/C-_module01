/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:09:34 by skock             #+#    #+#             */
/*   Updated: 2025/05/16 11:21:04 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	append(std::ifstream& fs, std::ofstream& new_fs, char **av)
{
	std::string	line, new_line, from, to;

	from = (std::string(av[2]));
	to = (std::string(av[3]));
	while (getline(fs, line))
	{
		new_line = line;
		size_t	pos = 0;
		while ((pos = new_line.find(from, pos)) != std::string::npos)
		{
			new_line.erase(pos, from.length());
			new_line.insert(pos, to);
			pos += to.length();
		}
		new_fs << new_line << std::endl;
	}
}

int	main(int ac, char **av)
{
	if (parse_arguments(ac))
		return (print_error(), 1);
	std::ifstream fs(av[1]);
	if (fs.is_open())
		{
			std::stringstream name;
			name << av[1] << ".replace";
			std::ofstream new_fs(name.str().c_str(), std::ios::trunc);
			if (new_fs.is_open())
			{
				append(fs, new_fs, av);
			}
			else
				std::cout << "Error while trying to open file : " << av[1] << std::endl;
			new_fs.close();
			fs.close();
		}
	else
		std::cout << "Error while trying to open file : " << av[1] << std::endl;
	return (0);
}
