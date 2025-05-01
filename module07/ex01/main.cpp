/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:38:06 by ataoufik          #+#    #+#             */
/*   Updated: 2024/11/24 07:44:42 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
class A
{
    private:
        int _n;
    public:
        A( void ) : _n( 42 ) { }
        int get( void ) const { return this->_n; }
};

std::ostream & operator<<( std::ostream & o, A const & rhs )
{
    o << rhs.get();
    return o;
}

template< typename T > void print( T& x )
{
    std::cout << x << std::endl;
    return ;
}

int main()
{
    int tab[] = { 0, 1, 2, 3, 4 };
    A tab2[5];
    iter( tab, 5, print<const int> );
    iter( tab2, 5, print<A> );
    return 0;
}