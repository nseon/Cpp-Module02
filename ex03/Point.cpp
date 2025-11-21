/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:54:29 by nseon             #+#    #+#             */
/*   Updated: 2025/11/21 10:35:47 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	std::cout << "Point default constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
	std::cout << "Point float constructor called" << std::endl;
}

Point::Point(const Point &model) : _x(model._x), _y(model._y)
{
	std::cout << "Point copy constructor called" << std::endl;
}

Point::~Point()
{
	std::cout << "Point destructor called" << std::endl;
}

Fixed Point::getX() const
{
	return (_x);
}

Fixed Point::getY() const
{
	return (_y);
}
