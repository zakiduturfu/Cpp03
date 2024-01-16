/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:16:28 by zlemery           #+#    #+#             */
/*   Updated: 2024/01/16 14:18:25 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"


int	main()
{
	ClapTrap sam("Samira");
	ScavTrap yass("yassine");
	FragTrap zac("zaki");
	DiamondTrap paul("paul");

	yass.guardGate();
	sam.attack("yassine");
	yass.attack("samira");
	sam.beRepaired(8);
	paul.FragTrap::attack("zaki");
	zac.highFivesGuys();
	paul.ScavTrap::guardGate();
	paul.FragTrap::highFivesGuys();
}