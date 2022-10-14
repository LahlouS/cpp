#include "Span.hpp"


int main()
{
	Span sp = Span(7);
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	int ar[] = {0,1,2,3,5,4,6,9,8,79,65,32};
	sp.addNumber(ar, ar + 12);
	sp.print();
	return 0;
}

/*
int main()
{
	Span sp = Span(15000);
	std::cout << sp.getMaxsize() << " is the max size\n";
	sp.addNumber(6, 250);
	sp.addNumber(89, 300);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.print();
	try {
		std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan : " << sp.longestSpan() << std::endl;
	} catch (std::exception const & e){
		std::cout << e.what() << "\n";
	}
	return 0;
}
*/
