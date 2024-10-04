/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:35:42 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/04 19:05:39 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {
//     float v1;
//     float v2;

//     float p_x = point.getX().toFloat();
//     float p_y = point.getY().toFloat();
//     v1 = a_x * (c_y - a_y) + (p_y - a_y)*(c_x - a_x) - p_x * (c_y - a_y) / (b_y - a_y)*(c_x - a_x) - (b_x - a_x)*(c_y - a_y);
//     v2 = p_y - a_y - v1*(b_y - a_y) / (c_y - a_y);

//     if (v1 > 0 && v2 > 0 && v1 + v2 < 1)
//         return true;
//     return false;
// }


float triangleArea(Point const a, Point const b, Point const c)
{
    
    float a_x = a.getX().toFloat();
    float a_y = a.getY().toFloat();
    float b_x = b.getX().toFloat();
    float b_y = b.getY().toFloat();
    float c_x = c.getX().toFloat();
    float c_y = c.getY().toFloat();
    return 0.5 * fabs(a_x * (b_y - c_y) + b_x * (c_y - a_y) + c_x * (a_y - b_y));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    float A_ABC = triangleArea(a, b, c);
    float A_ABP = triangleArea(a, b, point);
    float A_BCP = triangleArea(b, c, point);
    float A_CAP = triangleArea(c, a, point);

    return (A_ABC == A_ABP + A_BCP + A_CAP);
}