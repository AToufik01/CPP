/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:25:45 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/09 10:06:13 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
void f()
{
    system("leaks Animals");
}
int main()
{
    const int arraySize = 6;
    Animal* animals[arraySize];
    atexit(f);
    for (int i = 0; i < arraySize / 2; ++i)
        animals[i] = new Dog();

    for (int i = arraySize / 2; i < arraySize; ++i)
        animals[i] = new Cat();

    for (int i = 0; i < arraySize; ++i)
        animals[i]->makeSound();

    for (int i = 0; i < arraySize; ++i) 
        delete animals[i]; 

    return 0;
}


// static linked 