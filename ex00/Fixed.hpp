/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:14:44 by nseon             #+#    #+#             */
/*   Updated: 2025/11/07 15:24:09 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	private:
		int	_value;
		static const int _dec_bits;
	public:
		Fixed();
		Fixed(const Fixed &model);
		Fixed &operator=(const Fixed &model);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
