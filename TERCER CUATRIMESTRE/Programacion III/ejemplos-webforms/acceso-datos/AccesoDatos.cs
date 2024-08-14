using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.SqlClient;
using System.Security.Cryptography.X509Certificates; // agregar

namespace acceso_datos
{
    public class AccesoDatos
    {
        // Objetos atributos de la clase AccesoDatos que necesito para establecer una conexion
        private SqlConnection conexion;
        private SqlCommand comando;
        private SqlDataReader lector;
        public SqlDataReader Lector // permite leer el lector desde el exterior, no permite escribirlo
        {
            get { return lector; }
        }
        
        public AccesoDatos()
        {
            conexion = new SqlConnection("server=.\\SQLEXPRESS; database=POKEDEX DB; integrated security=true"); // al momento de la creación le paso la cadena de conexion a la base de datos
            // centraliza la cadena de caracteres dentro de la clase acceso datos
            comando = new SqlCommand();

        }

        public void setearConsulta(string consulta) // encapsula la accion de darle un tipo al comando y darle la query
        {
            comando.CommandType = System.Data.CommandType.Text;
            comando.CommandText = consulta;
        }

        public void ejecutarLectura()
        {
            comando.Connection = conexion;
            try
            {
                conexion.Open();
                lector = comando.ExecuteReader(); // realiza la lectura y lo guarda en el lector
            }
            catch (Exception ex)
            {

                throw ex;
            }
        }
        
        public void cerrarConexion()
        {
            if(lector != null)// si realize una lectura, el lector es distinto de nulo    
                lector.Close();
            conexion.Close();                     
        }


    }
}
