#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    Resource()
    {
        // Konstruktor domy�lny symuluj�cy kosztown� inicjalizacj� zasobu
        std::cout << "Resource constructed" << std::endl;
    }

    ~Resource()
    {
        // Destruktor symuluj�cy zwolnienie zasobu
        std::cout << "Resource destroyed" << std::endl;
    }

    double get() const
    {
        // Symulacja u�ycia zasobu
        return 42.0; // Symulacyjna warto��
    }

    // Dodaj pozosta�e metody specjalne wed�ug potrzeb
};

class ResourceManager
{
private:
    Resource resource; // Zarz�dzany zas�b

public:
    ResourceManager()
    {
        // Konstruktor domy�lny
        std::cout << "ResourceManager constructed" << std::endl;
    }

    ~ResourceManager()
    {
        // Destruktor, kt�ry automatycznie zwolni zarz�dzany zas�b
        std::cout << "ResourceManager destroyed" << std::endl;
    }

    double get() const
    {
        // Przekazanie wywo�ania metody get do zarz�dzanego zasobu
        return resource.get();
    }

    // Dodaj pozosta�e metody specjalne wed�ug potrzeb  // Twoja implementacja tutaj
};
