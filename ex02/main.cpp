#include <iostream>
#include "Array.hpp"

// int main( void )
// {
// 	Array<int> hoge;
// 	// Array<char> hogehoge;
// 	// Array<float> hogehogehoge;
// 	// Array<short> hogehogehogehoge;
// 	// Array<long> hogehogehogehogehoge;
// 	// Array<std::string> hogehogehogehogehogehoge;
// 	Array<int> fuga( 5 );

// 	std::cout << "hoge._size " << hoge.size() << std::endl;

// 	hoge = fuga;
// 	std::cout << "hoge._size " << hoge.size() << std::endl;

// 	Array<int> fugafuga( fuga );
// 	std::cout << "fugafuga._size = " << fugafuga.size() << std::endl;

// 	for (unsigned int i = 0; i < fugafuga.size() ; i++)
// 	{
// 		fugafuga[i] = i;
// 		std::cout << "fugafuga[i] = " << fugafuga[i] << std::endl;
// 	}
// }
#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}