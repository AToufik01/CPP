/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:01:13 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/13 18:15:04 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNbr;
    std::string _deskest;
public:
    void setfirstname(std::string str);
    void setlastname(std::string str);
    void setnickname(std::string str);
    void setphonenbr(std::string str);
    void setderkest(std::string str);
    std::string getfirstname(void);
    std::string getlastname(void);
    std::string getnickname(void);
    std::string getphonenbr(void);
    std::string getderkest(void);
};


#endif