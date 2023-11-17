#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    ResourceManager() : resource_() {}

    double get() const { return const< Resource& >(resource_).get(); }

    // Dobre zdefiniowane metody specjalne:

    // Konstruktor kopiuj¹cy
    ResourceManager(const ResourceManager& other) : resource_(other.resource_) {}

    // Operator przypisania
    ResourceManager& operator=(const ResourceManager& other)
    {
        if (this != &other) {
            resource_ = other.resource_;
        }
        return *this;
    }

    // Konstruktor przenosz¹cy
    ResourceManager(ResourceManager&& other) noexcept : resource_(std::move(other.resource_)) {}

    // Operator przypisania przenosz¹cy
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
