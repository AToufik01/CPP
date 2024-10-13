/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:15:38 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/13 20:19:17 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main()
{
    PhoneBook ph_book;
    std::string input;
    ph_book.set_n(0);
    while (1)
    {
        std:: cout << "entre input : ";
        if(!getline(std::cin,input))
            break;
        if (input == "ADD")
            ph_book.ft_add_contact();
        else if (input == "SEARCH")
            ph_book.ft_search_contact();
        else if  (input=="EXIT")
            break;
    }
    return(0);
}