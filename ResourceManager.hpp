#pragma once

#include "Resource.hpp"
#include <memory>

class ResourceManager
{
public:
    ResourceManager() : resource_(std::make_unique< Resource >()) {}

    double get() const { return resource_->get(); }

    // Domy�lny konstruktor
    ResourceManager() = default;

    // Domy�lny destruktor
    ~ResourceManager() = default;

    // Konstruktor kopiuj�cy
    ResourceManager(const ResourceManager& other)
        : resource_(std::make_unique< Resource >(*other.resource_))
    {}

    // Operator przypisania kopiuj�cy
    ResourceManager& operator=(const ResourceManager& other)
    {
        if (this != &other) {
            resource_ = std::make_unique< Resource >(*other.resource_);
        }
        return *this;
    }

    // Operator przypisania przenosz�cy
    ResourceManager& operator=(ResourceManager&&) noexcept = default;

private:
    std::unique_ptr< Resource > resource_;
};
