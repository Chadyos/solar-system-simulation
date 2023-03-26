#include <iostream>
#include "include/planet.hpp"
#include "include/solar_system.hpp"
#include <vector>


int main() {

    // Crée une instance de la classe Planet
    std::vector<Planet> solar_system = create_solar_system();

    // Affiche les propriétés des planètes
    for (std::size_t i = 0; i <solar_system.size(); i++){
        solar_system[i].print();
    }
    return 0;
}

