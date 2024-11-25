/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:35:12 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/24 12:53:47 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"

int main()
{
    
    // Testing with std::array
    std::cout<<"Testing with std::array"<<std::endl;
    std::array<int ,3> a = {1,2,3};
    easyfind(a, 3);
    easyfind(a, 20);
    // Testing with std::vector
    std::cout<<"Testing with std::vector"<<std::endl;
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    easyfind(vec, 20); // Found
    easyfind(vec, 50); // Not found

    // Testing with std::deque
    std::cout<<"Testing with std::deque"<<std::endl;
    std::deque<int> deq;
    deq.push_back(15);
    deq.push_back(25);
    deq.push_back(35);
    easyfind(deq, 25); // Found
    easyfind(deq, 55); // Not found

    // Testing with std::list
    std::cout<<"Testing with std::list"<<std::endl;
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(10);
    lst.push_back(15);
    easyfind(lst, 10); // Found
    easyfind(lst, 50); // Not found

    return 0;
}