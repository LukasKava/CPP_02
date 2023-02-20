/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:27:54 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/14 17:56:12 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
private:
	int					_raw_bits;
	static const int	_fractional_bits = 8;
public:
	Fixed(void);
	Fixed(const Fixed& other);
	~Fixed(void);

	Fixed& operator=(const Fixed& other);

	int			getRawBits(void) const;
	void		setRawBits(int const raw);
};

# define BLANK "\033[0m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELL "\033[0;33m"
# define CYAN "\033[0;36m"

#endif