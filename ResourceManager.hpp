#pragma once

#include "Resource.hpp"
#include <memory>

class ResourceManager
{
public:
    ResourceManager() : resource_(std::make_unique< Resource >()) {}

    // Konstruktor przenoszenia
    ResourceManager(ResourceManager&& other) noexcept : resource_(std::move(other.resource_)) {}

    // Operator przypisania przenoszenia
    ResourceManager& operator=(ResourceManager&& other) noexcept
    {
        if (this != &other) {
            resource_ = std::move(other.resource_);
        }
        return *this;
    }

    double get() const { return resource_->get(); }

    // Domy�lny konstruktor
    ResourceManager() = default;

    // Domy�lny destruktor
    ~ResourceManager() = default;

    // Konstruktor kopiuj�cy
    ResourceManager(const ResourceManager& other)
        : resource_(std::make_unique< Resource >(*other.resource_))
    {}

    // Operator przypisania kopiuj�cego
    ResourceManager& operator=(const ResourceManager& other)
    {
        if (this != &other) {
            resource_ = std::make_unique< Resource >(*other.resource_);
        }
        return *this;
    }

private:
    std::unique_ptr< Resource > resource_;
};