#include "easyfind.hpp"

int main(void){
	std::vector<int> tab(35, 5);


	for (int i = 0; i < 35;i++){
		tab[i] = i + 1;
	}


	for (int i = 0; i < 35;i++){
		std::cout << "test print: " << tab[i] << "\n";
	}

	try{
		std::cout << "occurence is at index " << easyfind(tab, -5) << "\n";
	} catch (std::exception const & e) {
		std::cout << "[" << e.what() << "--> no occurrence found]\n";
	}
	return (0);
}
