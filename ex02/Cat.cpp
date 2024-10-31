/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:48:34 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 16:59:36 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain()) 
{
    type = "Cat";
    std::cout << "[Cat] A curious cat arrives." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain)) 
{
    std::cout << "[Cat] A replica cat shows up." << std::endl;
}

Cat::~Cat() 
{
    delete brain;
    std::cout << "[Cat] The cat has left." << std::endl;
}

Cat &Cat::operator=(const Cat &other) 
{
    if (this != &other) 
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}

void Cat::makeSound() const 
{
    std::cout << "[Cat Sound] Meow!" << std::endl;
}
