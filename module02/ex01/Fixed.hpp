/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 07:54:58 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/03 09:56:42 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include<iostream>
#include<cmath>

class Fixed
{
    private:
        int store_fp;
        static const int n_frac; // number of fractional bits
    public:
        Fixed();
        Fixed(const int nbr);
        Fixed(const float nbr);
        Fixed(const Fixed &copy);
        ~Fixed();
        Fixed& operator=(const Fixed& other);
        int getRawBits( void ) const;
        float toFloat( void ) const;
        int toInt( void ) const;
};
std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);
double ft_pow_2(int n);
#endif