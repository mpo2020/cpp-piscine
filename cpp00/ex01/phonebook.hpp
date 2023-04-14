/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:27:28 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/14 20:15:45 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class PhoneBook {
	
};

class Contact {
		std::string firstName;
		std::string	lastName;
		std::string	nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		int date;
		int id;
	void add(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->nickName = nickName;
		this->phoneNumber = phoneNumber;
		this->darkestSecret = phoneNumber;
	}
	
};