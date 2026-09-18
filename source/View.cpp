#include <iostream>

#include "View.hpp"

void View::displayPrimitive(std::unique_ptr<Primitive> &primitive) {
    std::cout << "Primitive #" << primitive.get()->getId() << " is displayed\n";
    return;
}
