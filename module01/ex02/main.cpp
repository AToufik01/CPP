/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:23:54 by ataoufik          #+#    #+#             */
/*   Updated: 2024/09/29 22:39:04 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout <<"memory address of the string variable : "<< &str << std::endl;  
    std::cout <<"memory address held by stringPTR : "<<stringPTR << std::endl;
    std::cout <<"memory address held by stringREF : "<<&stringREF << std::endl;

    std::cout <<"string variable : "<< str << std::endl;
    std::cout <<"stringPTR : "<< *stringPTR << std::endl;
    std::cout <<"stringREF : "<<stringREF << std::endl;

    return (0);
}
