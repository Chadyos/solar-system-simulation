#include "../include/solar_system.hpp"

std::vector<Planet> create_solar_system() {
    std::vector<Planet> solar_system;

    solar_system.emplace_back(0, 0, 696340, 1.989e30L);        // Soleil
    solar_system.emplace_back(57.91e6, 0, 2439.7, 3.301e23L);   // Mercure
    solar_system.emplace_back(108.2e6, 0, 6051.8, 4.867e24L);   // Venus
    solar_system.emplace_back(149.6e6, 0, 6371, 5.972e24L);     // Terre
    solar_system.emplace_back(227.9e6, 0, 3389.5, 6.417e23L);   // Mars
    solar_system.emplace_back(778.3e6, 0, 69911, 1.898e27L);    // Jupiter
    solar_system.emplace_back(1427e6, 0, 58232, 5.683e26L);     // Saturne
    solar_system.emplace_back(2871e6, 0, 25362, 8.681e25L);     // Uranus
    solar_system.emplace_back(4498e6, 0, 24622, 1.024e26L);     // Neptune

    return solar_system;
}
