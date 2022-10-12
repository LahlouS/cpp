#ifndef CLASS_HPP
#define CLASS_HPP


#include <stdlib.h>
#include <time.h>
#include <exception>

class Base{
	public :
		virtual ~Base();
		Base *	generate(void);
		void	identify(Base* p);
		void	identify(Base&	p);
};

class A : public Base{
	public :
		~A();
};

class B : public Base{
	public :
		~B();
};

class C : public Base{
	public :
		~C();
};

#endif
