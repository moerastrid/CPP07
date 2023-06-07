/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/06 15:41:05 by ageels        #+#    #+#                 */
/*   Updated: 2023/06/07 16:38:37 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
T const	&max(T const &x, T const &y) {
	return (x >= y ? x : y);
}

template<typename T>
T const	&min(T const &x, T const &y) {
	return (x <= y ? x : y);
}

template<typename T>
T	&max(T &x, T &y) {
	return (x >= y ? x : y);
}

template<typename T>
T	&min(T &x, T &y) {
	return (x <= y ? x : y);
}

template<typename T>
void	swap(T &x, T &y) {
	T temp = x;
	x = y;
	y = temp;
}
