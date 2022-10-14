#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T>{
	public :
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		typedef typename Container::const_reverse_iterator const_reverse_iterator;
		iterator begin(void){
			return (this->c.begin());
		}
		iterator end(void){
			return (this->c.end());
		}
		const_iterator cbegin(void){
			return (this->c.cbegin());
		}
		const_iterator cend(void){
			return (this->c.cend());
		}
		reverse_iterator rbegin(void){
			return (this->c.rbegin());
		}
		reverse_iterator rend(void){
			return (this->c.rend());
		}
		const_reverse_iterator crbegin(void){
			return (this->c.crbegin());
		}
		const_reverse_iterator crend(void){
			return (this->c.crend());
		}
};

#endif
