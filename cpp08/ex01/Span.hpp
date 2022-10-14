#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>
#include <algorithm>
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
		int	getMaxsize() const;
		std::vector<int> const & getTab() const;
		void	addNumber(int nb);
		void	addNumber(int rangeFrom, int rangeTo);
		void	addNumber(int *rangeFrom, int *rangeTo);
		void	print(void);

	private :
		unsigned long _maxSize;
		std::vector<int> tab;
};

#endif
