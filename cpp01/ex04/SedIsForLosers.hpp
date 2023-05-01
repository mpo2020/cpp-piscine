/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedIsForLosers.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:01:17 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/28 14:08:08 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDISFORLOSERS_HPP
#define SEDISFORLOSERS_HPP

#include <iostream>
#include <fstream>
#include <unistd.h>

bool 		validation(char **argv, std::string fileContent, std::string firstArgument);
std::string open_file(std::string file);
void 		writeFile(std::string file, std::string modifiedFile);
std::string findReplaceText(std::string fileContent, std::string firstArgument, std::string secondArgumen, int &start);

#endif