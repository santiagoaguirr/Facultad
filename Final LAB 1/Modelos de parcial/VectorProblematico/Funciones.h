#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

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
