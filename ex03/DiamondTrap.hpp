/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:34:11 by zlemery           #+#    #+#             */
/*   Updated: 2024/01/16 13:57:10 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap( const std::string name);
	DiamondTrap( DiamondTrap const & src);
	~DiamondTrap();

	void	guardGate();
	void	highFivesGuys( void );

private:
	std::string	_Name;
	int			_Hitpoint;
	int			_EnergyPoints;
	int			_AttackDamage;
};

#endif