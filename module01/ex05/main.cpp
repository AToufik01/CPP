/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:44:24 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/02 15:31:36 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main()
{
    Harl k;
    k.complain("DEBUG"); 
    k.complain("INFO");
    k.complain("WARNING");
    k.complain("ERROR");
    
    return 0;
}
