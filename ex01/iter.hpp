#include <iostream>

template < class T > void iter ( T *array_p , int array_len, void (*func)(const T &))
{
	for (int i = 0; i < array_len; i++)
	{
		func(array_p[i]);
	}
}
