/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:52:36 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 15:56:08 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{
    std::cout << "[Brain] A fresh mind with empty ideas has been created." << std::endl;
}

Brain::Brain(const Brain &other) 
{
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
    std::cout << "[Brain] A copy of a brain full of ideas has been made." << std::endl;
}

Brain::~Brain() 
{
    std::cout << "[Brain] A mind full of ideas has vanished." << std::endl;
}

Brain &Brain::operator=(const Brain &other) 
{
    if (this != &other) 
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

void Brain::setIdea(int index, const std::string &idea) 
{
    if (index >= 0 && index < 100) 
    {
        ideas[index] = idea;
    }
}

std::string Brain::getIdea(int index) const 
{
    return (index >= 0 && index < 100) ? ideas[index] : "";
}
