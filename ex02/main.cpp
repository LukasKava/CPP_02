/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:13:53 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/17 17:09:38 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed	a;
	Fixed	c(10);
	Fixed	d(10.5f);
	Fixed	e(10.7f);
	Fixed	z(-2.2f);
	Fixed	g(11);
	Fixed	f(12);
	Fixed	m(13);
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << YELL << "Testing provided cases by subject!" << BLANK << std::endl;
	std::cout << "a " << a << std::endl;
	std::cout << "a pre: " << ++a << std::endl;
	std::cout << "a " << a << std::endl;
	std::cout << "a post: " << a++ << std::endl;
	std::cout << "a " << a << std::endl;
	std::cout << "b " << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << GREEN << "Testing the [>] operator overload!" << BLANK << std::endl;
// > operator overload ===================================
	std::cout << "c > d " << (c > d) << std::endl;
	std::cout << "d > c " << (d > c) << std::endl;
	std::cout << "c > g " << (c > g) << std::endl; 
	std::cout << "d > e " << (d > e) << std::endl;
	std::cout << "z > g " << (z > g) << std::endl;
	std::cout << "e > d " << (e > d) << std::endl << std::endl;

	std::cout << GREEN << "Testing the [<] operator overload!" << BLANK << std::endl;
// < operator overload ===================================
	std::cout << "c < d " << (c < d) << std::endl;
	std::cout << "g < c " << (g < c) << std::endl;
	std::cout << "e < d " << (e < d) << std::endl;
	std::cout << "d < e " << (d < e) << std::endl;
	std::cout << "z < g " << (z < g) << std::endl;
	std::cout << "e < g " << (d < e) << std::endl << std::endl;

	std::cout << GREEN << "Testing the [>=] operator overload!" << BLANK << std::endl;
// >= operator overload ===================================
	std::cout << "c >= d " << (c >= d) << std::endl;
	std::cout << "g >= c " << (g >= c) << std::endl;
	std::cout << "e >= d " << (e >= d) << std::endl;
	std::cout << "d >= e " << (d >= e) << std::endl;
	std::cout << "e >= g " << (d >= e) << std::endl;
	std::cout << "z >= g " << (z >= g) << std::endl;
	std::cout << "e >= e " << (e >= e) << std::endl << std::endl;

	std::cout << GREEN << "Testing the [<=] operator overload!" << BLANK << std::endl;
// <= operator overload ===================================
	std::cout << "c <= g " << (c <= g) << std::endl;
	std::cout << "g <= c " << (g <= c) << std::endl;
	std::cout << "g <= g " << (g <= g) << std::endl;
	std::cout << "d <= e " << (d <= e) << std::endl;
	std::cout << "e <= d " << (e <= d) << std::endl;
	std::cout << "z <= e " << (z <= e) << std::endl;
	std::cout << "z <= g " << (z <= g) << std::endl;
	std::cout << "e <= e " << (e <= e) << std::endl << std::endl;

	std::cout << GREEN << "Testing the [==] operator overload!" << BLANK << std::endl;
// == operator overload ===================================
	std::cout << "c == g " << (c == g) << std::endl;
	std::cout << "g == c " << (g == c) << std::endl;
	std::cout << "g == g " << (g == g) << std::endl;
	std::cout << "d == e " << (d == e) << std::endl;
	std::cout << "e == d " << (e == d) << std::endl;
	std::cout << "z == e " << (z == e) << std::endl;
	std::cout << "z == g " << (z == g) << std::endl;
	std::cout << "e == e " << (e == e) << std::endl << std::endl;

	std::cout << GREEN << "Testing the [!=] operator overload!" << BLANK << std::endl;
// /!= operator overload ===================================
	std::cout << "c != g " << (c != g) << std::endl;
	std::cout << "g != c " << (g != c) << std::endl;
	std::cout << "g != g " << (g != g) << std::endl;
	std::cout << "d != e " << (d != e) << std::endl;
	std::cout << "e != d " << (e != d) << std::endl;
	std::cout << "z != e " << (z != e) << std::endl;
	std::cout << "z != g " << (z != g) << std::endl;
	std::cout << "e != e " << (e != e) << std::endl << std::endl;

	std::cout << GREEN << "Testing the Increment / decrement overload!" << BLANK << std::endl;
//	Increment / decrement operator overload ================
	std::cout << "g : " << g << std::endl;
	std::cout << "g++ " << g++ << std::endl;
	std::cout << "g : " << g << std::endl;
	std::cout << "++g " << ++g << std::endl;
	std::cout << "g : " << g << std::endl;
	std::cout << "g-- " << g-- << std::endl;
	std::cout << "g : " << g << std::endl;
	std::cout << "--g " << --g << std::endl;
	std::cout << "--g " << --g << std::endl;
	std::cout << "--g " << --g << std::endl;
	std::cout << "g : " << g << std::endl;
	std::cout << "g-- " << g-- << std::endl;
	std::cout << "g-- " << g-- << std::endl;
	std::cout << "g : " << g << std::endl << std::endl;

	std::cout << GREEN << "Testing Min / Max overloads" << BLANK << std::endl;
// Min / max member function overload =====================
	std::cout << "m=" << m.toInt() << " min f=" << f.toFloat() << Fixed::min(m, f) << std::endl;
	std::cout << "m=" << m.toInt() << " min f=" << f.toFloat() << ++Fixed::min(m, f) << std::endl;
	std::cout << "m=" << m.toInt() << " min f=" << f.toFloat() << Fixed::min(m, f)-- << std::endl;
	std::cout << "m=" << m.toInt() << " min f=" << f.toFloat() << Fixed::min(m, f) << std::endl << std::endl;

	std::cout << "m=" << m.toInt() << " max f=" << f.toFloat() << Fixed::max(m, f) << std::endl;
	std::cout << "m=" << m.toInt() << " max f=" << f.toFloat() << ++Fixed::max(m, f) << std::endl;
	std::cout << "m=" << m.toInt() << " max f=" << f.toFloat() << Fixed::max(m, f)-- << std::endl;
	std::cout << "m=" << m.toInt() << " max f=" << f.toFloat() << Fixed::max(m, f) << std::endl << std::endl;

// To test the const  functions just comment out the non const min and max functions and it should give an error.

}
