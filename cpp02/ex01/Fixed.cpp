/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:31:50 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/17 14:01:03 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	this->_fixedPointNumber = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integerNumber)
{
	int fixed = roundf(integerNumber * (1 << this->_fractionalBit));
	this->_fixedPointNumber = fixed;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatNumber)
{
	int fixed = roundf((float)floatNumber * (1 << this->_fractionalBit));
	this->_fixedPointNumber = fixed;
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& fixedOriginal)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedOriginal;
}


Fixed &Fixed::operator=(const Fixed& argument)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointNumber = argument._fixedPointNumber;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& argument)
{
	os  << argument.toFloat();
	return (os);
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

float Fixed::toFloat( void ) const 
{
	float result;
	result = (float)this->_fixedPointNumber / float(1 << this->_fractionalBit);
	return (result);
}

int Fixed::toInt( void ) const	
{
	int result;
	result = this->_fixedPointNumber >> this->_fractionalBit;
	return (result);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}