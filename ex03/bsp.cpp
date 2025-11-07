/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:20:30 by nseon             #+#    #+#             */
/*   Updated: 2025/11/07 15:13:28 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed barycentre (Point const p1, Point const p2, Point const p3)
{
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	bool b1 = barycentre(point, a, b) < 0;
	bool b2 = barycentre(point, b, c) < 0;
	bool b3 = barycentre(point, c, a) < 0;

	return ((b1 == b2) && (b2 == b3));
}
