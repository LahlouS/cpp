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
		bool operator<(Fixed const & to_assign) const;
		bool operator<=(Fixed const & to_assign) const;
		bool operator>=(Fixed const & to_assign) const;
		bool operator>(Fixed const & to_assign) const;
		bool operator==(Fixed const & to_assign) const;
		bool operator!=(Fixed const & to_assign) const;
		Fixed operator+(Fixed const & to_assign) const;
		Fixed operator-(Fixed const & to_assign) const;
		Fixed operator/(Fixed const & to_assign) const;
		Fixed operator*(Fixed const & to_assign) const;
		Fixed & operator++(void);
		Fixed operator++(int);
		Fixed & operator--(void);
		Fixed operator--(int);
		static Fixed const & min(Fixed const & nb1, Fixed const & nb2);
		static Fixed const & min(Fixed & nb1, Fixed & nb2);
		static Fixed const & max(Fixed const & nb1, Fixed const & nb2);
		static Fixed const & max(Fixed & nb1, Fixed & nb2);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int _nb;
		static int const _fract;
};

std::ostream & operator<<(std::ostream & o, Fixed const & output);

#endif
