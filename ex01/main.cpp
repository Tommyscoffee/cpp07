#include "iter.hpp"

template<class T> void display( T &obj )
{
	std::cout << "Variable's value is: " << obj << std::endl;
}

void	setRandomValue( int &number )
{
	number = std::rand() % 100;
}

// int	main( void )
// {
// 	std::string	strArray[3];
// 	int			*intTable = new int[5];

// 	strArray[0] = "hello";
// 	strArray[1] = "how are you?";
// 	strArray[2] = "hope you are fine.";
// 	::iter(strArray, 3, &display);
// 	for (int i = 0; i < 5; i ++)
// 		setRandomValue(intTable[i]);
// 	::iter(intTable, 5, &display);
// }


class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; };
		int get( void ) const { return this->_n; };
		private: int _n;
	};
	std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
	{ o << rhs.get();
		return o;
	 }
	template< typename T >
	void print( T const & x ) { std::cout << x << std::endl; return; 
}
int main() {
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0; 
}