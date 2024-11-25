/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:04:27 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/24 15:31:29 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include<iostream>
#include <vector>
#include <algorithm>
class Span
{
    private:
        unsigned int N;
        std::vector <int> _data;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &copy);
        Span &operator=(const Span &other);
        void  addNumber(int n);
        int longestSpan();
        int shortestSpan();
        ~Span();
};

#endif