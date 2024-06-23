using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using dominio;
using acceso_datos;

namespace negocio
{
    public class UsuarioNegocio
    {
        public bool Loguear(Usuario usuario)
        {

			AccesoDatos datos = new AccesoDatos();
			try
			{
				datos.setearQuery("Select id, tipouser from USUARIOS Where usuario = @user AND pass = @pass");
				datos.agregarParametro("@user", usuario.User);
				datos.agregarParametro("@pass")
			}
			catch (Exception ex)
			{

				throw ex;
			}
        }
    }
}
