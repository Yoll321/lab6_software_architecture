#include <memory>

#include "Controller.hpp"
#include "Factory.hpp"
#include "Model.hpp"
#include "View.hpp"

int main() {
    auto model = std::make_shared<Model>();
    auto view = std::make_shared<View>();
    auto factory = std::make_shared<Factory>();

    Controller controller(model, view, factory);
    std::string inFileName = "./in/file/name";
    std::string outFileName = "./out/file/name";
    controller.createDocument();
    controller.importDocument(inFileName);
    controller.addPrimitive(Shape::SquareShape);
    controller.addPrimitive(Shape::SquareShape);
    controller.addPrimitive(Shape::SquareShape);
    controller.displayPrimitives();
    controller.removePrimitive(0);
    controller.displayPrimitives();
    controller.exportDocument(outFileName);
    return 0;
}