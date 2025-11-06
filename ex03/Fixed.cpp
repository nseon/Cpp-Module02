/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:14:38 by nseon             #+#    #+#             */
/*   Updated: 2025/11/05 14:40:48 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

const int Fixed::_dec_bits = 8;

int Fixed::toInt( void ) const
{
	return (_value >> _dec_bits);
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(_value) / powf(2, _dec_bits));
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}

/* ===============OPERATORS=============== */

Fixed &Fixed::operator=(const Fixed &model)
{
	if (this != &model)
		_value = model._value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

bool Fixed::operator<(const Fixed &model) const
{
	return (this->_value < model._value);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->_value > other._value);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->_value <= other._value);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->_value >= other._value);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->_value == other._value);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->_value != other._value);
}

Fixed Fixed::operator+(const Fixed &other)
{
	Fixed res = *this;

	res._value += other._value;
	return (res);
}

Fixed Fixed::operator-(const Fixed &other)
{
	Fixed res = *this;

	res._value -= other._value;
	return (res);
}

Fixed Fixed::operator*(const Fixed &other)
{
	Fixed res = *this;

	res._value *= other._value;
	return (res);
}

Fixed Fixed::operator/(const Fixed &other)
{
	Fixed res = *this;

	res._value /= other._value;
	return (res);
}

Fixed &Fixed::operator++()
{
	++_value;
	return (*this);
}

Fixed &Fixed::operator--()
{
	--_value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed old = *this;

	++_value;
	return (old);
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;

	--_value;
	return (old);
}

/* ===============CONSTRUCTORS=============== */

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &model) : _value(model._value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int nb) : _value(nb << _dec_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	_value = static_cast<int>(f * powf(2, _dec_bits));
	std::cout << "Float constructor called" << std::endl;
}

/* ===============DESTRUCTOR=============== */

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* ===============GET/SET=============== */

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}
