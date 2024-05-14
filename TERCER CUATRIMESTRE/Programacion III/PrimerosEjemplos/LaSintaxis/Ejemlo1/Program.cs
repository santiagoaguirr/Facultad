using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejemlo1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hola que tal");
            // variables
            // int float bool char
            // double, decimal, long, short, string datetime
            int a, b, c, d;
            float h, f;
            Console.WriteLine("Ingrese un nro: ");
            a = int.Parse(Console.ReadLine()); // transforma lo que devuelve el read line a valor int
            a = 10;
            b = 10;
            c = a + b;

            Console.WriteLine("El resultado es: " + c);
            Console.ReadKey();

        }
    }
}
