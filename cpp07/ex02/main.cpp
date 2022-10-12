#include "Array.hpp"

void	programPause(void){
	char backSlashN = 0;
	std::cout << "Press enter to continue\n";
	std::cin.get(backSlashN);
}

int main(void){

{
	Array<int> test(5);
	std::cout << "array size = " << test.size() << "\n";
	std::cout << "printing de values:\n\n";
	try{
	std::cout << test[0] << "\n";
	std::cout << test[1] << "\n";
	std::cout << test[2] << "\n";
	std::cout << test[3] << "\n";
	std::cout << test[4] << "\n";

		std::cout << test[5] << "\n";
	}
	catch(std::exception const & e) {
		std::cout << "Error is: " << e.what();
	}
	Array<int> test2(test);
	std::cout << test2[0] << "\n";
	std::cout << test2[1] << "\n";
	std::cout << test2[2] << "\n";
	std::cout << test2[3] << "\n";
	std::cout << test2[4] << "\n";
}

	programPause();
{
	Array<std::string> test(5);
	std::cout << "array size = " << test.size() << "\n";
	std::cout << "printing de values:\n\n";
	try{
		test[0] = "1";
		test[1] = "2";
		test[2] = "3";
		test[3] = "4";
		test[4] = "5";

	std::cout << test[0] << "\n";
	std::cout << test[1] << "\n";
	std::cout << test[2] << "\n";
	std::cout << test[3] << "\n";
	std::cout << test[4] << "\n";

		std::cout << test[5] << "\n";
	}
	catch(std::exception const & e) {
		std::cout << "Error is: " << e.what();
	}
}
	return (0);
}
