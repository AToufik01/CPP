/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:06:07 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/01 22:39:06 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace_line.hpp"

string check_line_and_replace(string line,string s1,string s2)
{
    size_t i;
    i = 0;
    string result;
    while (i < line.length())
    {
        while (i < line.length() && (line[i] != s1[0] || line[i] != s1[0]))
        {
            result+=line[i];
            i++;
        }
        size_t start;
        start = i;
        string str = line.substr(start, s1.length());
        if (str == s1)
            result += s2;
        else
            result += str;
        i += str.length();
    }
    return result;
}

