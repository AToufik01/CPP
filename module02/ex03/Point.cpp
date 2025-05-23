/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:19:31 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/05 20:46:46 by ataoufik         ###   ########.fr       */
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
    
}

Point :: ~Point()
{

}