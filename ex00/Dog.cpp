/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:25:04 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 12:28:04 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() 
{
    type = "Dog";
    std::cout << "[Dog] A dog has been created." << std::endl;
}

Dog::~Dog() 
{
    std::cout << "[Dog] A dog has left the yard." << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "[Dog Sound] Woof! Woof!" << std::endl;
}
