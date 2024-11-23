/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:07:33 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/21 15:45:22 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    
}

ScalarConverter::~ScalarConverter()
{
    
}

bool check_intger(std::string str)
{
    int i = 0;
    if (str[i]=='-' || str[i]=='+')
        i++;
    while (str[i])
    {
        if(!isdigit(str[i]))
            return false;
        i++;
    }
    return true;
}


void ScalarConverter::convert(std::string  &str)
{

    if(str.length() == 1 && !isdigit(str[0]))
    {
        std::cout<<"char: " <<str<<std::endl;
        std::cout<<"int: " <<static_cast<int>(str[0])<<std::endl;
        std::cout<<"float: " <<static_cast<float>(str[0])<<".0f"<<std::endl;
        std::cout<<"double: " <<static_cast<double>(str[0])<<".0"<<std::endl;
    }
    else if(check_intger(str)) 
    {
        int var = std::atoi(str.c_str());
        if(!isprint(var))
            std::cout<<"char: Non displayable"<<std::endl;
        else
            std::cout<<"char: " <<static_cast<char>(var)<<std::endl;
        std::cout<<"int: " <<var<<std::endl;
        std::cout<<"float: " <<static_cast<float>(var)<<".0f"<<std::endl;
        std::cout<<"double: " <<static_cast<double>(var)<<".0"<<std::endl;
    }
    else
    {
        char* endptr;
        double value = std::strtod(str.c_str(), &endptr);
        if (endptr==str.c_str())
            return;
        if (*endptr == 'f')
        {
            float var = std::atof(str.c_str());
            try
            {
                if (std::isnan(value) || std::isinf(value))
                    throw 1;
                if(!isprint(value))
                    std::cout<<"char: Non displayable"<<std::endl;
                else
                    std::cout<<"char: " <<static_cast<char>(value)<<std::endl;
                std::cout<<"int: " <<static_cast<int>(value)<<std::endl; 
            }
            catch(int)
            {
                std::cout<<"char: impossible"<<std::endl;
                std::cout<<"int: impossible"<<std::endl;
            }
            std::cout<<"float: " << std::fixed << std::setprecision(1)<<var<<"f"<<std::endl;
            std::cout<<"double: " <<static_cast<double>(var)<<""<<std::endl;
            return ;
        }
        try
        {
            if ((std::isnan(value) || std::isinf(value)) && *endptr =='\0')
                throw 1;
            if(!isprint(value))
                std::cout<<"char: Non displayable"<<std::endl;
            else
                std::cout<<"char: " <<static_cast<char>(value)<<std::endl;
            std::cout<<"int: " <<static_cast<int>(value)<<std::endl; 
        }
        catch(int)
        {
            std::cout<<"char: impossible"<<std::endl;
            std::cout<<"int: impossible"<<std::endl;
        }
        std::cout<<"float: " << std::fixed << std::setprecision(1)<<static_cast<float>(value)<<"f"<<std::endl;
        std::cout<<"double: " <<value<<std::endl;
    }
}

