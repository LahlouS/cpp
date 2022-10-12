template<typename T>
void	swap(T & nb1, T & nb2){
	T tmp = nb1;
	nb1 = nb2;
	nb2 = tmp;
}

template<typename T>
T	min(T val1, T val2){
	return ((val1 < val2) ? val1 : val2);
}

template<typename T>
T	max(T val1, T val2){
	return ((val1 > val2) ? val1 : val2);
}
