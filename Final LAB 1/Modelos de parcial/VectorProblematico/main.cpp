#include <iostream>

using namespace std;

#include "Funciones.h"

int main()
{
    int v1[4] = { 1, 5, 9, 19 };
    int v2[4] = {1,3,6,10};

    cout << esVectorProblematico(v1,4) << endl;
    cout << esVectorProblematico(v2,4) << endl;

    return 0;
}
