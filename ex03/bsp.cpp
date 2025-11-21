/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:20:30 by nseon             #+#    #+#             */
/*   Updated: 2025/11/21 11:02:23 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed barycentre (Point const &p1, Point const &p2, Point const &p3)
{
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point)
{
	Fixed b1 = barycentre(point, a, b);
	Fixed b2 = barycentre(point, b, c);
	Fixed b3 = barycentre(point, c, a);

	if (b1 == 0 && b2 == 0 && b3 == 0)
		return (false);
	return (((b1 > 0) == (b2 > 0)) && ((b2 > 0) == (b3 > 0)));
}
