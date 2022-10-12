#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>
#include <string>

template<typename T>
class Array{
	public:
		Array<T>() : tab(NULL), _size(0){}
		Array<T>(unsigned int size) : _size(size){
			tab = new T[_size];
			// for (unsigned int i = 0; i < _size; i++)
			// 	tab[i] = 0;
		}
		Array<T>(Array<T> const & copy){
			*this = copy;
		}

		Array<T> const & operator=(Array<T> const & toAssign){
			this->_size = toAssign.size();
			delete [] this->tab;
			tab = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				this->tab[i] = toAssign[i];
			return (*this);
		}
		T & operator[](unsigned int index) const{
			if (index >= this->_size)
				throw Array<T>::InvalidIndex();
			return (this->tab[index]);
		}
		unsigned int	size(void) const{
			return (_size);
		}
		class InvalidIndex : public std::exception{
			const char *what() const throw() {
						return ("ERROR, invalid index !\n");
				}
		};
		~Array<T>(){
			delete [] tab;
			std::cout << "Destructor has been called\n";}

	private :
		T* tab;
		unsigned _size;
};

#endif
