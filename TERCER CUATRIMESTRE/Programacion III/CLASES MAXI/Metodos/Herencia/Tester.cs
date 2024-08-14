using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Herencia
{
    internal class Tester : Persona
    {
        public string Cargo { get; set; }
        public override string ToString()
        {
            return "Tester: " + Cargo; 
        }
    }
}
