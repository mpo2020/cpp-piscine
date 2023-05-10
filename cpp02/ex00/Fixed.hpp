/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:31:53 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/10 13:42:35 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed {

private:
	int _fixedPointNumber;
	const static int _fractionalBit = 8;

public:
	Fixed();
	Fixed(const Fixed& fixedOriginal);
	Fixed operator=(const Fixed& argument);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};