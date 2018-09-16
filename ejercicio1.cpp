#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {

	int numero, numero2, suma=0, multi;
	
	
 		cout<<"Ingrese un número: "; cin>>numero;
 		cout<<"Ingrese un otro número: "; cin>>numero2;
 		;
 		
 		
 	
			 for(int i=1;i<=numero2;i++){
		     multi= pow(numero,i);
		     suma+= multi;
			}
		
		

	

	
cout<<"El resultado es: "<<suma<<endl;
	



	system("Pause");    
	return 0;

}
