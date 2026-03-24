#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain() {
    std::cout << "Brain created" << std::endl;
    for (int i = 0; i < 100; ++i)  
    {
        std::ostringstream oss;
        oss << i;
        ideas[i] = "Idea " + oss.str();
    }
    //std::cout << getIdea(99) << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copied" << std::endl;
    for (int i = 0; i < 100; ++i) 
    {
        ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain assignment" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

std::string Brain::getIdea(int index) const {
    std::cout << "GET IDEA : " << index << " " << std::endl;
    return ideas[index];
}

void Brain::setIdea(int index, const std::string& idea) {
    ideas[index] = idea;
}

