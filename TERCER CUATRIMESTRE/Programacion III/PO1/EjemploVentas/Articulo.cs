using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EjemploVentas
{
    internal class Articulo
    {


        public int CodigoArticulo { get; set; }
        public float Precio { get; set; }

        private int codMarca;

        public int CodigoMarca
        {
            get { return CodigoMarca; }
            set
            {
                if (value > 0 && value < 11)
                    CodigoMarca = value;
                else
                    CodigoMarca = -1;
            }
             
        }

    }    
}
