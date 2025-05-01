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

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
    (void)copy;
}

ScalarConverter&ScalarConverter:: operator=(const ScalarConverter& other)
{
    (void)other;
    return *this;
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

void   handleInputChar(std::string  &str)
{
    std::cout<<"char: " <<str<<std::endl;
    std::cout<<"int: " <<static_cast<int>(str[0])<<std::endl;
    std::cout<<"float: " <<static_cast<float>(str[0])<<".0f"<<std::endl;
    std::cout<<"double: " <<static_cast<double>(str[0])<<".0"<<std::endl;    
}
void handleInputInt(std::string  &str)
{
    long long var = std::atol(str.c_str());
    if(!isprint(var))
        std::cout<<"char: Non displayable"<<std::endl;
    else
        std::cout<<"char: " <<static_cast<char>(var)<<std::endl;
    if ((var > 0&& var >std::numeric_limits<int>::max())||(var < 0&& var <std::numeric_limits<int>::min())) {
        std::cout<<"int: impossible"<<std::endl;
    } else {
        std::cout<<"int: " <<static_cast<int>(var)<<std::endl;
    }
    std::cout<<"float: " <<static_cast<float>(var)<<".0f"<<std::endl;
    std::cout<<"double: " <<static_cast<double>(var)<<".0"<<std::endl;
}
std::string handleInputFloat(std::string  &str)
{
    char* endptr;
    double value = std::strtod(str.c_str(), &endptr);
    if (*endptr == '\0') {
        return "DOUBLE";
    }
    if (endptr==str.c_str()) {
        return "NOTVALID";
    }
    float var = std::atof(str.c_str());
    try
    {
        if (std::isnan(value) || std::isinf(value))
            throw 1;
        if(!isprint(value))
            std::cout<<"char: Non displayable"<<std::endl;
        else
            std::cout<<"char: " <<static_cast<char>(value)<<std::endl;
        if ((var > 0&& var >std::numeric_limits<int>::max())||(var < 0&& var <std::numeric_limits<int>::min())) {
            std::cout<<"char: impossible"<<std::endl;
        } else {
            std::cout<<"int: " <<static_cast<int>(value)<<std::endl; 
        }
    }
    catch(int)
    {
        std::cout<<"char: impossible"<<std::endl;
        std::cout<<"int: impossible"<<std::endl;
    }
    if (std::isinf(var)){
        if(var>0)
            std::cout<<"float: +inff"<<std::endl;
        else
            std::cout<<"float: -inff"<<std::endl;
    } else {
        std::cout<<"float: " <<var<<"f"<<std::endl;
    }
    double var1 = static_cast<double>(var);
    
    if (std::isinf(var1)){
        if(var1>0)
            std::cout<<"float: +inf"<<std::endl;
        else
            std::cout<<"float: -inf"<<std::endl;
    } else {
        std::cout<<"double: " <<static_cast<double>(var)<<std::endl;
    }
    return endptr;
}
void handleInputDouble(std::string  &str)
{
    char* endptr;
    double value = std::strtod(str.c_str(), &endptr);
    try
    {
        if ((std::isnan(value) || std::isinf(value)))
            throw 1;
        if(!isprint(value))
            std::cout<<"char: Non displayable"<<std::endl;
        else
            std::cout<<"char: " <<static_cast<char>(value)<<std::endl;
        if ((value > 0&& value >std::numeric_limits<int>::max())||(value < 0&& value <std::numeric_limits<int>::min())) {
            std::cout<<"char: impossible"<<std::endl;
        } else {
            std::cout<<"int: " <<static_cast<int>(value)<<std::endl; 
        }
    }
    catch(int)
    {
        std::cout<<"char: impossible"<<std::endl;
        std::cout<<"int: impossible"<<std::endl;
    }
    if (std::isinf(value)) {
        if (value > 0)
            std::cout<<"float: +inff"<<std::endl;
        else
            std::cout<<"float: -inff"<<std::endl;
    }
    else
        std::cout<<"float: " <<static_cast<float>(value)<<"f"<<std::endl;
    if (std::isinf(value)) {
        if (value > 0)
            std::cout<<"float: +inf"<<std::endl;
        else
            std::cout<<"float: -inf"<<std::endl;
    }
    else
        std::cout<<"double: " <<value<<std::endl;
}

bool checkArgement(std::string  &str)
{
    int point = 0;;
    int charflaot = 0;
    if (str=="NAN"||str=="nan")
        return true;
    int i = 0;
    if (str[i]=='-' || str[i]=='+')
        i++;
    while (str[i])
    {
        if(!isnumber(str[i])) {
            if (str[i]=='f')
                charflaot++;
            else
                point++;
        }
        i++;
    }
    if ((point!=0&&point!=1)||(charflaot!=0&&charflaot!=1))
        return false;
    return true;
}
void ScalarConverter::convert(std::string  &str)
{
    if (checkArgement(str)==false)
        return ;
    if(str.length() == 1 && !isdigit(str[0])) {
        handleInputChar(str);
    }
    else if(check_intger(str)) {
        handleInputInt(str);
    }
    else
    {
        std::string endstr;
        endstr = handleInputFloat(str);
        if (endstr =="NOTVALID" || endstr == "f")
            return ;
        else if (endstr == "DOUBLE") {
            handleInputDouble(str);
        }
    }
}

