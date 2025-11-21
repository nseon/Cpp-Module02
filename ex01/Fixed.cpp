/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:14:38 by nseon             #+#    #+#             */
/*   Updated: 2025/11/21 09:01:50 by nseon            ###   ########.fr       */
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
	return (_value / pow(2, _dec_bits));
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
	_value = f * pow(2, _dec_bits);
	std::cout << "Float constructor called" << std::endl;
}

/* ===============DESTRUCTOR=============== */

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* ===============OPERATORS=============== */

std::ostream &operator<<(std::ostream& os, const Fixed &model)
{
	os << model.toFloat();
	return (os);
}

Fixed &Fixed::operator=(const Fixed &model)
{
	if (this != &model)
		_value = model._value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
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
