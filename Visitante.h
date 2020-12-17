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

using namespace std;

class Visitante {
private:
	int Telefono_;
	string DNI_, Nombre_, Apellidos_, Problema_; 
public:
	Visitante(string dni, string nombre, string apellido1, string apellido2, int telefono, string problema);
	
	inline string getDNI(){return DNI_;};
	inline void setDNI(string dni){DNI_=dni;};

	inline string getNombre(){return Nombre_;};
	inline void setNombre(string nombre){Nombre_=nombre;};

	inline string getApellidos(){return Apellidos_;};
	inline void setApellidos(string apellido1, string apellido2){Apellidos_=apellido1 + " " + apellido2;};

	inline int getTelefono(){return Telefono_;};
	inline void setTelefono(int telefono){Telefono_=telefono;};

	inline int getProblema(){return Problema_;};
	inline void setProblema(string problema){Problema_=problema;};

	void pedirReserva();
	void cambiarReserva();
	void pedirCambioDatos();
};

#endif /* VISITANTE_H_ */

