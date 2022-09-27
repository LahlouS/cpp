#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	public:
		Fixed();
		Fixed & operator=(Fixed const & to_assign);
		Fixed(Fixed const & cpy);
		Fixed(int const to_convert);
		Fixed(float const to_convert);
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat(void) const;
		int		toInt(void) const;
		
	private:
		int _nb;
		static int const _fract;
};

#endif
