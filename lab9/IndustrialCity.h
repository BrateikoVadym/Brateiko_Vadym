#ifndef INDUSTRIALCITY_H
#define INDUSTRIALCITY_H

#include "City.h"

class IndustrialCity : public City {
private:
    int factories;

public:
    IndustrialCity(const std::string& name = "", int population = 0, int factories = 0);
    ~IndustrialCity();

    void displayData() const override;
    void inputData() override;

    friend class CityManager; // Дружній клас
};

#endif
