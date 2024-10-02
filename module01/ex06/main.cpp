/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:41:52 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/02 16:50:32 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int arc, char const *arv[])
{
    if (arc!=2)
        std::cout << "lslslsl"<<std::endl;
    else
    {
        Harl k;
        k.complain(arv[1]);
    }
    return 0;
}
