//hola
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;


class Tiempo{
	
	private:
	 int hora, minuto, segundo;
	public:
	 Tiempo(int,int,int);
	 Tiempo(int);
	 void mostrarhora(); 
	 ~Tiempo();	
};

Tiempo::Tiempo(int hora_,int minuto_,int segundo_){

	hora = hora_;
	minuto = minuto_;
	segundo = segundo_;
}

Tiempo::Tiempo(int segundos){
	hora = (segundos/3600);
	minuto = (segundos/60)-(hora*60);
	segundo = segundos-((hora*60)*60)-(minuto*60);
	
}

Tiempo::~Tiempo(){
	cout<<"Adios "<<hora<<":"<<minuto<<":"<<segundo<<endl;
}


void Tiempo::mostrarhora(){
	cout<<"La hora actual es: "<<hora<<":"<<minuto<<":"<<segundo<<endl;
}

int main(){
	Tiempo *hora_actual, *hora_pasada;
	hora_actual = new Tiempo(12,55,16);
	hora_pasada = new Tiempo(3960);
	hora_actual->mostrarhora();
	hora_pasada->mostrarhora();
	delete hora_actual;
	delete hora_pasada;
	system ("pause");
	return 0;
	
}



