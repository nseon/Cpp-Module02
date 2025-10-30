/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:14:16 by nseon             #+#    #+#             */
/*   Updated: 2025/10/30 17:21:46 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

int	main()
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );

	std::cout << "======================FLOAT======================" << std::endl;
	
	std::cout << "a is " << a.toFloat() << std::endl;
	std::cout << "b is " << b.toFloat() << std::endl;
	std::cout << "c is " << c.toFloat() << std::endl;
	std::cout << "d is " << d.toFloat() << std::endl;

	std::cout << "======================INT======================" << std::endl;

	std::cout << "a is " << a.toInt() << std::endl;
	std::cout << "b is " << b.toInt() << std::endl;
	std::cout << "c is " << c.toInt() << std::endl;
	std::cout << "d is " << d.toInt() << std::endl;
	return 0;
}
