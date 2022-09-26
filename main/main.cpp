#include <cstdlib>
#include <iostream>

#include "example.h"

int main(int argc, char** argv)
{
   //llamamos a las funciones
    float *area=new float;
    *area = 0;
    area_circulo(0, area);
    cout << *area<<endl;
    area_circulo(2, area);
    cout << *area<<endl;


    delete area;
    return EXIT_SUCCESS;
}
