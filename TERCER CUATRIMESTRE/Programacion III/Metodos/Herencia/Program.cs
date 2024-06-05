using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Herencia
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Persona p1 = new Persona();

            Developer d1 = new Developer();

            Lider l1 = new Lider();

            Tester t1 = new Tester();
            Tester t2 = new Tester();
            Tester t3 = new Tester();
            Tester t4 = new Tester();


            t1.Nombre = "Paisa";
            t2.Nombre = "Juanfer";
            t3.Nombre = "Gonzax";
            t4.Nombre = "Dieguito";



            List<Tester> listaTesters = new List<Tester>();
            listaTesters.Add(t1);
            listaTesters.Add(t2);
            listaTesters.Add(t3);
            listaTesters.Add(t4);


            Console.WriteLine("La cantidad de testers es: " + listaTesters.Count);
            listaTesters[0].Nombre = "Nico";
            Console.WriteLine("El nombre es : " + listaTesters[0].Nombre);
            listaTesters.Remove(t3);
            Console.WriteLine("La cantidad de testers es: " + listaTesters.Count);

            foreach (Tester item in listaTesters)
            {
                Console.WriteLine("Nombre: " + item.Nombre);
            }

            t1.Cargo = "Ingeniero de homologaciones";
            Console.WriteLine(t1.ToString());


        }
    }
}
