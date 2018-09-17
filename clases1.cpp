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

void Tiempo::mostrarhora(){
	cout<<"La hora actual es: "<<hora<<":"<<minuto<<":"<<segundo<<endl;
}

int main(){
	Tiempo hora_actual (12,55,16);;
	Tiempo hora_pasada(65675);
	hora_actual.mostrarhora();
	hora_pasada.mostrarhora();
	system ("pause");
	return 0;
	
}
