/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:44:49 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/02 17:28:36 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl:: debug(void)
{
    std:: cout <<"[ DEBUG ] ";
    std::cout << "I love having extra bacon for my ";
    std::cout<<"7XL-double-cheese-triple-pickle-specialketchup";
    std::cout << " burger. I really do!"<< std::endl;
}

void    Harl:: info(void)
{
    std:: cout <<"[ INFO ] ";
    std:: cout << "I cannot believe adding extra bacon costs more money.";
    std::cout << " You didn’t putenough bacon in my burger!";
    std::cout << " If you did, I wouldn’t be asking for more!"<<std::endl;
}

void    Harl:: warning(void)
{
    std:: cout <<"[ WARNING ] ";
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years whereas you started working here since last month."<< std::endl;
}

void    Harl:: error(void)
{
    std:: cout <<"[ ERROR ] ";
    std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl;
}

// void  Harl:: complain( std::string level )
// {
//     void (Harl::*ptrPrint)() = &Harl::debug;
//     void (Harl::*ptrPrint1)() = &Harl::info;
//     void (Harl::*ptrPrint2)() = &Harl::error;
//     void (Harl::*ptrPrint3)() = &Harl::warning;
    
//     if (level == "DEBUG")
//         (this->*ptrPrint)();
//     else if (level == "INFO")
//         (this->*ptrPrint1)();
//     else if (level == "WARNING")
//         (this->*ptrPrint3)();
//     else if (level == "ERROR")
//         (this->*ptrPrint2)();
// }

void  Harl:: complain( std::string level )
{
    void (Harl::*ptrPrint[4])() ={ &Harl::debug,&Harl::info,&Harl::error,&Harl::warning};
    std::string str[] = { "DEBUG","INFO","WARNING","ERROR"};
    for(int i = 0;i < 4;i++)
    {
        if(str[i] == level)
        {
            (this->*ptrPrint[i])();
            return ;
        }
    }
}