/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:27:28 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/19 15:46:47 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
#include "Contact.hpp"

class PhoneBook{
	private:
		Contact cont[8];
		int		numberContacts;
	public:
		void add(int i);
		PhoneBook();
		void search(int i);
		int howMuchContacts();
		void printContact(int i);
};

#endif