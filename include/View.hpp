#pragma once
#include <vector>
#include <memory>

#include "Primitive.hpp"

class IView {
public:
    ~IView() = default;
    virtual void displayPrimitive(std::unique_ptr<Primitive>& primitive) = 0;
};

class View : public IView {
public:
    View() = default;
    void displayPrimitive(std::unique_ptr<Primitive>& primitive) override;
};