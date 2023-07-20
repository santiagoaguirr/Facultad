#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int sumarElemVec(int vec[], int tam);
bool esVectorProblematico(int vec[], int tam);


bool esVectorProblematico(int vec[], int tam){
    float promedio;
    int sumatoria = sumarElemVec(vec[], tam);
    promedio = sumatoria/tam;

    for(int i=0; i<tam-1; i++){
        if((vec[i+1]- vec[i)>promedio)
    }

}

int sumarElemVec(int vec[], int tam){
    int suma=0;
    for(i=0;i<tam;i++){
        suma+=vec[i];
    }
    return suma;
}
#endif // FUNCIONES_H_INCLUDED
