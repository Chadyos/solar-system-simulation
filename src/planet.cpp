#include "../include/planet.hpp"
#include <iostream>
Planet::Planet(long double x, long double y, long double radius, long double mass) {
    // initialisation des membres de la classe
    this->x = x ;
    this->y = y ;
    this->radius = radius;
    this->mass = mass;
}
double Planet::get_x() {
    return x;
}

double Planet::get_y() {
    return y;
}

float Planet::get_radius() {
    return radius;
}

double Planet::get_mass(){
    return mass;
}

void Planet::set_x(long double x) {
    this->x = x;
}

void Planet::set_y(long double y) {
    this->y = y;
}

void Planet::set_radius(long double radius) {
    this->radius = radius;
}
void Planet::print() {
    std::cout << "Planet at (" << this->x << ", " << this->y << ") with radius " << radius << " and mass " << mass << " t" << std::endl;
}
