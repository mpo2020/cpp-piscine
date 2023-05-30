/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:53:36 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/30 08:32:51 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public AAnimal{
private:
	Brain *_brain;
public:
	Cat();
	Cat(const Cat& original);
	Cat& operator=(const Cat& other);
	~Cat();

	void makeSound() const;
};

#endif