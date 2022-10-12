#ifndef DATA_HPP
#define DATA_HPP

class Data{
	public :
		Data();
		Data(int a, float b, char c);
		Data(Data const & cpy);
		Data const & operator=(Data const & toAssign);
		~Data();

		int	getInt() const;
		char	getChar() const;
		float	getFloat() const;

	private :
		int		a;
		float	b;
		char	c;

};

#endif

