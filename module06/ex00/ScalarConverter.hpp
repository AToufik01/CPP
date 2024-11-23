/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:31:10 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/21 15:45:36 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
class ScalarConverter
{
    ScalarConverter();
    ~ScalarConverter();
    public:
        static void convert(std::string &str);
};

bool check_intger(std::string str);
#endif