#pragma once
#include "Model.hpp"
#include "Factory.hpp"
#include "View.hpp"

class Controller {
public:
    Controller(std::shared_ptr<IModel> modelInterface,
               std::shared_ptr<IView> viewInterface,
               std::shared_ptr<IFactory> factoryInterface)
        : modelInterface(std::move(modelInterface)),
          viewInterface(std::move(viewInterface)),
          factoryInterface(std::move(factoryInterface)) {};

    void createDocument();
    void importDocument(std::string& path);
    void exportDocument(std::string& path);
    void addPrimitive(Shape shape);
    void removePrimitive(std::uint64_t id);

    void displayPrimitives(void);

private:
    std::shared_ptr<IModel> modelInterface = {};
    std::shared_ptr<IFactory> factoryInterface = {};
    std::shared_ptr<IView> viewInterface = {};
};
