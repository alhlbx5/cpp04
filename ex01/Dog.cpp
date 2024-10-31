/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:52:46 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 16:29:38 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
    type = "Dog";
    std::cout << "[Dog] A thoughtful dog has been created." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain)) 
{
    std::cout << "[Dog] A clone of a thoughtful dog has been created." << std::endl;
}

Dog::~Dog() 
{
    delete brain;
    std::cout << "[Dog] A dog has lost its thoughts." << std::endl;
}

Dog &Dog::operator=(const Dog &other) 
{
    if (this != &other) 
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}

void Dog::makeSound() const 
{
    std::cout << "[Dog Sound] Woof with thought!" << std::endl;
}
