#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>
#include <string>
#include <iostream>

class Span {
	public :
		Span();
		Span(int const & maxSize);
		Span(Span const & copy);
		~Span();
		int	shortestSpan();
		int	longestSpan();
	private :
		const int _maxSize;
		std::vector<int> tab;
};

#endif
