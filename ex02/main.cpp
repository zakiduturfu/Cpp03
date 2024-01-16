/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:16:28 by zlemery           #+#    #+#             */
/*   Updated: 2024/01/16 14:35:51 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int	main()
{
	ClapTrap sam("Samira");
	ScavTrap yass("yassine");
	FragTrap zac("zaki");

	yass.guardGate();
	sam.attack("yassine");
	yass.attack("samira");
	sam.takeDamage(20);
	sam.beRepaired(8);
	zac.highFivesGuys();
	zac.beRepaired(5);
}