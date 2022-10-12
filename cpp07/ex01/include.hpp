#ifndef INCLUDE_HPP
#define INCLUDE_HPP

template<typename T, typename S, typename F>
void	iter(T* tab, S size, F* func)
{
	for (S i = 0; i < size; i++){
		func(tab[i]);
	}
}

#endif
