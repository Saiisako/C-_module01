/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:24:51 by skock             #+#    #+#             */
/*   Updated: 2025/05/15 13:53:27 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	parse_arguments(int ac)
{
	if (ac < 4 || ac > 4)
		return (1);
	else
		return (0);
}

void	print_error() {std::cout << "Enter : [1] = filename | [2] = string_1 | [3] = string_2" << std::endl;}