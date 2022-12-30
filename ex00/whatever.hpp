#ifndef WHATEVER_HPP
# define WHATEVER_HPP
#include <iostream>

//member functions
template < class T > void swap( T &arg1, T &arg2 )
{
	T tmp;

	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template < class T > T& min( T &arg1, T &arg2 )//同じだったら、arg2を返す
{
	return (arg1 < arg2 ? arg1 : arg2);
}

template < class T > T& max( T &arg1, T &arg2 )//同じだったら、arg2を返す
{
	return (arg1 > arg2 ? arg1 : arg2);
}

#endif