/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:25:01 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 12:34:33 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main() {
    Animal genericAnimal;
    Dog dog;
    Cat cat;

    genericAnimal.makeSound(); 
    dog.makeSound();           
    cat.makeSound();          

    return 0;
}
