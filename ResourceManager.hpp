#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    Resource()
    {
        // Konstruktor domyœlny symuluj¹cy kosztown¹ inicjalizacjê zasobu
        std::cout << "Resource constructed" << std::endl;
    }

    ~Resource()
    {
        // Destruktor symuluj¹cy zwolnienie zasobu
        std::cout << "Resource destroyed" << std::endl;
    }

    double get() const
    {
        // Symulacja u¿ycia zasobu
        return 42.0; // Symulacyjna wartoœæ
    }

    // Dodaj pozosta³e metody specjalne wed³ug potrzeb
};

class ResourceManager
{
private:
    Resource resource; // Zarz¹dzany zasób

public:
    ResourceManager()
    {
        // Konstruktor domyœlny
        std::cout << "ResourceManager constructed" << std::endl;
    }

    ~ResourceManager()
    {
        // Destruktor, który automatycznie zwolni zarz¹dzany zasób
        std::cout << "ResourceManager destroyed" << std::endl;
    }

    double get() const
    {
        // Przekazanie wywo³ania metody get do zarz¹dzanego zasobu
        return resource.get();
    }

    // Dodaj pozosta³e metody specjalne wed³ug potrzeb  // Twoja implementacja tutaj
};
