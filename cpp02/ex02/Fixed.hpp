/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:31:53 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/17 17:50:56 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath> 

class Fixed {

private:
	int _fixedPointNumber;
	const static int _fractionalBit = 8;

public:
	Fixed();
	Fixed(const Fixed& fixedOriginal);
	Fixed(const int integerNumber);
	Fixed(const float floatNumber);
	Fixed &operator=(const Fixed& argument);
	Fixed &operator+(const Fixed& argument);
	Fixed &operator-(const Fixed& argument);
	Fixed &operator*(const Fixed& argument);
	Fixed &operator/(const Fixed& argument);

	bool operator>(const Fixed& argument);
	bool operator<(const Fixed& argument);
	bool operator>=(const Fixed& argument);
	bool operator<=(const Fixed& argument);
	bool operator==(const Fixed& argument);
	bool operator!=(const Fixed& argument);

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	static const Fixed &max(const Fixed  &argument1, const Fixed &argument2);
	static const Fixed &max( Fixed  &argument1,  Fixed &argument2);
	static const Fixed &min(const Fixed  &argument1, const Fixed &argument2);
	static const Fixed &min( Fixed  &argument1,  Fixed &argument2);
	
	
	friend std::ostream& operator<<(std::ostream& os, const Fixed& objeto);
	~Fixed();
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};