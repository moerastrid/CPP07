/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/07 16:49:27 by ageels        #+#    #+#                 */
/*   Updated: 2023/06/24 14:41:32 by astrid        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T, typename U, typename V>
void my_iter(T &my_array, U len, void (*func)(V)) {
    for (int i(0); i < len; i++) {
        func(my_array[i]);
    }
};

#endif