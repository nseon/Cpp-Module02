/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:14:44 by nseon             #+#    #+#             */
/*   Updated: 2025/10/30 12:44:29 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed {
	private:
		int	_value;
		static const int _nb_bits;
	public:
		Fixed();
		Fixed(const Fixed &model);
		Fixed &operator=(const Fixed &model);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
