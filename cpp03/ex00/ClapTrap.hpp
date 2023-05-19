/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:03:21 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/19 15:32:26 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP
# define CLAPTRAP_CPP

#include <iostream>

class ClapTrap {
private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
public:
	ClapTrap(std:: string name);
	ClapTrap(ClapTrap& original);
	~ClapTrap();
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif