/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:25:09 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 12:27:21 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Unknown") 
{
    std::cout << "[Animal] A mysterious animal has appeared." << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) 
{
    std::cout << "[Animal] Copy of a mysterious animal created." << std::endl;
}

Animal::~Animal() 
{
    std::cout << "[Animal] An animal has vanished." << std::endl;
}

Animal &Animal::operator=(const Animal &other) 
{
    if (this != &other)
        type = other.type;
    return *this;
}

void Animal::makeSound() const 
{
    std::cout << "[Animal Sound] Some animal sound..." << std::endl;
}

std::string Animal::getType() const 
{
    return type;
}
