/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:13:09 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/03 18:09:12 by ataoufik         ###   ########.fr       */
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
Fixed :: Fixed() :store_fp(0)
{

}
Fixed :: Fixed(const int nbr)
{
    this->store_fp = nbr * ft_pow_2(this->n_frac);
}
Fixed :: Fixed(const float nbr)
{
    this->store_fp = nbr * ft_pow_2( this->n_frac);
}

Fixed ::Fixed(const Fixed &copy)
{
    *this=copy;
}

Fixed :: ~Fixed()
{

    
}
int Fixed :: getRawBits( void ) const
{
    return (this->store_fp);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &fixed)
{
	return (os << fixed.toFloat());
}

int Fixed:: toInt( void ) const
{
    return this->store_fp / ft_pow_2(this->n_frac);
}

float Fixed:: toFloat( void ) const
{
    return this->store_fp / ft_pow_2(this->n_frac);
}


Fixed Fixed::operator++()//pre-increment
{
    this->store_fp +=1;
    return *this;
}

Fixed Fixed:: operator++( int ) //post-increment
{
    Fixed tmp = *this;
    this->store_fp +=1;
    return (tmp);
}

Fixed Fixed:: operator--( int )//post-increment
{
    Fixed tmp = *this;
    this->store_fp -= 1;
    return (tmp);

}

Fixed Fixed:: operator--()//pre-increment
{
    this->store_fp -= 1;
    return (*this);
}
/////////////####################### arithmetic operators #########
Fixed Fixed::operator*(const Fixed& other)
{
    return Fixed(static_cast<float>(this->store_fp/(float)ft_pow_2( this->n_frac) * other.store_fp/(float)ft_pow_2( this->n_frac)));
}

Fixed Fixed::operator-(const Fixed& other)
{
        return Fixed(static_cast<float>(this->store_fp/(float)ft_pow_2( this->n_frac) - other.store_fp/(float)ft_pow_2( this->n_frac)));

}

Fixed Fixed::operator+(const Fixed& other)
{
        return Fixed(static_cast<float>(this->store_fp/(float)ft_pow_2( this->n_frac) + other.store_fp/(float)ft_pow_2( this->n_frac)));

}

Fixed Fixed::operator/(const Fixed& other)
{
    if (other.store_fp==0)
    {
        std::cerr<<"undefined"<<std::endl;
        return Fixed();
    }
    return Fixed(static_cast<float>((this->store_fp/(float)ft_pow_2( this->n_frac)) / (other.store_fp/(float)ft_pow_2( this->n_frac))));
}
//#################################

/////////////####################### comparison operators  ########

bool Fixed :: operator>(const Fixed& other)
{
    return(this->store_fp > other.store_fp);
}

bool Fixed :: operator<(const Fixed& other)
{
    return(this->store_fp < other.store_fp);
}

bool Fixed :: operator>=(const Fixed& other)
{
    return(this->store_fp >= other.store_fp);
}

bool Fixed :: operator<=(const Fixed& other)
{
    return(this->store_fp <= other.store_fp);
}
bool Fixed :: operator==(const Fixed& other)
{
    return(this->store_fp == other.store_fp);
}

bool Fixed :: operator!=(const Fixed& other)
{
    return(this->store_fp != other.store_fp);
}
////////############################################

/////////////####################### max min  ########


 Fixed& Fixed:: min(Fixed& a, Fixed& b)
{
    if(a.store_fp>b.store_fp)
        return (b);
    else
        return (a);
}

const Fixed& Fixed:: min(const Fixed& a, const Fixed& b)
{
    if(a.store_fp>b.store_fp)
        return (b);
    else
        return (a);
}


Fixed& Fixed:: max(Fixed& a, Fixed& b)
{
    if(a.store_fp>b.store_fp)
        return (a);
    else
        return (b);
}

const Fixed& Fixed:: max(const Fixed& a, const Fixed& b)
{
   if(a.store_fp>b.store_fp)
        return (a);
    else
        return (b);
}

////////############################################

