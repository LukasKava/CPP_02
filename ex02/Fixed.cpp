/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:14:02 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/16 14:45:48 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors

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
	//std::cout << YELL << "Copy constructor called" << BLANK << std::endl;
	*this = other;
}

// End of constructors

Fixed::~Fixed(void)
{
	//std::cout << RED << "Destructor called" << BLANK << std::endl;
}


// Stream (outside the member) ======================

std::ostream &operator<<(std::ostream &os, const Fixed &object)
{
	os << object.toFloat();
	return (os);
}

// Class member operators ===========================

Fixed &Fixed::operator=(const Fixed &other)
{
	//std::cout << CYAN << "Copy assigment operator called" << BLANK << std::endl;
	this->_value = other._value;
	return (*this);
}

// Comparison operators =============================

bool	Fixed::operator>(const Fixed &other) const
{
	std::cout << "[value1: " << _value << " value2: " << other._value << "] ";
	return (_value > other._value ? true:false);
}

bool	Fixed::operator<(const Fixed &other) const
{
	std::cout << "[value1: " << _value << " value2: " << other._value << "] ";
	return (_value < other._value ? true:false);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	std::cout << "[value1: " << _value << " value2: " << other._value << "] ";
	return (_value >= other._value ? true:false);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	std::cout << "[value1: " << _value << " value2: " << other._value << "] ";
	return (_value <= other._value ? true:false);	
}

bool	Fixed::operator==(const Fixed &other) const
{
	std::cout << "[value1: " << _value << " value2: " << other._value << "] ";
	return (_value == other._value ? true:false);	
}

bool	Fixed::operator!=(const Fixed &other) const
{
	std::cout << "[value1: " << _value << " value2: " << other._value << "] ";
	return (_value != other._value ? true:false);	
}

// Arithmetic operators =============================

Fixed	Fixed::operator+(const Fixed &other) const
{
	return (this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return (this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return (this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	return (this->toFloat() / other.toFloat());
}

// Increment / Decrement operators ==================

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;

	this->_value += 1;
	return (tmp);
}

Fixed&	Fixed::operator++(void)
{
	this->_value += 1;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;

	this->_value -= 1;
	return (tmp);
}

Fixed&	Fixed::operator--(void)
{
	this->_value -= 1;
	return *this;
}

// min / max overloads ==============================
Fixed&	Fixed::min(Fixed& nb1, Fixed& nb2)
{
	return (nb1 <= nb2 ? nb1:nb2);
}
const Fixed&	Fixed::min(const Fixed& nb1, const Fixed& nb2)
{
	return (nb1 <= nb2 ? nb1:nb2);
}

Fixed&	Fixed::max(Fixed& nb1, Fixed& nb2)
{
	return (nb1 >= nb2 ? nb1:nb2);
}

const Fixed&	Fixed::max(const Fixed& nb1, const Fixed& nb2)
{
	return (nb1 >= nb2 ? nb1:nb2);
}

// Member functions =================================

float	Fixed::toFloat(void) const
{
	// std::cout << "Float function is called!" << std::endl;
	return (_value / (float)(1 << _fractional_bits));
}

int Fixed::toInt(void) const
{
	// std::cout << "to Int function is called!" << std::endl;
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
