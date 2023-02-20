/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:56:27 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/17 19:19:25 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

//Constructor ===============================
Point::Point(void): _x(0), _y(0)
{
	//std::cout << "Point constructor called!" << std::endl;
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
	//std::cout << "float constructor!" << std::endl;
}

Point::Point(const Point& other): _x(other._x), _y(other._y)
{
	//std::cout << "Copy constructor!" << std::endl;
	*this = other;
}

//END of constructors =======================

Point::~Point(void)
{
	//std::cout << "Point destructor called!" << std::endl;
}

// asigment operator overload =================

Point&	Point::operator=(const Point& other)
{
	(void)other;
	return	(*this);
}

Fixed	Point::get_x(void) const
{
	return (this->_x);
}

Fixed	Point::get_y(void) const
{
	return (this->_y);
}