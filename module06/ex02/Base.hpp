/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:24:37 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/22 21:26:42 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include<iostream>

class Base
{
    public:
        virtual ~Base();
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif