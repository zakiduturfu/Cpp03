/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:16:28 by zlemery           #+#    #+#             */
/*   Updated: 2024/01/16 13:56:45 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap( const std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap();

	void	guardGate();
	void	attack( const std::string& target );
	void	beRepaired( unsigned int amount);
	void	takeDamage(unsigned int amount);

	void	highFivesGuys( void );
	
private:
	FragTrap( void );
};

#endif