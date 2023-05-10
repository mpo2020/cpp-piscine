/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:31:50 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/10 13:42:50 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	this->_fixedPointNumber = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixedOriginal){
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointNumber = fixedOriginal.getRawBits();
}

Fixed Fixed::operator=(const Fixed& argument)
{	
	std::cout << "A copy assignment operator overload." << std::endl;
	this->_fixedPointNumber = argument._fixedPointNumber;
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointNumber);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointNumber = raw;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}