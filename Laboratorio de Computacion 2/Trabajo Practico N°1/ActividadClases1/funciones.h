#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/*Actividad 1

Realizar la declaraci�n de la clase en un archivo H y la definici�n de los m�todos en un archivo CPP. La clase fecha debe
almacenar los siguientes atributos enteros: _dia, _mes y _anio.
*/

//Actividad 2
//Realizar m�todos getters para cada una de las propiedades mencionadas anteriormente.


class Fecha{
    private:
        int _dia, _mes, _anio;
    public:
        int getDia();
        int getMes();
        int getAnio();
        Fecha();
        Fecha(int dia, int mes, int anio);
};




#endif // FUNCIONES_H_INCLUDED
