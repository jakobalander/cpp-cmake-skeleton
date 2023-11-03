#include <iostream>

#include "skeleton/lib.hpp"

void Skeleton::greeting() {
    std::cout << "greeting from cpp cmake skeleton" << std::endl;
}

std::string Skeleton::getString() {
    if (this->string == "")
        return "Foo";
    return this->string;
}

void Skeleton::setString(std::string str) {
    this->string = str;
}


Painter::Painter(TurtleIf& turtle) : turtle{turtle} {}

bool Painter::drawLine(int x1, int y1, int x2, int y2) {
    this->turtle.penDown();
    return true;
}
