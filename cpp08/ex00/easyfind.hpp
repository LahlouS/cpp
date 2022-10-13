#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
//#include <algorithm>
#include<vector>

template<typename T>
int easyfind(T tab, int val){

	for (typename T::iterator it = tab.begin(); it != tab.end(); it++){
		if ((*it) == val)
			return (it - tab.begin());
	}
	throw std::exception();
}
#endif
