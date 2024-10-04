/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:59:05 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/03 08:02:08 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::n_frac = 8;

Fixed ::Fixed():store_fp(0)
{
    std::cout<< "Default constructor called"<<std::endl;
}

Fixed ::Fixed(const Fixed &copy)
{
    std::cout<< "copy constructor called"<<std::endl;
    *this=copy;
}

Fixed ::~Fixed()
{
    std::cout<<"Destructor called"<< std::endl;
}

int Fixed :: getRawBits( void ) const
{
    std::cout << "getRawBits member function called"<<std:: endl;
    return (this->store_fp);
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &other)
        this->store_fp = other.getRawBits();

    return *this;
}
void Fixed :: setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->store_fp = raw;
}