/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:05:10 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/22 18:30:50 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{

}
Serializer::Serializer(const Serializer &copy)
{
    (void)copy;
}

Serializer &Serializer::operator=(const Serializer &other)
{
    (void)other;
    return *this;

}

Serializer::~Serializer()
{
    
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}