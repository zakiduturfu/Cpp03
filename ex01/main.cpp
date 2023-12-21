/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:35:48 by zlemery           #+#    #+#             */
/*   Updated: 2023/12/19 18:28:52 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int	main()
{
	ClapTrap sam("Samira");

	sam.attack("Yassine");
	sam.takeDamage(4);
	sam.beRepaired(2);
}