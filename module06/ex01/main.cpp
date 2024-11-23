/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:47:11 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/22 19:16:30 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"

int main()
{
    std::string str = "hasssan";
    Data originalData(str,12);
    std::cout <<"address originalData = "<<&originalData<<std::endl;

    uintptr_t serialized = Serializer:: serialize(&originalData);
    std::cout << "Serialized uintptr_t: " << serialized << '\n';

    Data* deserializedData = Serializer::deserialize(serialized);
    std::cout <<"address deserializedData = "<<deserializedData<<std::endl;
    std::cout << "Deserialized Data: ID = " << deserializedData->getId()
              << ", Name = " << deserializedData->getName()<< '\n';

    return 0;
}