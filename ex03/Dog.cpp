/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:37:31 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 18:38:00 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) 
{
    type = "Dog";
    std::cout << "[Dog] A loyal dog with a unique mind has appeared." << std::endl;
}
Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain)) 
{
    std::cout << "[Dog] A clone of the loyal dog is created." << std::endl;
}
Dog::~Dog() 
{
    delete brain;
    std::cout << "[Dog] The loyal dog has gone." << std::endl;
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
    std::cout << "[Dog Sound] A heartfelt Woof!" << std::endl;
}
