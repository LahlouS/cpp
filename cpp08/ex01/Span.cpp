#include "Span.hpp"

Span::Span() : _maxSize(0){
	std::cout << "[Span] Default constructor has been called\n";
}

Span::Span(int const & maxSize) : _maxSize(maxSize){
	std::cout << "[Span] Assgnement constructor has been called\n";
}

Span::Span(Span const & copy) : _maxSize(copy.getMaxsize()) {
	this->tab = copy.getTab();
}

Span::~Span(){
	std::cout << "Destructor has been called\n";
}

int	Span::getMaxsize(void) const{
	return (_maxSize);
}

std::vector<int> const & Span::getTab() const{
	return (tab);
}

void	Span::addNumber(int nb){
	tab.push_back(nb);
	if (tab.size() > _maxSize)
		tab.resize(_maxSize);
	std::sort(tab.begin(), tab.end());
}

void	Span::addNumber(int howMany, int nb){
	for (int i = 0; tab.size() < _maxSize && i < howMany; i++)
		addNumber(nb);
}

void	Span::print(void) {
	std::cout << "*********printing the value :\n";
	std::vector<int>::iterator it = tab.begin();

	for (; it != tab.end(); it++)
			std::cout << *it << " ";
	std::cout << std::endl;
}

int	Span::longestSpan(void){
	if (tab.size() > 1)
		return (tab[(tab.size() - 1)] - tab[0]);
	else
		throw std::exception();
}

int	Span::shortestSpan(void){
	if (tab.size() > 1)
	{
		std::vector<int>::iterator it = tab.begin();
		int value = *(it + 1) - *it;
		for (; it != (tab.end() - 1); it++)
			if (*(it + 1) - *it < value)
				value = *(it + 1) - *it;
		return (value);
	} else {
		throw std::exception();
	}
}
