#pragma once
#include <iostream>

struct Color {
    double r = {}, g = {}, b = {};
    Color() = default;
    Color(double red, double green, double blue) : r(red), g(green), b(blue) {}
};