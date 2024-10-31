// Brain.hpp
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
private:
    std::string ideas[100];  

public:
    Brain();                        
    Brain(const Brain &other);      
    ~Brain();                       

    Brain &operator=(const Brain &other); // Assignment operator
    void setIdea(int index, const std::string &idea);
    std::string getIdea(int index) const;
};

#endif
