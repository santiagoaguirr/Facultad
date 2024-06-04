using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Metodos
{
    internal class Program
    {
        static void Main(string[] args)
        {

            Animal a1 = new Animal();
            Console.WriteLine("El tipo de animal es " + a1.Tipo);
            a1.Nombre = "Dumbo";
            a1.Edad = 3;
            Console.WriteLine("Su nombre es: " + a1.Nombre + " y tiene " + a1.Edad + " años.");

            Animal[] animales = new Animal[10];
            animales[0] = a1;
            Console.WriteLine(animales[0].Nombre);
            Console.WriteLine(a1.Ladrar());
            Console.WriteLine(a1.GetHashCode());
            Persona p1 = new Persona("nombre");
        }
    }
}
