#include <iostream>
#include <cstdlib>
using namespace std;
#include "funciones.h"

/*Actividad 1
Realizar la declaración de la clase en un archivo H y la definición de los métodos en un archivo CPP. La clase fecha debe
almacenar los siguientes atributos enteros: _dia, _mes y _anio.
*/

int Fecha::getDia(){
    cout << _dia << endl;
}

int Fecha::getMes(){
    cout << _mes << endl;
}

int Fecha::getAnio(){
    cout << _anio << endl;
}

Fecha::Fecha(){
    _anio = 2;
    _mes = 2;
    _dia = 2023;
}

Fecha::Fecha(int dia,int mes, int anio){
    if(dia<0 || dia > 31 || mes <= 0 || mes > 12){
        _dia = 1;
        _mes = 1;
        _anio= 2023;
    }else{
    _dia = dia;
    _mes = mes;
    _anio = anio;
    }

}
