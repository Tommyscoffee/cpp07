
#include <typeinfo>
template < class T > Array<T>::Array( void ) : _size(0), array(nullptr)
{
	std::cout << typeid(this).name() << " constructor( void ) called " << std::endl;
}

template < class T > Array<T>::Array( unsigned int n ) : _size(n), array(nullptr)
{
	std::cout << typeid(this).name() << " constructor( unsigned int n ) called " << std::endl;
	this->array = new T[n]();
}
template < class T > Array<T>::~Array( void )
{
	std::cout << typeid(this).name() << " destructor( void ) called " << std::endl;
}


template < class T > Array<T>::Array( const Array<T> &obj ) : _size(0), array(nullptr)
{
	std::cout << typeid(this).name() << " constructor( const Array<T> &obj ) called " << std::endl;
	if (obj._size > 0)
	{
		this->array = new T[obj._size]();
		for (unsigned int i = 0; i < obj._size; i++)
			this->array[i] = obj.array[i];
	}
	this->_size = obj._size;

}


// member functions

template < class T > unsigned int Array<T>::size( void ) const
{
	std::cout << "getter :";

	return (this->_size);
}

template < class T > Array<T> &Array<T>::operator= (Array<T> const &obj)//&の位置に注意
{
	if (this->_size > 0)//初期化
		delete[] this->array;
	this->array = nullptr;
	if (obj._size > 0)
	{
		this->array = new T[obj._size]();
		for (size_t i = 0; i < obj._size; i++)
			this->array[i] = obj.array[i];
	}
	this->_size = obj._size;
	return (*this);
}

template < class T > T &Array<T>::operator[] (unsigned int index)//[]ではArrayではなくその中身だから返り値の型はTでいい
{
	if (index >= this->_size)
		throw std::overflow_error("Index is out of bounds");
	return (this->array[index]);
}

template < class T > const T &Array<T>::operator[] (unsigned int index) const//[]ではArrayではなくその中身だから返り値の型はTでいい
{
	return (operator[](index));
}


