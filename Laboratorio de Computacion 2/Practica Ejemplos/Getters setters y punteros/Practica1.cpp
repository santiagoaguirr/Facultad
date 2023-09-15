#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class Examen{
    private:
        char apellido[50];
    public:
        const char * getApellido(){
            return apellido;
        };
        void setApellido(const char *nuevoApellido){
            strcpy(apellido, nuevoApellido);
        }
};


int main(){

    Examen examen;
    const char *Apellido;

    examen.setApellido("Gimenez");
    Apellido = examen.getApellido();


    cout << "Apellido : " << Apellido << endl;
	return 0;
}
