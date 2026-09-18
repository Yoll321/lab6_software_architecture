#pragma once
#include <iostream>

struct Point {
    double x_ = {};
    double y_ = {};

    Point() = default;
    Point(double& x, double& y) : x_(x), y_(y) {}
};