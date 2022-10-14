#include "Span.hpp"

int main()
{
	Span sp = Span(15000);
	std::cout << sp.getMaxsize() << " is the max size\n";
	sp.addNumber(6, 250);
	sp.addNumber(89, 300);
	/*sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);*/
	sp.print();
	try {
		std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan : " << sp.longestSpan() << std::endl;
	} catch (std::exception const & e){
		std::cout << e.what() << "\n";
	}
	return 0;
}
