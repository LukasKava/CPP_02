/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:55:41 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/17 19:03:53 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class	Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point& other); // copy constructor
		~Point(void);
		
		Point	&operator=(const Point& other);

		Fixed	get_x(void) const;
		Fixed	get_y(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif