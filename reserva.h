#ifndef RESERVA_H_
#define RESERVA_H_

#include <string>
#include <iostream>
#include <list>

using namespace std;

class Reserva{
	private:
    	string dni_, fecha_, monitor_, horario_;
	public:
    	list <Reserva> reservas;
    	Reserva(string dni="", string fecha="", string monitor="", string horario=""){
    		 dni_=dni;
    		 fecha_=fecha;
    		 horario_=horario;
    		 monitor_=monitor;
    	}
    	inline string getDNI()const{return dni_;}

    	inline string getFecha()const{return fecha_;}
    	inline void setFecha(string fecha){fecha_=fecha;}

    	inline string getMonitor()const{return monitor_;}
        inline void asignarMonitor(string monitor){monitor_=monitor;}

        inline string getHorario()const{return horario_;}
        inline void setHorario(string horario){horario_=horario;}

    	bool asignarFHM(string dni, string fecha, string monitor, string horario){
    		Reserva r(dni,fecha,monitor,horario);
    	    for(list <Reserva>::iterator i=reservas.begin(); i!=reservas.end(); i++){
    	    	if(i->getMonitor()==monitor && i->getFecha()==fecha && i->getHorario()==horario){
    	    		return false;
    	    	}
    	    }
    	    fecha_=fecha;
    	    horario_=horario;
    	    monitor_=monitor;
    	    reservas.push_back(r);
    	    return true;
    	}
   		bool cancelarReserva(string dni){
   			for(list <Reserva>::iterator i=reservas.begin(); i!=reservas.end(); i++){
   				if(i->getDNI()==dni){
   					reservas.erase(i);
   					return true;
   			    }
   			}
   			return false;
   		}
};
#endif 
