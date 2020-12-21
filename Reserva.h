#ifndef RESERVA_H_
#define RESERVA_H_

#include <string>
#include <iostream>

using namespace std;

class Reserva {
private:
    string fecha_, monitor_, hora_, codigo_;
    monitor M;

public:

	Reserva();
    void buscarFecha(string fecha="22 de enero de 2021"){fecha_=fecha;}
    void asignarMonitor(string monitor="Juan Alberto Montoro Espejo"){monitor_=monitor;}
    void cambiarMonitor(string monitor="Alejandro Martinez Cobos"){monitor_=monitor;}
    void asignarHorario(string hora="10:30"){hora_=hora;}
    void cancelarReserva(string codigo="546546"){codigo_=codigo;}

};

#endif /* RESERVA_H_ */