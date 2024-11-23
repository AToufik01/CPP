/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:31:08 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/22 19:15:31 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Data.hpp"

Data::Data()
{

}
Data::Data(std::string name,int id):_name(name),_id(id)
{

}

Data::~Data()
{

}

std::string Data::getName() const
{
    return (this->_name);
}

void   Data:: setName(std::string name)
{
    this->_name = name;
}

int Data::getId() const
{
    return (this->_id);
}

void   Data:: setId(int id)
{
    this->_id = id;
}