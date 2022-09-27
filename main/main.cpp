#include <cstdlib>
#include <iostream>

#include "example.h"

int main(int argc, char** argv)
{
   //llamamos a las funciones
    float *area=new float;
    *area = 0;
    area_circulo(0, area);
    cout << "probando funcion area:"<<endl;
    cout << *area<<endl;
    area_circulo(2, area);
    cout << *area<<endl;
    float* punto1 = new float[2];
    float* punto2 = new float[2];
    punto1[0] = 0;
    punto1[1] = 0;
    punto2[0] = 0;
    punto2[1] = 0;
    cout << "probando funcion distancia" << endl;
    cout << Distancia(punto1, punto2) << endl;
    punto1[0] = 1.2;
    punto1[1] = 0.5;
    punto2[0] = -0.5;
    punto2[1] = 3;
    cout << Distancia(punto1, punto2) << endl;
    delete []punto1;
    delete []punto2;
    delete area;
    return EXIT_SUCCESS;
}
