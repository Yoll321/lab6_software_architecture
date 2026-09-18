#pragma once
#include <vector>
#include <memory>
#include <string>

#include "Primitive.hpp"

class IModel {
public:
    IModel() = default;
    virtual ~IModel() = default;
    virtual void createDocument() = 0;
    virtual void importDocument(const std::string& path) = 0;
    virtual void exportDocument(const std::string& path) = 0;
    virtual void addPrimitive(std::unique_ptr<Primitive> primitive) = 0;
    virtual void removePrimitive(std::uint64_t id) = 0;
    virtual std::size_t getSize() = 0;
    virtual std::unique_ptr<Primitive>& getPrimitive(std::size_t pos) = 0;
};

class Model: public IModel {
private:
    std::vector<std::unique_ptr<Primitive>> primitives_;

public:
    Model() = default;
    void createDocument() override;
    void importDocument(const std::string& path) override;
    void exportDocument(const std::string& path) override;
    void addPrimitive(std::unique_ptr<Primitive> primitive) override;
    void removePrimitive(std::uint64_t id) override;
    std::size_t getSize() override;
    std::unique_ptr<Primitive>& getPrimitive(std::size_t pos) override;
};