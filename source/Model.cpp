#include <iostream>

#include "Model.hpp"

void Model::createDocument() {
    std::cout << "Document created\n";
    return;
}

void Model::importDocument(const std::string &path) {
    std::cout << "Document imported from " << path << '\n';
    return;
}

void Model::exportDocument(const std::string &path) {
    std::cout << "Document was exported into file " << path << '\n';
    return;
}

void Model::addPrimitive(std::unique_ptr<Primitive> primitive) {
    std::cout << "Primitive was added:\n";
    std::cout << "\tShape: ";
    switch (primitive.get()->getShape()) {
        case Shape::SquareShape:
            std::cout << "Square\n";
            break;
        default:
            std::cout << "-\n";
            break;
    }
    std::cout << "\tId: " << primitive.get()->getId() << '\n';
    primitives_.push_back(std::move(primitive));
    return;
}

void Model::removePrimitive(std::uint64_t id) {
    for (std::uint64_t i = 0; i < primitives_.size(); i++) {
        if (primitives_[i].get()->getId() == id) {
            primitives_.erase(primitives_.begin() + i);
            std::cout << "Primitive #" << i << " was removed\n";
            return;
        }
    }
    return;
}

std::size_t Model::getSize() {
    return primitives_.size();
}

std::unique_ptr<Primitive> &Model::getPrimitive(std::size_t pos) {
    return primitives_[pos];
}
