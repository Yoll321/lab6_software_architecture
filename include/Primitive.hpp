#pragma once
#include "Point.hpp"
#include "Color.hpp"
#include <cstdint>

enum Shape {
    None,
    SquareShape
};

class Primitive {
private:
    Point coords_;
    Color color_;
    std::uint64_t id_;
public:
    Primitive();

    Color getColor() const;
    Point getCoords() const;
    std::uint64_t getId() const;
    virtual Shape getShape() const;
    void setColor(Color& color);
    void setCoords(Point& coords);
};