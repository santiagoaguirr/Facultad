using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejemplo1
{
    internal class Botella
    {
        public Botella(string color, string material)
        {
            this.color = color;
            this.material = material;
        }
        // sobrecargar el constructor
        public Botella() { }


        private int capacidad;
        private string color;
        private string material;

        //PROPIEDAD: PSEUDO METODO  --> acota escribir el getter y el setter haciendolo todo en 1.
        // permite asignar valor a la propiedad privada como si fuera una variable:
        // b1.capacidad = 200;

        public int Capacidad
        {
            get { return capacidad; }
            set { capacidad = value; }
        }

        public string Color
        {
            get { return color; }
            set { color = value; }
        }

        public string Material { get; set; }





        /*
        public void setCapacidad(int c)
        {
            capacidad = c;
        }
        public float getCapacidad()
        {
            return capacidad;
        }

        public void setColor(string nuevocolor)
        {
            color = nuevocolor;
        } 
        public string getColor()
        {
            return color;
        }

        public void setMaterial(string nuevomaterial)
        {
            material = nuevomaterial;
        }
        public string getMaterial()
        {
            return material;
        }
        */

       

    }
}
