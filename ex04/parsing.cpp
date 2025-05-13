/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:24:51 by skock             #+#    #+#             */
/*   Updated: 2025/05/07 12:26:30 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	parse_arguments(int ac)
{
	if (ac == 4)
		return (0);
	else
		return (1);
}

void	print_error() {std::cout << "Enter : [1] = filename | [2] = string_1 | [3] = string_2" << std::endl;}