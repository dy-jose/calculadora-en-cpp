#include <iostream>

using namespace std;

void suma(int&, int&);
void resta(int&, int&);
void multiplicar(int&, int&);
void dividir(int&, int&);

int main(int argc, char** argv) {
	
	int a, b, option, resultado;
	bool running = 1;
	
	while(running){
		
		cout<<"********ELIJA UNA OPCION*********"<<endl;
		cout<<"\n";
		cout<<"* SUMAR: 1"<<endl;
		cout<<"* RESTAR: 2"<<endl;
		cout<<"* MULTIPLICAR: 3"<<endl;
		cout<<"* DIVIDIR: 4"<<endl;
		cout<<"* SALIR: 5"<<endl;
		cout<<"\n";
		cout<<"escoja una opcion: ";
		cin>>option;
		
		switch(option){
			case 1:
				cout<<"ingrese el primer digito: ";cin>>a;
				cout<<"ingrese el segundo digito: ";cin>>b;
				suma(a,b);
				break;
			case 2:
				cout<<"ingrese el primer digito: ";cin>>a;
				cout<<"ingrese el segundo digito: ";cin>>b;
				resta(a,b);
				break;
			case 3:
				cout<<"ingrese el primer digito: ";cin>>a;
				cout<<"ingrese el segundo digito: ";cin>>b;
				multiplicar(a,b);
				break;
			case 4:
				cout<<"ingrese el primer digito: ";cin>>a;
				cout<<"ingrese el segundo digito: ";cin>>b;
				dividir(a,b);
				break;
			case 5:
				running = 0;
				break;
			default:
				cout<<"\n";
				break;
		}
	}
	return 0;
}

void suma (int& x, int& y) {
	int sumar = x + y;
	
	cout<<"\nel resultado de la suma es: "<<sumar<<endl;
}
void resta (int& x, int& y) {
	int restar = x - y;
	
	cout<<"\nel resultado de la resta es: "<<restar<<endl;
}
void multiplicar (int& x, int& y) {
	int multiplicacion = x * y;
	
	cout<<"\nel resultado de la multiplicacion es: "<<multiplicacion<<endl;
}
void dividir (int& x, int& y) {
	int divicion = x / y;
	
	cout<<"\nel resultado de la divicion es: "<<divicion<<endl;
}
