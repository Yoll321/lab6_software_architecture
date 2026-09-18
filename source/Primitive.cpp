#include "Primitive.hpp"

Primitive::Primitive() {
    static std::uint64_t unusedId = 0;
    
    color_ = {};
    coords_ = {};
    id_ = unusedId;
    unusedId++;
}

Color Primitive::getColor() const {
    return color_;
}

Point Primitive::getCoords() const {
    return coords_;
}

std::uint64_t Primitive::getId() const {
    return id_;
}

Shape Primitive::getShape() const {
    return None;
}

void Primitive::setColor(Color& color) {
    color_ = color;
}

void Primitive::setCoords(Point& coords) {
    coords_ = coords;
}
