/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:30:38 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/13 17:38:23 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void ft_uprcase(char **str, int count)
{
    int i = 1;
    while (i < count)
    {
        int j = 0;
        while (str[i][j])
        {
            if (str[i][j] >= 'a' && str[i][j] <= 'z')
                std::cout << char (str[i][j] - 32);
            else
               std:: cout << str[i][j];
            j++;
        }
        if (i < count - 1)
           std:: cout << ' ';
        i++;
    }
    std:: cout << std::endl;
}

int main(int arc ,char *arv[])
{
    if (arc == 1)
        std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    else
       ft_uprcase(arv, arc);
    return (0);
}