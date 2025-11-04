/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:14:44 by nseon             #+#    #+#             */
/*   Updated: 2025/11/04 11:05:43 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed {
	private:
		int	_value;
		static const int _dec_bits;
	public:
		Fixed();
		Fixed(const Fixed &model);
		Fixed &operator=(const Fixed &model);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();

		bool operator<(const Fixed &other);
		bool operator>(const Fixed &other);
		bool operator>=(const Fixed &other);
		bool operator<=(const Fixed &other);
		bool operator==(const Fixed &other);
		bool operator!=(const Fixed &other);

		Fixed operator+(const Fixed &other);
		Fixed operator-(const Fixed &other);
		Fixed operator*(const Fixed &other);
		Fixed operator/(const Fixed &other);
		Fixed operator++();
		Fixed operator--();
		
		Fixed &min(Fixed &f1, Fixed &f2);
		Fixed &max(Fixed &f1, Fixed &f2);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};
