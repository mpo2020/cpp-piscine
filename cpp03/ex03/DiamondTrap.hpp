/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:05:21 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/25 16:22:28 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CPP
# define DIAMONDTRAP_CPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public virtual ScavTrap,  public virtual FragTrap {
private:
	std::string _name;
public:
	DiamondTrap();
	DiamondTrap(std:: string name);
	DiamondTrap(const DiamondTrap &original);
	~DiamondTrap();
	
	DiamondTrap &operator=(const DiamondTrap& argument);
	
	void attack(const std::string& target);
	void whoAmI();
};


#endif