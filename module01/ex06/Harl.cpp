/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:42:15 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/02 17:41:26 by ataoufik         ###   ########.fr       */
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

void  Harl:: complain( std::string level )
{
    void (Harl::*ptrPrint[4])() ={ &Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    std::string str[] = { "DEBUG","INFO","WARNING","ERROR"};
    int i = 0;
    while(i < 4)
    {
        if(str[i] == level)
            break; ;
        i++;
    }
    switch (i)
    {
        case 0:
            (this->*ptrPrint[0])();
        case 1:
            (this->*ptrPrint[1])();
        case 2:
            (this->*ptrPrint[2])();
        case 3:
            (this->*ptrPrint[3])();
            break;
        default:
            std::cout << "Invalid log level: " << level << std::endl;
            break;
    }
}
