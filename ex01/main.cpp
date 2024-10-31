/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:52:49 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 16:28:53 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    Dog dog1;
    dog1.makeSound();

    Cat cat1;
    cat1.makeSound();

    Dog dog2 = dog1;   
    dog2.makeSound();

    Cat cat2;
    cat2 = cat1;       
    cat2.makeSound();

    return 0;
}
