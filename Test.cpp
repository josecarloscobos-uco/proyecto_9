#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"
#include "Parque.h"
#include "Monitor.h"
#include "Ruta.h"
#include "Reserva.h"
#include "Visitante.h"

using namespace std;

void thisIsATest() {
	string first, second, expected;
	first="Hello";
	second="World";
	expected="Hello World";
	ASSERT_EQUAL(expected, first+" "+second);
}
void TestbuscarParque(){
	Parque p;
	bool expected=p.buscarParque("Malaga");
	ASSERT(expected==true);
}
void TestcrearRuta(){
	Monitor m;
	bool expected=m.crearRuta();
	ASSERT(expected==true);
}
void TestFHM(){
	Reserva r;
	r.asignarFHM("1","1","1","1");
	bool expected=r.asignarFHM("1","1","1","1");
	ASSERT(expected==false);
}
void TestcancelarReserva(){
	Reserva r;
	r.asignarFHM("1","1","1","1");
	r.asignarFHM("2","2","2","2");
	bool expected=r.cancelarReserva("2");
	ASSERT(expected==true);
}
void TestpedirCambioDatos(){
	Visitante v;
	v.pedirReserva();
	bool expected=v.pedirCambioDatos("1","1","1","1",0,"1");
	ASSERT(expected==true);
}
void TestcambiarReserva(){
	Visitante v("1","1","1","1",0,"1");
	bool expected=v.cambiarReserva("1","2","2","2");
	ASSERT(expected==true);
}
bool runAllTests(int argc, char const *argv[]) {
	cute::suite s { };
	//TODO add your test here
	s.push_back(CUTE(TestcambiarReserva));
	s.push_back(CUTE(TestpedirCambioDatos));
	s.push_back(CUTE(TestcancelarReserva));
	s.push_back(CUTE(TestFHM));
	s.push_back(CUTE(TestcrearRuta));
	s.push_back(CUTE(TestbuscarParque));
	s.push_back(CUTE(thisIsATest));
	cute::xml_file_opener xmlfile(argc, argv);
	cute::xml_listener<cute::ide_listener<>> lis(xmlfile.out);
	auto runner = cute::makeRunner(lis, argc, argv);
	bool success = runner(s, "AllTests");
	return success;
}

int main(int argc, char const *argv[]) {
    return runAllTests(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE;
}
