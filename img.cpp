// Program to create image in PPM format

#include "vec3.h"
#include "colour.h"

#include <iostream>

using namespace std;

int main()
{
    // Image Dimensions
    const int img_height = 256;
    const int img_width = 256;

    // Rendering Image in PPM format
    cout << "P3\n" << img_width << ' ' << img_height << "\n255\n"; 

    int i,j;
    for (i = img_height-1; i >= 0; --i)
    {
        cerr << "\rScanlines Remaining : " << i << ' ' << flush;
        for (j = 0; j < img_width; j++)
        {
            colour pixel_colour(double(j)/(img_width-1),double(i)/(img_height-1),0.25);
            write_colour(cout,pixel_colour);
        }
    }
    cerr << "\nDone\n";
}



