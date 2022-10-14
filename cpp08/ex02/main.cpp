#include "MutantStack.hpp"
#include <vector>
// int main(){
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	return (0);
// }


// int main(){
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	std::cout << mstack.size() << std::endl;

// 	MutantStack<int>::iterator it = mstack.begin();
// 	std::cout << *it << " is bottom of the stack\n";
// 	it = mstack.end();
// 	std::cout << *it << " is top of the stack\n";
// 	return (0);
// }


int main(){
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout << "mstack.top() = " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "mstack.size() = " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(6);
		mstack.push(737);
		mstack.push(0);
		mstack.push(13);
		mstack.push(56);
		mstack.push(89);
		mstack.push(79);
		mstack.push(33);
		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend();
		std::cout << *rit << " is bottom of the stack\n";
		std::cout << *(rite - 1) << " is top of the stack\n";

		std::cout << "--> Printing the values : \n";

		++rit;
		--rit;
		while (rit != rite){
			std::cout << *rit << std::endl;
			++rit;
		}
		std::stack<int> s(mstack);
		std::cout << "--> Printing s values : \n";
		while (s.size()){
			std::cout << s.top() << "\n";
			s.pop();
		}
	}
	return (0);
}

// int main(){
// 	{
// 		MutantStack<int> mstack;
// 		mstack.push(5);
// 		mstack.push(17);

// 		std::cout << "mstack.top() = " << mstack.top() << std::endl;

// 		mstack.pop();

// 		std::cout << "mstack.size() = " << mstack.size() << std::endl;

// 		mstack.push(3);
// 		mstack.push(6);
// 		mstack.push(737);
// 		mstack.push(0);
// 		MutantStack<int>::iterator it = mstack.begin();
// 		MutantStack<int>::iterator ite = mstack.end();
// 		std::cout << *it << " is bottom of the stack\n";
// 		std::cout << *(ite - 1) << " is top of the stack\n";

// 		std::cout << "--> Printing the values : \n";

// 		++it;
// 		--it;
// 		while (it != ite){
// 			std::cout << *it << std::endl;
// 			++it;
// 		}
// 		std::stack<int> s(mstack);
// 		std::cout << "--> Printing s values : \n";
// 		std::cout << s.top() << "\n";
// 	}

// 	std::cout << "\n**********\n\n";


// 	{
// 		std::vector<int> mstack;
// 		mstack.push_back(5);
// 		mstack.push_back(17);
// 		std::cout << *(mstack.end()-1) << std::endl;
// 		std::cout << mstack.size() << std::endl;

// 		std::vector<int>::iterator it = mstack.begin();
// 		std::cout << *it << " is bottom of the stack\n";
// 		it = mstack.end();
// 		std::cout << *(it--) << " is top of the stack\n";
// 	}
// 	return (0);
// }
