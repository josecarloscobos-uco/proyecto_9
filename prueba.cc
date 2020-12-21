#include <string>
#include <iostream>

using namespace std;

int main(){
	string fecha;
	cout<<"Introduce la fecha que desee de visitar el parque"<<endl;
	getline(cin,fecha);
	cout<<"La visita se puede realizar el dia "<<fecha<<endl;
    return 0;
}