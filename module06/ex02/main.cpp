/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 22:47:20 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/22 23:53:18 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"
#include"A.hpp"
#include"B.hpp"
#include"C.hpp"

int main()
{
    Base *b ;
    A a;
    B b1;
    C c;
    Base &w =b1;
    b = generate();
    identify(&w);
    return (0);
}