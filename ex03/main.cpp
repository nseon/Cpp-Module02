/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:14:16 by nseon             #+#    #+#             */
/*   Updated: 2025/11/21 11:02:50 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"
#include "Point.hpp"

int	main()
{
	Point p1(9, 0);
	Point p2(10, 0);
	Point p3(0, 12);
	Point p4(0, 0);
	if (bsp(p2, p3, p4, p1))
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point isn't in the triangle" << std::endl;
	return 0;
}
