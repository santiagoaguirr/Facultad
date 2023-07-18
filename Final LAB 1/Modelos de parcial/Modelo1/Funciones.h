#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void esVectorVeleziano(int vec[], int tam);
void ponerCeroVector(int vec[], int tam);
int posMaximoVector(int vec[], int tam);
void problema2();

/*
void esVectorVeleziano(int vec[], int tam){
    int contParejas=0;
    int bandera=1;
    int var;

    for(int i=0; i<tam; i++){
        var = vec[i];
        contParejas = 0;
        for(int x=0; x<tam; x++){
            if(var == vec[x]){
                contParejas++;
            }
        }
        if(contParejas != 2){
            bandera = 0;
        }
    }
    cout << bandera;
}
*/
void ponerCeroVector(int vec[], int tam){
    for(int i=0; i<tam; i++){
        vec[i] = 0;
    }
}
void mostrarVector(int vec[], int tam){
    for(int i=0; i<tam; i++){
        cout << vec[i] << " - ";
    }
}

int posMaximoVector(int vec[], int tam){  /// RETORNA LA POS QUE TIENE EL VALOR MAXIMO, NO EL VALOR
    int maximo = vec[0];
    int posmax;
    for(int i=0;i<tam;i++){
        if(vec[i]>maximo)
            maximo = vec[i];
            posmax = i+1;
    }
    return posmax;
}

/// PROBLEMA 2:


void problema2(){

    int codigoProyecto, codigoProveedor, diaCompra;
    char tipoArticulo;
    float importeCompra;
    ///punto 1:
    int vecProvNoPintura[10]={0,0,0,0,0,0,0,0,0,0};
    ///punto 2:
    int vecGastosPorDia[31];
    ponerCeroVector(vecGastosPorDia,31);

    /// punto3:
    int vecComprasProv[100][2];


    cout << "Ingrese el codigo de PROYECTO: " << endl;
    cin >> codigoProyecto;

    while(codigoProyecto != 0){

        cout << "Codigo de proveedor: " << endl;
        cin >> codigoProveedor;
        cout << "Dia de la compra: " << endl;
        cin >> diaCompra;
        cout << "Tipo de articulo ('M' - Materiales de construccion, 'P' - Pinturas): " << endl;
        cin >> tipoArticulo;
        if(tipoArticulo == 'P'){
            vecProvNoPintura[codigoProveedor-1] = 1; /// PUNTO 1
        }
        cout << "Importe de la compra: " << endl;
        cin >> importeCompra;
        vecGastosPorDia[diaCompra-1]+=importeCompra; /// PUNTO 2
        cout << "------------------------------" << endl;
        cout << "Datos ingresados correctamente" << endl;
        cout << "------------------------------" << endl;
        system("pause");
        system("cls");
        cout << "Ingrese codigo de PROYECTO; " << endl;
        cin >> codigoProyecto;

    }
    //PTO 1:
    cout << "Proveedores a los que nunca se les compro pintura: " << endl;
    for(int i=0; i<10; i++){
        if(vecProvNoPintura[i] == 0){
            cout << "Proveedor: " << i+1 << endl;
        }
    }

    cout << "PUNTO 2: " << endl;
    cout << "vector gastos por dia post carga de datos: " << endl;
    mostrarVector(vecGastosPorDia, 31);

    //PTO 2:
    int diaMaxGasto;
    diaMaxGasto = posMaximoVector(vecGastosPorDia,31);
    cout << "El dia de Octubre en el que mas se gasto fue el dia: " << diaMaxGasto << endl;


}






#endif // FUNCIONES_H_INCLUDED
