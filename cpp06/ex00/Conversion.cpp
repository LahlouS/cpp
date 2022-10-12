#include "Conversion.hpp"

Conversion::Conversion() : std::string() , _nbd(0), _nbi(0), _nbf(0), _nbc(0){
	std::cout << "[Conversion] Default constructor has been called\n";
}

Conversion::Conversion(std::string toConvert) : std::string(toConvert), _nbd(0), _nbi(0), _nbf(0), _nbc(0){
	_nbd = this->checkd();
	getNbd();
	_nbf = this->checkf();
	getNbf();
	_nbi = this->checki();
	getNbi();
	_nbc = this->checkc();
	getNbc();
}

Conversion::Conversion(char	*toConvert) : std::string(toConvert), _nbd(0), _nbi(0), _nbf(0), _nbc(0){
	_nbd = this->checkd();
	getNbd();
	_nbf = this->checkf();
	getNbf();
	_nbi = this->checki();
	getNbi();
	_nbc = this->checkc();
	getNbc();
}

Conversion::Conversion(Conversion const & copy) : std::string(reinterpret_cast<std::string const &>(copy)) {
	std::cout << "[Conversion] Copy constructor has been called\n";
	_nbd = copy.getNbd();
	_nbi = copy.getNbi();
	_nbf = copy.getNbf();
	_nbc = copy.getNbc();
}

Conversion const & Conversion::operator=(Conversion const & toAssign){
	std::string::operator=(toAssign);
	_nbd = toAssign.getNbd();
	_nbi = toAssign.getNbi();
	_nbf = toAssign.getNbf();
	_nbc = toAssign.getNbc();
	return (*this);
}

Conversion::~Conversion(){
	std::cout << "[Conversion] Destructor has been called" << std::endl;
}

double	Conversion::getNbd(void) const{
	if (round(_nbd) == _nbd && compare("nan") && !std::isinf(_nbd))
		std::cout << "Double: " << _nbd << ".0\n";
	else
		std::cout << "Double: " << _nbd << "\n";
	return (this->_nbd);
}

int		Conversion::getNbi(void) const{
	std::cout << "Int: " << _nbi << "\n";
	return (this->_nbi);
}

float	Conversion::getNbf(void) const{
	if (round(_nbf) == _nbf && !std::isinf(_nbf))
		std::cout << "Float: " << _nbf << ".0f\n";
	else
		std::cout << "Float: " << _nbf << "f\n";
	return (this->_nbf);
}

char	Conversion::getNbc(void) const{
	std::cout << "Char: '" << _nbc << "'\n";
	return (this->_nbc);
}

double	Conversion::checkd(){
	double	tmp = strtod(this->c_str(), NULL);
	if (tmp == 0)
		throw Conversion::Impossible("Double: Impossible\nFloat: Impossible\nInt: Impossible\nInt: Impossible\nChar: Impossible\n");
	return (tmp);
}

int		Conversion::checki(){
	if (_nbd > std::numeric_limits<int>::max() || _nbd < std::numeric_limits<int>::min() || !compare("nan") || !compare("nanf"))
		throw Conversion::Impossible("Int: Impossible\nChar: Impossible\n");
	return (static_cast<int>(_nbd));
}

float	Conversion::checkf(){
		return (static_cast<float>(_nbd));
}

char	Conversion::checkc(){
	if (this->_nbd < 0 || this->_nbd > 126)
		throw Conversion::Impossible("Char: Impossible\n");
	if (this->_nbd < 32)
		throw Conversion::Impossible("Char: Non Displayable\n");
	return (static_cast<char>(_nbd));
}
