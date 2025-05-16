/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:05:04 by skock             #+#    #+#             */
/*   Updated: 2025/05/16 13:10:34 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdlib.h> 

#define ANSI_RED	"\x1b[31m"
#define ANSI_GRAY	"\x1b[90m"
#define ANSI_RESET	"\x1b[0m"

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl();
		~Harl();
		void	complain( std::string level );
};

typedef void (Harl::*Harl_func)(void);
