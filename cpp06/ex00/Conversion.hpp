#ifndef CONVERSION_H
#define CONVERSION_H

#include "stdlib.h"
#include "Conversion.hpp"
#include <cmath>
#include <iostream>
#include <string>
#include <exception>
#include <limits.h>
#include <limits>

class Conversion : public std::string {
	public :
		Conversion();
		Conversion(std::string toConvert);
		Conversion(Conversion const & copy);
		Conversion(char	*toConvert);
		Conversion const & operator=(Conversion const & toAssign);
		~Conversion();

		class Impossible : public std::exception {
			public :
				Impossible(std::string const & mess) : exception::exception(), _ErrorMessage(mess){
				}
				virtual ~Impossible() throw() {return ;}
				virtual const char *what() const throw() {
					return (this->_ErrorMessage.c_str());
				}
			private :
				std::string _ErrorMessage;
		};


		double	getNbd(void) const;
		int		getNbi(void) const;
		float	getNbf(void) const;
		char	getNbc(void) const;
	private :
		double	checkd();
		int		checki();
		float	checkf();
		char	checkc();
		double	_nbd;
		int		_nbi;
		float	_nbf;
		char	_nbc;
};

#endif
