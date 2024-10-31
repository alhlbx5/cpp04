/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:52:43 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 15:54:14 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cat.cpp
#include "Cat.hpp"

// Constructor
Cat::Cat() : brain(new Brain()) {
    type = "Cat";
    std::cout << "[Cat] A thoughtful cat has been created." << std::endl;
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain)) {
    std::cout << "[Cat] A clone of a thoughtful cat has been created." << std::endl;
}

// Destructor
Cat::~Cat() {
    delete brain;
    std::cout << "[Cat] A cat has lost its thoughts." << std::endl;
}

// Assignment operator
Cat &Cat::operator=(const Cat &other) {
    if (this != &other) {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}

// Cat-specific sound
void Cat::makeSound() const {
    std::cout << "[Cat Sound] Meow with wisdom!" << std::endl;
}
