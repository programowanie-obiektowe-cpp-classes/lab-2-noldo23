#pragma once

#include "Resource.hpp"
#include <memory>

class ResourceManager
{
public:
    ResourceManager() : resource_(std::make_unique< Resource >()) {}

    double get() const { return resource_->get(); }

    // Domyœlny konstruktor
    ResourceManager() = default;

    // Domyœlny destruktor
    ~ResourceManager() = default;

    // Konstruktor kopiuj¹cy
    ResourceManager(const ResourceManager& other)
        : resource_(std::make_unique< Resource >(*other.resource_))
    {}

    // Operator przypisania kopiuj¹cy
    ResourceManager& operator=(const ResourceManager& other)
    {
        if (this != &other) {
            resource_ = std::make_unique< Resource >(*other.resource_);
        }
        return *this;
    }

    // Operator przypisania przenosz¹cy
    ResourceManager& operator=(ResourceManager&&) noexcept = default;

private:
    std::unique_ptr< Resource > resource_;
};
