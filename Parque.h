#ifndef PARQUE_H
#define PARQUE_H

#include <string>
#include <list>
#include <iostream>

using namespace std;

class Parque{
	private:
		string ubicacion_, superficie_, fecha_, reconocimiento_;
		list <Parque> parques; //Aqui se pondrían todos los parques
	public:
		Parque(string ubicacion="", string superficie="",string fecha="", string reconocimiento=""){
			ubicacion_=ubicacion;
			superficie_=superficie;
			fecha_=fecha;
			reconocimiento_=reconocimiento;
		}
		inline string getUbicacion()const{return ubicacion_;}
		inline void setUbicacion(string UBICACION){ubicacion_=UBICACION;}

		inline string getSuperficie()const{return superficie_;}
		inline void setSuperficie(string SUPERFICIE){superficie_=SUPERFICIE;}

		inline string getFechaValidacion()const{return fecha_;}
		inline void setFechaValidacion(string FECHA){fecha_=FECHA;}

		inline string getReconocimiento()const{return reconocimiento_;}
		inline void setReconocimiento(string RECONOCIMIENTO){reconocimiento_=RECONOCIMIENTO;}

		bool buscarParque(string ubicacion){
			Parque p("Malaga","200000","17/8/10","Ninguno");
			Parque r("Cordoba","500000","15/4/13","5");
			parques.push_back(r);
			parques.push_back(p);
			for(list <Parque>::iterator i=parques.begin(); i!=parques.end(); i++){
				if(i->getUbicacion()==ubicacion){
					/*A continuacion se imprimirarn las caracteristicas del parque
					cout<<"Caracteristicas del parque con ubicacion: "<<UBICACION<<endl;
					cout<<"Superficie: "<<i->getSuperficie()<<endl;
					cout<<"Fecha: "<<i->getFechaValidacion()<<endl;
					cout<<"Reconocimiento: "<<i->getReconocimiento()<<endl;
					*/
					return true;
				}
			}
			return false;
		}
};
#endif
