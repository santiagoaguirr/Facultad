using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejemplo1
{
    internal class Persona
    {
        //Persona: edad, sueldo, nombre;
        // ATRIBUTOS O MIEMBROS --> variables que guardan la info de la persona, deben estar encapsulados.
        // Un miembro de una clase no tiene que poder ser accedido de ninguna manera desde el exterior. Excepto por sus metodos de manera indirecta.

        // MODIFICADORES DE VISIBILIDAD
        // --> PUBLIC: full acceso desde otros elementos
        // --> private: sin acceso
        private int edad;
        private float sueldo;
        private string nombre;

        public void setEdad(int e)
        {
            edad = e;
        }
         public int getEdad()
        {
            return edad;
        }
        


    }
}
