/*
 * Visitante.h
 *
 *  Created on: 1 dic. 2020
 *      Author: Jose Carlos Cobos Lopez
 */
#ifndef VISITANTE_H_
#define VISITANTE_H_

#include <string>
#include <iostream>
#include "Reserva.h"

using namespace std;

class Visitante:public Reserva{
	private:
		int telefono_;
		string DNI_, nombre_, apellidos_, problema_;
		list <Visitante> visitantes;
	public:
		Visitante(string dni="", string nombre="", string apellido1="", string apellido2="", int telefono=0, string problema=""){
			DNI_=dni;
			nombre_=nombre;
			apellidos_=apellido1+apellido2;
			telefono_=telefono;
			problema_=problema;
		}

		inline string getDNI()const{return DNI_;}
		inline void setDNI(string dni){DNI_=dni;}

		inline string getNombre()const{return nombre_;}
		inline void setNombre(string nombre){nombre_=nombre;}

		inline string getApellidos()const{return apellidos_;}
		inline void setApellidos(string apellido1, string apellido2){apellidos_=apellido1 + " " + apellido2;}

		inline int getTelefono()const{return telefono_;}
		inline void setTelefono(int telefono){telefono_=telefono;}

		inline string getProblema()const{return problema_;}
		inline void setProblema(string problema){problema_=problema;}

		void pedirReserva(){
			Visitante v("1","1","1","1",0,"1");
			visitantes.push_back(v);
			Reserva r("1","1","1","1"); //Ejemplo
			r.asignarFHM("1","1","1","1");
		}
		bool pedirCambioDatos(string dni, string nombre, string apellido1, string apellido2, int telefono, string problema){
			for(list <Visitante>::iterator i=visitantes.begin(); i!=visitantes.end(); i++){
				if(i->getDNI()==dni){
					i->setNombre(nombre);
					i->setApellidos(apellido1, apellido2);
					i->setTelefono(telefono);
					i->setProblema(problema);
					return true;
				}
			}
			return false;
		}
		bool cambiarReserva(string dni, string fecha, string monitor, string horario){
			list <Reserva> reservas;
			Reserva r("1","1","1","1");
			reservas.push_back(r);
			for(list <Reserva>::iterator i=reservas.begin(); i!=reservas.end(); i++){
				if(i->getDNI()==dni){
					i->asignarFHM(dni,fecha,monitor,horario);
					return true;
			    }
			}
			return false;
		}
};
#endif /* VISITANTE_H_ */

