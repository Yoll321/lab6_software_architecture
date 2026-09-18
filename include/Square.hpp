#pragma once
#include "Primitive.hpp"

const double defaultSquareSideLen = 10;

class Square : public Primitive {
private:
    double sideLen_ = {};

public:
    Square();
    double getSideLen();
    Shape getShape() const override;
    void setSideLen(double sideLen);
};