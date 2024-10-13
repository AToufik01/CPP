/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:23:03 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/13 19:58:54 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
private:
    int cont;
    int _n;
    Contact tab[8];
public:
    void ft_add_contact(void);
    void ft_search_contact(void);
    void ft_wrcontact(Contact c, int i);
    void ft_data_contact(Contact c);
    void set_n(int i);

};

std::string valid_input(std::string str,int i);
int check_input_nbr(std::string input);
int check_input(std::string input);
int    check_valid_index(std::string input,int cont);
#endif