/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:36:47 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 18:37:19 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain()) 
{
    type = "Cat";
    std::cout << "[Cat] A wise cat with secrets has joined." << std::endl;
}
Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain)) 
{
    std::cout << "[Cat] A duplicate of the wise cat appears." << std::endl;
}
Cat::~Cat() 
{
    delete brain;
    std::cout << "[Cat] The wise cat has left." << std::endl;
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
    std::cout << "[Cat Sound] A curious Meow!" << std::endl;
}
