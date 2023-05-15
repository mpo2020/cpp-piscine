/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:31:50 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/15 19:32:23 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	this->_fixedPointNumber = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integerNumber){
	this->_fixedPointNumber = 0;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatNumber){
	this->_fixedPointNumber = 0;
	std::cout << "Float constructor called" << std::endl;
}


Fixed::Fixed( Fixed& fixedOriginal){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedOriginal;
}


Fixed &Fixed::operator=(const Fixed& argument)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointNumber = argument.getRawBits();
	return (*this);
}

std::ostream &Fixed::operator<<(std::ostream &argument, float fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointNumber = argument.getRawBits();
	return ();
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

float Fixed::toFloat( void ) const {
	
}

int Fixed::toInt( void ) const{
	
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}