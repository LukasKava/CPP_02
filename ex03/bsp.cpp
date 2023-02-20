/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:55:02 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/17 19:56:15 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
// I need to calculate barycentric cordinates x y z
// Which are are ratios of the areas of the sub-triangles of the triangle ABC,
// which are formed by connecting the point P to each of the vertices of the triangle.
// These ratios tell us how much of the area of the triangle is "assigned"
// to each vertex by the point P.
// Formula ex. a = Area(PBC) / Area(ABC) 
// Area formula Ax (B y − C y) + Bx (C y − A y) + Cx (A y − B y) 

Fixed calculate_area(Point A, Point B, Point C)
{
	Fixed	area;
	area = ((A.get_x() * (B.get_y() - C.get_y())) + (B.get_x() * (C.get_y() - A.get_y())) + (C.get_x() * (A.get_y() - B.get_y())))/2;
	
	if (area < 0)
		area = area * -1;
	return (area);
}

bool bsp(Point const a , Point const b, Point const c, Point const p)
{
	Fixed	area_ABC = calculate_area(a, b, c);

	Fixed	x = calculate_area(p, b, c) / area_ABC;
	Fixed	y = calculate_area(p, a, c) / area_ABC;
	Fixed	z = calculate_area(p, a, b) / area_ABC;
	
	// std::cout << "x: " << x << std::endl;
	// std::cout << "y: " << y << std::endl;
	// std::cout << "z: " << z << std::endl;
	
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
	std::cout << "z: " << z << std::endl;

	std::cout << "check: " << x + y + z << std::endl;

	if (x == 0 || y == 0 || z == 0)
	{
		std::cout << YELL << "The point is on the line!" << BLANK << std::endl;
		return (false);
	}
	return ((x + y + z) == 1 ? true:false);
	return (false);
}
