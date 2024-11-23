/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:06:49 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/20 17:56:40 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

int main(int arc,char**arv)
{
    (void)arc;
    if (arc!=2)
        return (0);
    std::string str;
    str = arv[1];
    ScalarConverter::convert(str);
    return(0);
}