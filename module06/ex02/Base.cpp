/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:31:51 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/22 23:48:12 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{

}

Base * generate(void)
{
    srand(time(0));
    int ran = rand() % 3;
    if (ran == 0)
        return new A();
    else if (ran == 1)
        return new B();
    else
        return new C();
    
}

void identify(Base* p)
{
    if (dynamic_cast <A*>(p))
        std::cout<<"A"<<std::endl;
    else if (dynamic_cast <B*>(p))
        std::cout<<"B"<<std::endl;
    else if (dynamic_cast <C*>(p))
        std::cout<<"C"<<std::endl;
    else
        std::cout<<"Unknown type"<<std::endl;
}

void identify(Base& p)
{
    try 
    {
        A& a = dynamic_cast<A&>(p); // Use the result
        (void)a;                   // Avoid unused variable warning
        std::cout << "A" << std::endl;
        return;
    }
    catch (...) {}

    try
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
        return;
    }
    catch (...) {}

    try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
        return;
    }
    catch (...) {}
}
