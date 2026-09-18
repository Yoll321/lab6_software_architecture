#include "Controller.hpp"

void Controller::createDocument() {
    modelInterface->createDocument();
    return;
}

void Controller::importDocument(std::string &path) {
    modelInterface->importDocument(path);
    return;
}

void Controller::exportDocument(std::string &path) {
    modelInterface->exportDocument(path);
    return;
}

void Controller::addPrimitive(Shape shape) {
    std::unique_ptr<Primitive> primitive = factoryInterface->createPrimitive(Shape::SquareShape);
    modelInterface->addPrimitive(std::move(primitive));
    return;
}

void Controller::removePrimitive(std::uint64_t id) {
    modelInterface->removePrimitive(id);
    return;
}

void Controller::displayPrimitives(void) {
    std::size_t primitivesNum = modelInterface->getSize();
    for (std::size_t i = 0; i < primitivesNum; i++) {
        viewInterface->displayPrimitive(modelInterface->getPrimitive(i));
    }
    return;
}
