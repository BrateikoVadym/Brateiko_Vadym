#include "CityManager.h"

// Вивід усіх міст
void CityManager::displayAllCities(const std::vector<City*>& cities) {
    std::cout << "\nДані про міста:\n";
    for (const auto& city : cities) {
        city->displayData();
    }
}
