/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:25:22 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/24 12:51:46 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include<array>
template <typename T> void easyfind(T conta ,int find)
{
    bool a = false;
    for (typename T::iterator it = conta.begin(); it != conta.end(); ++it)
    {
        if(*it==find)
        {
            std::cout <<"find"<<std::endl;
            a = true;
            break;
        }
    }
    if(a == false)
        std::cout << "Not found" << std::endl;
}
#endif