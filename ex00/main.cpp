#include "whatever.hpp"

int main( void ) {
	std::cout << " ============= ( int )" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << "----- same ------" << std::endl;
	b = a;
	std::cout << "&a = " << &a << std::endl;
	std::cout << "&b = " << &b << std::endl;
	
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << &::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << &::max( a, b ) << std::endl;

	std::cout << std::endl;

	std::cout << " ============= ( std::string )" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << &::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << &::max( c, d ) << std::endl;
	std::cout << "----- same ------" << std::endl;
	c = d;
	std::cout << "&c = " << &c << std::endl;
	std::cout << "&d = " << &d << std::endl;
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << &::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << &::max( c, d ) << std::endl;


	std::cout << " ============= ( float )" << std::endl;
	float e = 4.2f;
	float f = 43.12f;
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	std::cout << "----- same ------" << std::endl;
	e = f;
	std::cout << "&e = " << &e << std::endl;
	std::cout << "&f = " << &f << std::endl;
	
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << &::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << &::max( e, f ) << std::endl;


	std::cout << " ============= ( char )" << std::endl;
	char g = 'g';
	char h = 'h';
	::swap(g, h);
	std::cout << "g = " << g << ", d = " << h << std::endl;
	std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
	std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;
	return 0;
}