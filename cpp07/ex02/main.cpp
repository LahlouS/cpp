#include "Array.hpp"
#include <stdlib.h>
#include <time.h>
void	programPause(void){
	char backSlashN = 0;
	std::cout << "Press enter to continue\n";
	std::cin.get(backSlashN);
}

// int main(void){

// {
// 	Array<int> test(5);
// 	std::cout << "array size = " << test.size() << "\n";
// 	std::cout << "printing de values:\n\n";
// 	try{
// 	std::cout << test[0] << "\n";
// 	std::cout << test[1] << "\n";
// 	std::cout << test[2] << "\n";
// 	std::cout << test[3] << "\n";
// 	std::cout << test[4] << "\n";

// 		std::cout << test[5] << "\n";
// 	}
// 	catch(std::exception const & e) {
// 		std::cout << "Error is: " << e.what();
// 	}
// 	Array<int> test2(test);
// 	std::cout << test2[0] << "\n";
// 	std::cout << test2[1] << "\n";
// 	std::cout << test2[2] << "\n";
// 	std::cout << test2[3] << "\n";
// 	std::cout << test2[4] << "\n";
// }

// 	programPause();
// {
// 	Array<std::string> test(5);
// 	std::cout << "array size = " << test.size() << "\n";
// 	std::cout << "printing de values:\n\n";
// 	try{
// 		test[0] = "1";
// 		test[1] = "2";
// 		test[2] = "3";
// 		test[3] = "4";
// 		test[4] = "5";

// 	std::cout << test[0] << "\n";
// 	std::cout << test[1] << "\n";
// 	std::cout << test[2] << "\n";
// 	std::cout << test[3] << "\n";
// 	std::cout << test[4] << "\n";

// 		std::cout << test[5] << "\n";
// 	}
// 	catch(std::exception const & e) {
// 		std::cout << "Error is: " << e.what();
// 	}
// }
// 	return (0);
// }

#include <iostream>

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
	/*  testing that both TAB have the sames values*/
	// for (int i = 0; i < MAX_VAL; i++){
	// 	std::cout << "numbers : " << numbers[i] << "\n";
	// 	std::cout << "mirror : " << mirror[i] << "\n";
	// }

	std::cout << "\n\n\n";
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
		//std::cout << "number after changing values : " << numbers[i] << "\n";
    }
    delete [] mirror;//
    return 0;
}
