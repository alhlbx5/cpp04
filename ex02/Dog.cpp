/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:48:37 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 17:00:01 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) 
{
    type = "Dog";
    std::cout << "[Dog] A clever dog is here." << std::endl;
}
Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain)) 
{
    std::cout << "[Dog] A duplicate dog appears." << std::endl;
}
Dog::~Dog() 
{
    delete brain;
    std::cout << "[Dog] The dog has gone." << std::endl;
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
    std::cout << "[Dog Sound] Woof! Woof!" << std::endl;
}
