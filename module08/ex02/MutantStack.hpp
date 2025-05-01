/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:52:38 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/25 15:10:13 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <iostream>
#include<stack>
template <class T>class MutantStack:public std::stack<T> 
{
    public:
        // std::stack<T>::iterator it;
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(){return c.begin();}
        iterator end(){return c.end();}

};
#endif