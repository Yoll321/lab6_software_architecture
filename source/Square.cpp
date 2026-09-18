#include "Square.hpp"

Square::Square() {
    sideLen_ = defaultSquareSideLen;
}

double Square::getSideLen() {
    return sideLen_;
}

Shape Square::getShape() const{
    return SquareShape;
}

void Square::setSideLen(double sideLen) {
    sideLen_ = sideLen;
}
