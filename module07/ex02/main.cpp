/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 07:54:00 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/24 09:21:56 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include"Array.hpp"

#define MAX_VAL 10

std::string generateRandomWord(int length) {
    std::string word;
    for (int i = 0; i < length; ++i) {
        char c = 'a' + rand() % 26;
        word += c;
    }
    return word;
}

int main(int, char**)
{

    Array<std::string> numbers(MAX_VAL);
    std::string* mirror = new std::string[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        std :: string word = generateRandomWord(i+1);
        numbers[i] = word;
        mirror[i] = word;
    }

    Array<std::string> tmp = numbers;
    Array<std::string> test(tmp);

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != test[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    try
    {
        numbers[2] = "----------> index 2  <-------------";
        numbers[MAX_VAL-1] = "---------> index MAX_VAL - 1 <-------------";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
       std::cout <<  numbers[i] <<std::endl;
    }
    delete [] mirror;
    
    return 0;
}