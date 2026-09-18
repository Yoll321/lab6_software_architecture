#pragma once
#include <memory>
#include <iostream>
#include "Primitive.hpp"
#include "Square.hpp"

class IFactory {
public:
    virtual ~IFactory() = default;
    virtual std::unique_ptr<Primitive> createPrimitive(Shape shape) = 0;
};

class Factory : public IFactory{
public:
    Factory() = default;
    std::unique_ptr<Primitive> createPrimitive(Shape shape) override {
        switch (shape) {
            case Shape::SquareShape:
                return std::make_unique<Square>();
            default:
                return nullptr;
        }
    }
};