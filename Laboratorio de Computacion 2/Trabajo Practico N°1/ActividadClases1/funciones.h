#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

bool esBisiesto(int anio);

class Fecha{
    private:
        int _dia, _mes, _anio;
    public:
        int getDia();
        int getMes();
        int getAnio();
        void AgregarDia();
        void RestarDia();
        Fecha();
        Fecha(int dia, int mes, int anio);
};




#endif // FUNCIONES_H_INCLUDED
