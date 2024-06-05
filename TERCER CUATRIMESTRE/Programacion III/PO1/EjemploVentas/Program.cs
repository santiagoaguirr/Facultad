using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EjemploVentas
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Articulo[] articulos = new Articulo[10]; // CREO UN VECTOR DE 10 ARTICULOS.

            for (int i = 0; i < 10; i++)
            {
                Console.WriteLine("Ingrese los datos del producto..");
                Console.WriteLine("Codigo: ");
                articulos[i].CodigoArticulo = int.Parse(Console.ReadLine());
                Console.WriteLine("Precio: ");
                articulos[i].Precio = float.Parse(Console.ReadLine());
                Console.WriteLine("Marca (1 a 10): ");
                articulos[i].CodigoMarca = int.Parse(Console.ReadLine());                   
            }

        }
    }
}
