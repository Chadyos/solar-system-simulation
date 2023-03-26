#pragma once

#include <SFML/Graphics.hpp>

class Planet {
    long double x; 
    long double y;
    long double mass;
    long double radius; 
    public:
        //Getters
        Planet(long double x, long double y, long double radius, long double mass);
        double get_x();
        double get_y();
        double get_mass();
        float get_radius(); 

        //Setters
        void set_x(long double x); 
        void set_y(long double y); 

        void set_radius(long double radius);
        void print(); 

};