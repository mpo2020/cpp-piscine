/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 07:33:31 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/24 13:43:29 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CPP
# define FRAGTRAP_CPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(std:: string name);
	FragTrap(const FragTrap &original);
	~FragTrap();
	
	FragTrap &operator=(const FragTrap& argument);
	
	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif