#include "example.h"
void area_circulo(float radio, float* area) 
{
    float const PI = 3.14;

    *area = PI * (radio * radio);



    return;
}

float Distancia(float* punto1, float* punto2) {

    float solucion;
    float aux1 = (punto1[0] - punto2[0]) * (punto1[0] - punto2[0]);
    float aux2= (punto1[1] - punto2[1]) * (punto1[1] - punto2[1]);
    solucion = sqrt(aux1 + aux2);
   
    return solucion;
}

namespace foobar
{
    int Example::getValue() const
    {
        return 99;
    }
}
