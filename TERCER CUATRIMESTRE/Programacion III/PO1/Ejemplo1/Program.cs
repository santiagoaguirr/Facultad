using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejemplo1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int edad;
            float sueldo;
            string nombre;
            int[] edades = new int[10];
            float[] sueldos = new float[10];
            string[] nombres = new string[10];
            Persona p1= new Persona();
            p1.setEdad(18);
            Console.WriteLine("La edad de la persona es: " + p1.getEdad());

            Botella b1 = new Botella("amarillo", "acero"); // la palabra NEW --> invoca al constructor de la clase. Permite crear el objeto de tipo botella.
            Botella b2; // variable de tipo botella pero que NO contiene un objeto adentro. 

            Botella b3 = new Botella();

            b1.Capacidad = 200; // va a la propiedad capacidad, captura el valor 200 en el "value" y lo asigna a la propiedad

            int algo = b1.Capacidad; // lee el valor de la capacidad y lo almacena en una variable.

            b1.Color = "amarillo";
            b1.Color = "turquesa";
            

            Console.WriteLine("El color de la botella es " + b1.Color);

            b1.Material = "Acero Inoxidable";
            Console.WriteLine("El material de la botella es " + b1.Material);

           
            
        }


    }
}
