/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:48:31 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 16:58:30 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Unknown") 
{
    std::cout << "[Animal] An unknown animal is created." << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) 
{
    std::cout << "[Animal] An animal clone is created." << std::endl;
}

Animal::~Animal() 
{
    std::cout << "[Animal] An animal disappears." << std::endl;
}

Animal &Animal::operator=(const Animal &other) 
{
    if (this != &other)
        type = other.type;
    return *this;
}

std::string Animal::getType() const 
{
    return type;
}
