#include "IndustrialCity.h"
#include "CulturalCity.h"
#include "CityManager.h"
#include <vector>

int main() {
    std::vector<City*> cities;

    // Додати промислове місто
    IndustrialCity* industrialCity = new IndustrialCity();
    industrialCity->inputData();
    cities.push_back(industrialCity);

    // Додати культурне місто
    CulturalCity* culturalCity = new CulturalCity();
    culturalCity->inputData();
    cities.push_back(culturalCity);

    // Вивід даних через дружній клас
    CityManager::displayAllCities(cities);

    // Очистити пам'ять
    for (auto& city : cities) {
        delete city;
    }

    return 0;
}
