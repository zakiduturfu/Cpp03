/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:16:28 by zlemery           #+#    #+#             */
/*   Updated: 2023/12/27 14:49:34 by zlemery          ###   ########.fr       */
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
	sam.beRepaired(8);
	zac.highFivesGuys();
}