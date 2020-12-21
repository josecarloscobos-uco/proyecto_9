#ifndef _MONITOR_
#define _MONITOR_

#include <string>
#include <list>
#include "Ruta.h"

using namespace std;

class Monitor{
	private:
		string dni_;
		string nombre_;
		string apellidos_;
		int telefono_;
		string direccion_;
		string correo_;
		string fechaNacimiento_;
		list <Ruta> rutas;
	public:
		Monitor(string dni="", string nombre="",string apellidos="", int telefono=0, string direccion="", string correo="", string fechaNacimiento=""){
				dni_=dni;
				nombre_=nombre;
				apellidos_=apellidos;
				telefono_=telefono;
				direccion_=direccion;
				correo_=correo;
				fechaNacimiento_=fechaNacimiento;
		}
		inline string getDNI()const{return dni_;}
		inline void setDNI(string dni){dni_=dni;}

		inline string getNombre()const{return nombre_;}
		inline void setNombre(string nombre){nombre_=nombre;}

		inline string getApellidos()const{return apellidos_;}
		inline void setApellidos(string apellidos){apellidos_=apellidos;}

		inline int getTelefono()const{return telefono_;}
		inline void setTelefono(int telefono){telefono_=telefono;}

		inline string getDireccion()const{return direccion_;}
		inline void setDireccion(string direccion){direccion_=direccion;}

		inline string getCorreo()const{return correo_;}
		inline void setCorreo(string correo){correo_=correo;}

		inline string getFechaNacimiento()const{return fechaNacimiento_;}
		inline void setFechaNacimiento(string fechaNacimiento){fechaNacimiento_=fechaNacimiento;}

		bool crearRuta(){
			Ruta ruta("Abierto","Intermedio",30,"Con bicicleta",5,"4518T","Sendero1");
			if((ruta.getEstado()!="Abierto") && (ruta.getEstado()!="En mantenimiento")){return false;}
			if((ruta.getDificultad()!="Facil") && (ruta.getDificultad()!="Intermedio") && (ruta.getDificultad()!="Dificil")){return false;}
			if((isdigit(ruta.getCantidad())!=0)){return false;}
			if((ruta.getRealizacion()!="A pie") && (ruta.getRealizacion()!="Con bicicleta")){return false;}
			for(list <Ruta>::iterator i=rutas.begin(); i!=rutas.end(); i++){
				if(i->getCodigo()==ruta.getCodigo()){
					return false;
				}
			}
			rutas.push_back(ruta);
			return true;
		}
};
#endif
