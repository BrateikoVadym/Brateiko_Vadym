#ifndef CITYMANAGER_H
#define CITYMANAGER_H

#include "City.h"
#include "IndustrialCity.h"
#include "CulturalCity.h"
#include <vector>

class CityManager {
public:
    static void displayAllCities(const std::vector<City*>& cities);
};

#endif
