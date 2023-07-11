/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/07 16:49:27 by ageels        #+#    #+#                 */
/*   Updated: 2023/07/11 12:07:47 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void iter(T *my_array, unsigned int len, void (*func)(T &)) {
    for (unsigned int i(0); i < len; i++) {
        func(my_array[i]);
    }
};

template<typename T>
void iter(const T *my_array, unsigned int len, void (*func)(const T &)) {
    for (unsigned int i(0); i < len; i++) {
        func(my_array[i]);
    }
};

#endif