/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:14:16 by nseon             #+#    #+#             */
/*   Updated: 2025/11/07 16:03:06 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"
#include "Point.hpp"

int	main()
{
	Fixed a;
	Fixed b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );

	a = b + 1.5f;
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

	Point p1(-25, -30);
	Point p2(10, 5);
	Point p3(-2, 8);
	Point p4(-10, -15);
	if (bsp(p2, p3, p4, p1))
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point isn't in the triangle" << std::endl;
	return 0;
}
