/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:28:44 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/24 16:49:25 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{

}

Span::Span(unsigned int n) :N(n)
{

}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span &Span::operator=(const Span &other)
{
    if(this != &other)
    {
        this->N = other.N;
        this->_data = other._data;
    }
    return (*this);
}

Span::~Span()
{

}

void  Span::addNumber(int n)
{
    if(this->_data.size()>=this->N)
        throw std::out_of_range("out of range");
    this->_data.push_back(n);
}
void Span::addNumbers()
{
    std::srand(std::time(0)); 
    for(unsigned int i= 0 ;i<this->N;i++) {
        int val = rand()%INT_MAX;
        addNumber(val);
    }
}
int Span::longestSpan()
{
    if (this->N <2)
        throw std::logic_error("error");
    int minElement = *std::min_element(this->_data.begin(),this->_data.end());
    int maxElement = *std::max_element(this->_data.begin(),this->_data.end());
    return (maxElement - minElement);
}

int Span::shortestSpan()
{
    if (this->N <2)
        throw std::logic_error("error");
    std::vector <int >s = this->_data;
    std::sort(s.begin(),s.end());
    int shortest = INT_MAX;
    for (std::vector<int> ::iterator it = s.begin(); it < s.end(); it++)
    {
        if (it + 1 < s.end())
            shortest = std::min(shortest,*(it + 1) - *it);
    }
    return (shortest);
}
