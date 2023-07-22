#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <string>

int sumarElemVec(int vec[], int tam);
bool esVectorProblematico(int vec[], int tam);


bool esVectorProblematico(int vec[], int tam){
    float promedio;
    int bandera = 0;
    int sumatoria;
    sumatoria = sumarElemVec(vec, tam);
    promedio = sumatoria/tam;

    for(int i=0; i<tam-1; i++){
        if(((vec[i+1]- vec[i]))>promedio){
            bandera = 1;
        }
    }
    if(bandera == 1)
        return true;
    else
        return false;
}

int sumarElemVec(int vec[], int tam){
    int suma=0;
    for(int i=0;i<tam;i++){
        suma+=vec[i];
    }
    return suma;
}
#endif // FUNCIONES_H_INCLUDED

void ponerCeroMatriz(int mat[][10], int filas, int columnas){
    for(int i=0; i<filas; i++){
        for(int x=0; x<columnas; x++){
            mat[i][x] = 0;
        }
    }
}

void Problema2(){

    int codigoExcavacion, nroFosilDinosaurio, nivelConservacion, completo;

    cout << "Ingrese codigo de excavacion: " << endl;
    cin >> codigoExcavacion;
    /// PUNTO1:
    string nombreDinosaurios[15] = {"Tyrannosaurus rex"
,"Velociraptor"
,"Stegosaurus"
,"Triceratops"
,"Brachiosaurus"
,"Diplodocus"
,"Ankylosaurus"
,"Allosaurus"
,"Pterodactylus"
,"Parasaurolopus"
,"Spinosaurus"
,"Gallimimus"
,"Archaeoptery"
,"Iguanodon"
,"Compsognathus"};
    int matEstadosDino[15][10];


    while(codigoExcavacion!=0){
        cout << "Numero de fosil: " << endl;
        cin >> nroFosilDinosaurio;
        cout << "Nivel de conservacion: (0 a 10) " << endl;
        cin >> nivelConservacion;
        cout << "¿Se encuentra completo?(1-Completo, 0-Incompleto)" << endl;
        cin >> completo;
        cout << "------------------------------"<< endl;
        cout << "Datos ingresados correctamente" << endl;
        cout << "------------------------------"<< endl;
        system("pause");
        system("cls");
        cout << "Ingrese codigo de excavacion: " << endl;
        cin >> codigoExcavacion;

    }


}





















