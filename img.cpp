// Program to create image in PPM format

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
        for (j = 0; j < img_width; j++)
        {
            auto r = double(i)/(img_width-1);
            auto g = double(j)/(img_height-1);
            auto b = 0.25;

            int ir = static_cast<int>(255.999*r);
            int ig = static_cast<int>(255.999*g);
            int ib = static_cast<int>(255.999*b);

            cout << ir << ' ' << ig << ' ' << ib << endl;
        }
    }
}



