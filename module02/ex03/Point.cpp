/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:19:31 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/04 18:16:04 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point ::Point():_x(0),_y(0)
{
    
}

Point :: Point(const float x,const float y) :_x(x),_y(y)
{

}

Point :: Point(const Point &copy): _x(copy._x), _y(copy._y)
{
    // *this = copy;
}

// Point& Point::operator=(const Point &other);
// {
//     if(this != &other)
//     {
//         this->_x = other._x;
//         this->_y = other._y;
//     }
//     return (*this);
// }

Point :: ~Point()
{

}