/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:35:48 by zlemery           #+#    #+#             */
/*   Updated: 2023/12/23 16:05:04 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int	main()
{
	ClapTrap sam("Samira");
	ScavTrap yass("yassine");

	yass.guardGate();
	sam.attack("yassine");
	yass.attack("samira");
	sam.beRepaired(8);
}