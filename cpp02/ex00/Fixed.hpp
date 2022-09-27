#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	public:
		Fixed();
		Fixed & operator=(Fixed const & to_assign);
		Fixed(Fixed const & cpy);
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
	private:
		int nb;
		static int const fract;
};

#endif
