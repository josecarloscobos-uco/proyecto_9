#ifndef _RUTA_
#define _RUTA_
#include <string>
using std::string;

class Ruta
{
private:
	string estado_;
	string dificultad_;
	int duracion_;
	string realizacion_;
	int cantidad_;
	string codigo_;
	string sendero_;
public:

	Ruta(string estado="", string dificultad="", int duracion=0, string realizacion="", int cantidad=0, string codigo=""){
		estado_=estado;
		dificultad_=dificultad;
		duracion_=duracion;
		realizacion_=realizacion;
		cantidad_=cantidad;
		codigo_=codigo;
	}
	~Ruta();
	inline string getEstado()const{return estado_;}
	inline void setEstado(string estado){estado_=estado;}

	inline string getDificultad()const{return dificultad_;}
	inline void setDificultad(string dificultad){dificultad_=dificultad;}

	inline int getDuracion()const{return duracion_;}
	inline void setDuracion(int duracion){duracion_=duracion;}

	inline string getRealizacion()const{return realizacion_;}
	inline void setRealizacion(string realizacion){realizacion_=realizacion;}

	inline int getCantidad()const{return cantidad_;}
	inline void setCantidad(int cantidad){cantidad_=cantidad;}

	inline string getCodigo()const{return codigo_;}
	inline void setCodigo(string codigo){codigo_=codigo;}

	inline string getSendero()const{return sendero_;}
};

#endif