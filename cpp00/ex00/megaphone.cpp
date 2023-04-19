/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:17:14 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/19 18:51:42 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

std::string upperString(std::string str)
{
	int len = str.length();
	
	for (int i = 0; i < len; i++)
	{
		str[i] = std::toupper(str[i]);
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "\033[1;31m* LOUD AND UNBEARABLE FEEDBACK NOISE *\033[0m" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		std::cout << "\033[1;31m" << upperString(argv[i]) << "\033[0";
		if(i == argc -1)
			std::cout << std::endl;
	}

	return (0);
}