/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:31:53 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/17 12:13:41 by mpolisse         ###   ########.fr       */
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
	friend std::ostream& operator<<(std::ostream& os, const Fixed& objeto);
	~Fixed();
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};