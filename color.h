#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

#include <iostream>

void write_colour(std::ostream &out, colour pixel_colour)
{
    // Writing the translated value of each colour component for each pixel
    out << static_cast<int>(255.99*pixel_colour.x()) << ' '
        << static_cast<int>(255.99*pixel_colour.x()) << ' '
        << static_cast<int>(255.99*pixel_colour.x()) << '\n ';
}

#endif
