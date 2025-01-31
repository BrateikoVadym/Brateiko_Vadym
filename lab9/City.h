#ifndef CITY_H
#define CITY_H

#include <string>
#include <iostream>

class CityManager; // Оголошення дружнього класу

class City {
protected:
    std::string name;
    int population;

public:
    City(const std::string& name = "", int population = 0);
    virtual ~City();

    virtual void displayData() const;
    virtual void inputData();

    // Дружній клас
    friend class CityManager;
};

#endif
