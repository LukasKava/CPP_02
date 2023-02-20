/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:27:45 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/14 18:01:17 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):_raw_bits(0)
{
	std::cout << GREEN << "Default constructor called" << BLANK << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << RED << "Destructor called" << BLANK << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << YELL << "Copy constructor called" << BLANK << std::endl;
	*this = other;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << CYAN << "Copy assigment operator called" << BLANK << std::endl;
	this->_raw_bits = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw_bits = raw;
}
