/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlemery <zlemery@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:33:29 by zlemery           #+#    #+#             */
/*   Updated: 2024/01/15 18:35:17 by zlemery          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Noir */
#define RED     "\033[31m"      /* Rouge */
#define GREEN   "\033[32m"      /* Vert */
#define YELLOW  "\033[33m"      /* Jaune */
#define BLUE    "\033[34m"      /* Bleu */


#include <iostream>

class ClapTrap
{
public:
	ClapTrap( const std::string name );
	ClapTrap( ClapTrap const & src);
	~ClapTrap();

	ClapTrap	& operator=( ClapTrap const & rhs );

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

protected:

	const std::string	_Name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage;	
};

#endif