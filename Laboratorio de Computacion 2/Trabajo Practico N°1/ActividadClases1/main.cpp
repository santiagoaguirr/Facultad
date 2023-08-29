#include <iostream>

using namespace std;
#include "funciones.h"

int main()
{
    Fecha fecha1;
    fecha1.getDia();
    fecha1.getMes();
    fecha1.getAnio();

    Fecha fecha2(1,2,2027);
    fecha2.getDia();
    fecha2.getMes();
    fecha2.getAnio();

    return 0;
}
