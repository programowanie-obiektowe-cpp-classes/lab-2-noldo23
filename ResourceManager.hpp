#pragma once

#include "Resource.hpp"

class ResourceManager
{
private:
    Resource resource; // Zarz�dzany zas�b

public:
    ResourceManager();  // Konstruktor domy�lny
    ~ResourceManager(); // Destruktor

    double get() const; // Metoda zwracaj�ca wynik zasobu

    // Dodaj pozosta�e metody specjalne wed�ug potrzeb
    ResourceManager(const ResourceManager& other);            // Konstruktor kopiuj�cy
    ResourceManager& operator=(const ResourceManager& other); // Operator przypisania
};

// ResourceManager.cpp
#include "ResourceManager.hpp"

ResourceManager::ResourceManager()
{
    // Konstruktor domy�lny
}

ResourceManager::~ResourceManager()
{
    // Destruktor
}

double ResourceManager::get() const
{
    // Przekazanie wywo�ania metody get do zarz�dzanego zasobu
    return resource.get();
}

ResourceManager::ResourceManager(const ResourceManager& other) : resource(other.resource)
{
    // Konstruktor kopiuj�cy
}

ResourceManager& ResourceManager::operator=(const ResourceManager& other)
{
    // Operator przypisania
    if (this != &other) {
        resource = other.resource;
    }
    return *this;
};
