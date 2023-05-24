/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 07:33:31 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/24 10:21:25 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CPP
# define SCAVTRAP_CPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std:: string name);
	ScavTrap(const ScavTrap &original);
	~ScavTrap();
	
	ScavTrap &operator=(const ScavTrap& argument);
	
	void attack(const std::string& target);
	void guardGate();
};

#endif