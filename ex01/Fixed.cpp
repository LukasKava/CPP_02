/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:13:05 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/15 18:08:39 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructors

Fixed::Fixed(void) : _value(0)
{
	std::cout << GREEN << "Default constructor called" << BLANK << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << _fractional_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(value * (1 << _fractional_bits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << YELL << "Copy constructor called" << BLANK << std::endl;
	*this = other;
}

//End of constructors

Fixed::~Fixed(void)
{
	std::cout << RED << "Destructor called" << BLANK << std::endl;
}

//Operators

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << CYAN << "Copy assigment operator called" << BLANK << std::endl;
	this->_value = other._value;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed& object)
{
	os << object.toFloat();
	return (os);
}

//Member functions

float	Fixed::toFloat(void) const
{
	//std::cout << "Float function is called!" << std::endl;
	return (_value / (float)(1 << _fractional_bits));
}

int	Fixed::toInt(void) const
{
	//std::cout << "to Int function is called!" << std::endl;
	return (this->_value >> _fractional_bits);
	
}
 
int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}
