#ifndef ARRAY_HPP
# define ARRAY_HPP

template < class T > class Array
{
private:
	unsigned int	_size;
	T				*array;
public:
	Array( void );
	Array( unsigned int n);
	Array( const Array<T> &objs );
	virtual ~Array();

	Array &operator=(const Array &obj);
	T &operator[](unsigned int index);
	const T &operator[](unsigned int index) const;
	unsigned int	size( void ) const;

};
# include "Array.tpp"

#endif