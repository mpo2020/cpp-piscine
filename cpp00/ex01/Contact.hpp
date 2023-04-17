/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 08:37:24 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/17 17:56:31 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
#include "Contact.hpp"

class Contact {
	private:
		std::string firstName;
		std::string	lastName;
		std::string	nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Contact(void);
		Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
		void printdata();
		//~Contact();
		

};



#endif