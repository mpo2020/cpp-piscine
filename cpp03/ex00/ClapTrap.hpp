/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:03:21 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/23 15:47:51 by mpolisse         ###   ########.fr       */
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
	ClapTrap();
	ClapTrap(std:: string name);
	ClapTrap(ClapTrap& original);
	~ClapTrap();
	
	std::string getName();
	int getHitPoint();
	int getEnergyPoints();
	int getAttackDamage();

	void setName(std::string name);
	void setHitPoint(int amount);
	void setEnergyPoints(int amount);
	void setattackDamage(int amount);

	
	ClapTrap operator=(const ClapTrap& argument);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	void status();
};

#endif