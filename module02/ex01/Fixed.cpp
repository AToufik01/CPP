/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 08:05:23 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/03 10:06:22 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::n_frac = 8;
double ft_pow_2(int n)
{
    int result;
    if (n == 0)
        return (1);
    result = 1;
    while (n)
    {
        result *=2;
        n--;
    }
    return (result);
}
Fixed :: Fixed()
{
    std :: cout << "Default constructor called" << std :: endl;
}

Fixed :: ~Fixed()
{
    std :: cout << "Destructor called" << std :: endl;
}

Fixed :: Fixed(const int nbr)
{
    this->store_fp = nbr * ft_pow_2(this->n_frac);
     std :: cout << "Int constructor called" << std :: endl;
}

Fixed :: Fixed(const float nbr)
{
    this->store_fp = nbr * ft_pow_2( this->n_frac);
    std :: cout << "Float constructor called" << std :: endl;
}

Fixed ::Fixed(const Fixed &copy)
{
    std::cout<< "copy constructor called"<<std::endl;
    *this=copy;
}

int Fixed :: getRawBits( void ) const
{
    return (this->store_fp);
}

Fixed& Fixed:: operator=(const Fixed& other)
{
    std :: cout << "Copy assignment operator called"<<std::endl;
    
    if (this != &other)
        this->store_fp = other.getRawBits();
    return (*this);
}
int Fixed:: toInt( void ) const
{
    return this->store_fp / ft_pow_2(this->n_frac);
}
float Fixed:: toFloat( void ) const
{
    return this->store_fp / ft_pow_2(this->n_frac);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &fixed)
{
	return (os << fixed.toFloat());
}