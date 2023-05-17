/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:31:50 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/17 17:52:20 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	this->_fixedPointNumber = 0;
}

Fixed::Fixed(const int integerNumber)
{
	int fixed = roundf(integerNumber * (1 << this->_fractionalBit));
	this->_fixedPointNumber = fixed;
}

Fixed::Fixed(const float floatNumber)
{
	int fixed = roundf((float)floatNumber * (1 << this->_fractionalBit));
	this->_fixedPointNumber = fixed;
}

Fixed::Fixed( const Fixed& fixedOriginal)
{
	*this = fixedOriginal;
}


Fixed &Fixed::operator=(const Fixed& argument)
{
	this->_fixedPointNumber = argument._fixedPointNumber;
	return (*this);
}


Fixed &Fixed::operator+(const Fixed& argument)
{
	this->_fixedPointNumber = this->_fixedPointNumber + argument._fixedPointNumber;
	return (*this);
}

Fixed &Fixed::operator-(const Fixed& argument)
{
	this->_fixedPointNumber = this->_fixedPointNumber - argument._fixedPointNumber;
	return (*this);
}

Fixed &Fixed::operator*(const Fixed& argument)
{
	this->_fixedPointNumber = (this->_fixedPointNumber * argument._fixedPointNumber) / (1 << argument._fractionalBit);
	return (*this);
}

Fixed &Fixed::operator/(const Fixed& argument)
{
	this->_fixedPointNumber = (this->_fixedPointNumber << _fractionalBit) / argument._fixedPointNumber;
	return (*this);
}

bool Fixed::operator>(const Fixed& argument)
{
	bool result;
	
	result = this->_fixedPointNumber > argument._fixedPointNumber;
	return (result);
}

bool Fixed::operator<(const Fixed& argument)
{
	bool result;
	
	result = this->_fixedPointNumber < argument._fixedPointNumber;
	return (result);
}

bool Fixed::operator>=(const Fixed& argument)
{
	bool result;
	
	result = this->_fixedPointNumber >= argument._fixedPointNumber;
	return (result);
}

bool Fixed::operator<=(const Fixed& argument)
{
	bool result;
	
	result = this->_fixedPointNumber <= argument._fixedPointNumber;
	return (result);
}

bool Fixed::operator==(const Fixed& argument)
{
	bool result;
	
	result = this->_fixedPointNumber == argument._fixedPointNumber;
	return (result);
}

bool Fixed::operator!=(const Fixed& argument)
{
	bool result;
	
	result = this->_fixedPointNumber != argument._fixedPointNumber;
	return (result);
}


Fixed &Fixed::operator++()
{
	this->_fixedPointNumber++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;
	tmp = *this;
	++this->_fixedPointNumber;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	this->_fixedPointNumber--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;
	tmp = *this;
	--this->_fixedPointNumber;
	return (tmp);
}

const Fixed &Fixed::max( Fixed &argument1,  Fixed &argument2)
{	
	if(argument1._fixedPointNumber < argument2._fixedPointNumber)
	{
		return(argument2);
	}
	else
	{
		return (argument1);
	}
}

const Fixed &Fixed::max(const Fixed &argument1, const Fixed &argument2)
{	
	if(argument1._fixedPointNumber < argument2._fixedPointNumber)
	{
		return(argument2);
	}
	else
	{
		return (argument1);
	}
}

const Fixed &Fixed::min( Fixed &argument1,  Fixed &argument2)
{	
	if(argument1._fixedPointNumber > argument2._fixedPointNumber)
	{
		return(argument2);
	}
	else
	{
		return (argument1);
	}
}

const Fixed &Fixed::min(const Fixed &argument1, const Fixed &argument2)
{	
	if(argument1._fixedPointNumber > argument2._fixedPointNumber)
	{
		return(argument2);
	}
	else
	{
		return (argument1);
	}
}

std::ostream& operator<<(std::ostream& os, const Fixed& argument)
{
	os  << argument.toFloat();
	return (os);
}

int Fixed::getRawBits( void ) const
{
	return (this->_fixedPointNumber);
}

void Fixed::setRawBits( int const raw )
{
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

Fixed::~Fixed()
{
}