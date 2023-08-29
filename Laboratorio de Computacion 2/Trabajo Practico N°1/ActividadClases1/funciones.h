#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/*Actividad 1

Realizar la declaración de la clase en un archivo H y la definición de los métodos en un archivo CPP. La clase fecha debe
almacenar los siguientes atributos enteros: _dia, _mes y _anio.
*/

//Actividad 2
//Realizar métodos getters para cada una de las propiedades mencionadas anteriormente.


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
