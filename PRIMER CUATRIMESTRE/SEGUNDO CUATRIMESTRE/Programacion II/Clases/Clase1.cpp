#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	cout << "Hello world!" << endl;

	int *punteroInt;
	char *punteroChar;
	float *punteroFloat;
    // el nombre del vector es un puntero constante a la primera posicion del vector v[0]
    // *v y v[] es lo mismo, ya que v[]

    // el puntero tiene que tener definido un tipo para saber cuantos bytes se requieren para pasar a la siguiente
    // posicion ( Mejor dicho, eso no aplica solo para el caso de un vector?)



	return 0;
}
