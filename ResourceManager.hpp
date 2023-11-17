#pragma once

#include "Resource.hpp"

class ResourceManager
{
private:
    Resource resource; // Zarz¹dzany zasób

public:
    ResourceManager();  // Konstruktor domyœlny
    ~ResourceManager(); // Destruktor

    double get() const; // Metoda zwracaj¹ca wynik zasobu

    // Dodaj pozosta³e metody specjalne wed³ug potrzeb
    ResourceManager(const ResourceManager& other);            // Konstruktor kopiuj¹cy
    ResourceManager& operator=(const ResourceManager& other); // Operator przypisania
};

// ResourceManager.cpp
#include "ResourceManager.hpp"

ResourceManager::ResourceManager()
{
    // Konstruktor domyœlny
}

ResourceManager::~ResourceManager()
{
    // Destruktor
}

double ResourceManager::get() const
{
    // Przekazanie wywo³ania metody get do zarz¹dzanego zasobu
    return resource.get();
}

ResourceManager::ResourceManager(const ResourceManager& other) : resource(other.resource)
{
    // Konstruktor kopiuj¹cy
}

ResourceManager& ResourceManager::operator=(const ResourceManager& other)
{
    // Operator przypisania
    if (this != &other) {
        resource = other.resource;
    }
    return *this;
};
