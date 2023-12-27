/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:16:28 by zlemery           #+#    #+#             */
/*   Updated: 2023/12/27 17:40:23 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public: 
	ScavTrap( const std::string name );
	ScavTrap( ScavTrap const & src);
	~ScavTrap();

	void	guardGate();
	void	attack( const std::string& target );
	void	beRepaired( unsigned int amount);
	void	takeDamage(unsigned int amount);

	void	getAttack();
	void	getBeRepaired();
	void	getTakeDamage();

private:
	ScavTrap( void );
};

#endif