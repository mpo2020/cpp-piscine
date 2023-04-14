/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:17:14 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/14 18:17:15 by mpolisse         ###   ########.fr       */
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
	for (int i = 1; i < argc; i++)
	{
		std::cout << upperString(argv[i]);
		if(i == argc -1)
			std::cout << std::endl;
	}

	return (0);
}