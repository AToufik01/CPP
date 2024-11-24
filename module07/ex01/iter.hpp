/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:38:30 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/23 21:06:54 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include<iostream>

template <typename T,typename FUN> void iter(T *address_arr,int len,FUN func)
{
    for (int i = 0; i < len; i++)
        func(address_arr[i]);
}

#endif