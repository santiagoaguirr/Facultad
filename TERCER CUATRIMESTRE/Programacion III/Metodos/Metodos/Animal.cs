using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Metodos
{
    internal class Animal
    {
        
        public Animal(string Nombre, int Edad)
        {
           this.Nombre = Nombre;
           this.Edad = Edad;
        }

        public Animal()
        {

        }

        public string Nombre {get; set;}
        public int Edad { get; set; }

        public string Tipo { get; set; }

        public string Ladrar() // firma del metodo 
        {
            return "guau guau guau!!";
        }


    }
}
