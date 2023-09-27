#include <iostream>

using namespace std;
#include "funciones.h"

int main()
{
    Fecha f(1,3,2023);
    f.getDia();
    f.getMes();
    f.getAnio();
    f.RestarDia();
    f.getDia();
    f.getMes();
    f.getAnio();
    return 0;
}
