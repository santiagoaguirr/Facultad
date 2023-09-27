#include <iostream>
#include <cstdlib>
using namespace std;
#include "funciones.h"

bool esBisiesto(int anio){
    if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){
        return true;
    }
    else{
        return false;
    }
}

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
    _anio = 1;
    _mes = 1;
    _dia = 2023;
}

Fecha::Fecha(int dia,int mes, int anio){
    int vecDiasMes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(mes == 2){
        if((esBisiesto(anio) == true)){
            vecDiasMes[1] = vecDiasMes[1] + 1;  
        }
    }
    if(dia > vecDiasMes[mes-1] || dia < 1 || mes < 1 || mes > 12 || anio < 0){
        _dia = 1;
        _mes = 1;
        _anio = 2023;
    }
    else{
        _dia = dia;
        _mes = mes;
        _anio = anio;
    }
}

void Fecha::AgregarDia(){
    int vecDiasMes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    _dia++;
    if(esBisiesto(_anio)==true){
        vecDiasMes[1]++;
    }
    if(_dia > vecDiasMes[_mes-1]){
        _dia = 1;
        _mes++;
    }
    if(_mes > 12){
        _mes = 1;
        _anio++;
    }
}

void Fecha::RestarDia(){
    int vecDiasMes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(esBisiesto(_anio)==true){
        vecDiasMes[1]+=1;
    }
    _dia--;
    if(_dia < 1){
        _mes--;
        if(_mes < 1){
            _mes = 12;
            _anio--;
        }
        _dia = vecDiasMes[_mes-1];
    }
}

void Fecha::AgregarDias(int dias){
    _dia+=dias;
    int vecDiasMes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    





}