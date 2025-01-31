#ifndef CULTURALCITY_H
#define CULTURALCITY_H

#include "City.h"

class CulturalCity : public City {
private:
    int museums;

public:
    CulturalCity(const std::string& name = "", int population = 0, int museums = 0);
    ~CulturalCity();

    void displayData() const override;
    void inputData() override;

    friend class CityManager; // Дружній клас
};

#endif
