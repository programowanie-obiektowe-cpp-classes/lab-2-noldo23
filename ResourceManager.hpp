#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    ResourceManager() : resource_() {}

    double get() const { return const_cast< Resource& >(resource_).get(); }

    // Dobre zdefiniowane metody specjalne:

    // Konstruktor kopiujący
    ResourceManager(const ResourceManager& other) : resource_(other.resource_) {}

    // Operator przypisania
    ResourceManager& operator=(const ResourceManager& other)
    {
        if (this != &other) {
            resource_ = other.resource_;
        }
        return *this;
    }

    // Konstruktor przenoszący
    ResourceManager(ResourceManager&& other) noexcept : resource_(std::move(other.resource_)) {}

    // Operator przypisania przenoszący
    ResourceManager& operator=(ResourceManager&& other) noexcept
    {
        if (this != &other) {
            resource_ = std::move(other.resource_);
        }
        return *this;
    }

    // Destruktor
    ~ResourceManager() = default;

private:
    Resource resource_;
};
