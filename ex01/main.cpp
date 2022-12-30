#include "iter.hpp"

template<class T> void display( T &obj )
{
	std::cout << "Variable's value is: " << obj << std::endl;
}

void	setRandomValue( int &number )
{
	number = std::rand() % 100;
}

int	main( void )
{
	std::string	strArray[3];
	int			*intTable = new int[5];

	strArray[0] = "hello";
	strArray[1] = "how are you?";
	strArray[2] = "hope you are fine.";
	::iter(strArray, 3, &display);
	for (int i = 0; i < 5; i ++)
		setRandomValue(intTable[i]);
	::iter(intTable, 5, &display);
}
