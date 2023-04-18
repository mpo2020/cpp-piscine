/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 08:37:24 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/18 14:41:49 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

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
		void printdata(int i);
		//~Contact();
};



#endif