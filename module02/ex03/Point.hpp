/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:16:43 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/04 18:31:03 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include"Fixed.hpp"

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;
    public:
        Point();
        ~Point();
        Point(const float x,const float y);
        Point(const Point &copy);
        Fixed getX() const { return _x; }
        Fixed getY() const { return _y; }
        // Point &operator=(const Point &other);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);



#endif