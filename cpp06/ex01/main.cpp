#include <iostream>
#include <string>
#include "Data.hpp"
#include <stdint.h>

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

int main(void){
	Data test(5, 5.5f, 65);
	Data *test_ptr = NULL;

	std::cout << "test.getChar = " << test.getChar() << "\n";
	std::cout << "test.getInt = " << test.getInt() << "\n";
	std::cout << "test.getFloat = " << test.getFloat() << "\n";
	std::cout << "\n\n";
	test_ptr = deserialize(serialize(&test));

	std::cout << "test_ptr->getChar = " << test_ptr->getChar() << "\n";
	std::cout << "test_ptr->getInt = " << test_ptr->getInt() << "\n";
	std::cout << "test_ptr->getFloat = " << test_ptr->getFloat() << "\n";
	return (0);
}

uintptr_t	serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}
