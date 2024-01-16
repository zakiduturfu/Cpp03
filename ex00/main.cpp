/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:35:48 by zlemery           #+#    #+#             */
/*   Updated: 2024/01/16 14:33:52 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int	main()
{
	ClapTrap sam("Samira");
	ClapTrap yass("Yassine");

	sam.attack("Yassine");
	yass.takeDamage(9);
	yass.attack("samira");
	sam.beRepaired(2);
	sam.attack("yassine");
	yass.takeDamage(2);
	yass.attack("samira");
	yass.takeDamage(4);
	yass.beRepaired(1);
}