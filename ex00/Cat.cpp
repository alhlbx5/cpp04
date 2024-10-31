/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:25:07 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 12:27:49 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() 
{
    type = "Cat";
    std::cout << "[Cat] A cat has appeared." << std::endl;
}

Cat::~Cat() 
{
    std::cout << "[Cat] The cat has gone." << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "[Cat Sound] Meow! Purr..." << std::endl;
}
