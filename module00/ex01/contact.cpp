/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:15:56 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/13 18:25:54 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact:: setfirstname(std::string str)
{
    this->_firstName = str;
}
void Contact:: setlastname(std::string str)
{
    this->_lastName=str;
}
void Contact:: setnickname(std::string str)
{
    this->_nickName=str;
}
void Contact:: setphonenbr(std::string str)
{
    this->_phoneNbr=str;
}
void Contact:: setderkest(std::string str)
{
    this->_deskest=str;
}
std::string Contact:: getfirstname(void)
{
    return (this->_firstName);
}

std::string Contact::getlastname(void)
{
    return(this->_lastName);
}
std::string Contact::getnickname(void)
{
    return(this->_nickName);    
}

std::string Contact::getphonenbr(void)
{
    return(this->_phoneNbr);
}
std::string Contact::getderkest(void)
{
    return(this->_deskest);
}