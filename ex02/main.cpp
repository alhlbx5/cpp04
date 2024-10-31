/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:48:41 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 17:00:08 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    Animal *animals[2];

    animals[0] = new Dog();
    animals[1] = new Cat();

    for (int i = 0; i < 2; ++i) {
        animals[i]->makeSound();
        delete animals[i];
    }

    return 0;
}
