/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 07:46:52 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/24 09:32:09 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>

template <class T>
class Array
{
    private:
        T *_array;
        unsigned int _size;
    public:
        Array() {}
        Array(const Array &copy){
            if(copy._size>0)
            {
                this->_size = copy._size;
                this->_array = new T[this->_size];
                for (unsigned int i = 0; i < this->_size; i++)
                    this->_array[i] = copy._array[i];  
            }
            else
                this->_array = NULL;
        }
        Array &operator=(const Array &other){
            if (this !=other)
            {
                delete[] _array;
                this->_size = other._size;
                this->_array = new T[this->_size];
                for (unsigned int i = 0; i < this->_size; i++)
                    this->_array[i] = other._array[i];   
            }
            return (*this);
        }
        Array(unsigned int n): _array(new T[n]),_size(n){
        }
        T &operator[](unsigned int index){
            if(index>=this->_size)
                throw std::out_of_range("index out of range ");
            return (this->_array[index]);
        }
        const T &operator[](unsigned int index) const {
            if(index>=this->_size)
                throw std::out_of_range("index out of range ");
            return (this->_array[index]);
        }
        ~Array(){delete[] _array; }
        unsigned int size() const {
            return (this->_size);
        }
};

#endif