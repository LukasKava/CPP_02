/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:53:25 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/17 19:06:44 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


void	test_values(Point &A, Point &B, Point &C, Point &P)
{
	std::cout << RED << "Testing assignment!" << BLANK << std::endl;
	std::cout << "Point 1: " << "x= " << A.get_x() << " y= " << A.get_y() << std::endl;
	std::cout << "Point 2: " << "x= " << B.get_x() << " y= " << B.get_y() << std::endl;
	std::cout << "Point 2: " << "x= " << C.get_x() << " y= " << C.get_y() << std::endl;
	std::cout << "Point P: " << "x= " << P.get_x() << " y= " << P.get_y() << std::endl;
}

int	main(void)
{
	//Triangle one
	std::cout << CYAN << "Triangle one ABC ===========" << BLANK << std::endl;
	Point	A(0, 0);
	Point	B(10, 30);
	Point	C(20, 0);
	Point	P(10, 30);
	test_values(A, B, C, P);
	if (bsp(A, B, C, P) == true)
		std::cout << GREEN <<  "Point is inside" << BLANK << std::endl;
	else
		std::cout << RED << "Point is outside" << BLANK << std::endl;
	std::cout << std::endl;

	std::cout << CYAN << "Triangle two abc ===========" << BLANK << std::endl;
	//Triangle two
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 5);
	Point p1(1, 1);
	Point p2(10, 5);
	test_values(a, b, c, p1);
	if (bsp(a, b, c, p1) == true)
		std::cout << GREEN << "a b c | p1 is inside" << BLANK << std::endl;
	else
		std::cout << RED << "a b c | p1 is outside" << BLANK << std::endl;
	std::cout << std::endl;
	test_values(a, b, c, p2);
	if (bsp(a, b, c, p2) == true)
		std::cout << GREEN << "a b c | p2 is inside" << BLANK << std::endl;
	else
		std::cout << RED << "a b c | p2 is outside" << BLANK << std::endl;
	std::cout << std::endl;

	std::cout << CYAN << "Triangle three a2b2c2 ===========" << BLANK << std::endl;
	//Triangle three
	Point a2(1, 1);
	Point b2(5, -1);
	Point c2(3, 5);
	Point p3(2, 3);
	Point p4(3, 3);
	test_values(a2, b2, c2, p3);
	if (bsp(a2, b2, c2, p3) == true)
		std::cout << GREEN << "a2 b2 c2 | p3 is inside" << BLANK << std::endl;
	else
		std::cout << RED << "a2 b2 c2 | p3 is outside" << BLANK << std::endl;
	std::cout << std::endl;
	test_values(a2, b2, c2, p4);
	if (bsp(a2, b2, c2, p4) == true)
		std::cout << GREEN << "a2 b2 c2 | p4 is inside" << BLANK << std::endl;
	else
		std::cout << RED << "a2 b2 c2 | p4 is outside" << BLANK << std::endl;
	std::cout << std::endl;

	std::cout << CYAN << "Triangle four a3b3c3 ===========" << BLANK << std::endl;
	//Triangle four
	Point a3(292, 376);
	Point b3(486, 141);
	Point c3(94, 99);
	Point p5(189.0052080154419f, 198.1267318725586f);

	test_values(a3, b3, c3, p5);
	if (bsp(a3, b3, c3, p5) == true)
		std::cout << GREEN << "a3 b3 c3 | p5 is inside" << BLANK << std::endl;
	else
		std::cout << RED << "a3 b3 c3 | p5 is outside" << BLANK << std::endl;
	std::cout << std::endl;

	std::cout << CYAN << "Triangle five a4b4c4 ===========" << BLANK << std::endl;
	//Triangle five
	Point a4(390, 219);
	Point b4(319, 468);
	Point c4(413, 20);
	Point p6(250, 250);
	Point p7(380, 222);

	test_values(a4, b4, c4, p6);
	if (bsp(a4, b4, c4, p6) == true)
		std::cout << GREEN << "a4 b4 c4 | p6 is inside" << BLANK << std::endl;
	else
		std::cout << RED << "a4 b4 c4 | p6 is outside" << BLANK << std::endl;
	std::cout << std::endl;
	test_values(a4, b4, c4, p7);
	if (bsp(a4, b4, c4, p7) == true)
		std::cout << GREEN << "a4 b4 c4 | p6 is inside" << BLANK << std::endl;
	else
		std::cout << RED << "a4 b4 c4 | p7 is outside" << BLANK << std::endl;
	std::cout << std::endl;
	return	(0);
}
