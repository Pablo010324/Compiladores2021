#include<iostream>

using namespace std;

void AFN(){
	cout<<"Esta ser�a la clase AFN";
	int entrada[10];
	int estados[10];
	int transiciones[10];

	void leer();
	void transicionar();
}

void AFD(){
	cout<<"Esta ser�a la clase AFD";
	int entrada[10];
	int estados[10];
	int transiciones[10];

	void leer();
	void transicionar();
}

int main(){
    cout<<"Llamando la clase AFN...";
	AFN();
    cout<<"Llamando la clase AFN...";
    AFD();
}
