/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:14:44 by nseon             #+#    #+#             */
/*   Updated: 2025/10/30 17:12:30 by nseon            ###   ########.fr       */
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
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};
