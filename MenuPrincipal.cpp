// Librerías de C++
#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

// Incluyendo por separado cada función del proyecto:
#include "1.Buscar.cpp"
#include "2.Vender.cpp"
#include "3.Ingresar.cpp"
#include "4.Creditos.cpp"

int main()
{
	// definir las variables
	int opcion_principal=0, pin=0, opc_pin=1;
	int id_venta, id_ingreso;
	string username, user;
	string carros[50];
	string marcas[50];
	string modelo[50];
	double precio[50];
	string estado[50];

	carros[0] = { "CA-100" };
	carros[1] = { "CA-101" };
	carros[2] = { "CA-102" };
	marcas[0] = { "HYUNDAI" };
 	marcas[1] = { "HONDA" };
	marcas[2] = { "TOYOTA" };
	modelo[0] = { "Elantra" };
	modelo[1] = { "Civic" };
	modelo[2] = { "Corolla" };
	precio[0] = { 200000 };
	precio[1] = { 220000 };
	precio[2] = { 180000 };
	estado[0] = { "Disponible" };
	estado[1] = { "Disponible" };
	estado[2] = { "Disponible" };

	while(opc_pin==1) {
		system("cls");
	 	cout << "\n------------------ Login ------------------";
		cout << "\n|    *****  ****  *****  *****  ******    |";
		cout << "\n|    **    **  ** **  ** **  ** **  **    |";
		cout << "\n|    **    ****** ****** ****** **  **    |";
		cout << "\n|    ***** **  ** **  ** **  ** ******    |";
		cout << "\n-------------------------------------------"<<endl;
		cout <<"Username: ";
		cin >> user;
		cout <<"Password: ";
		cin >> pin;

		while(pin<1000 or pin>9999) {
			cout << "Debe ingresar un pin de 4 digitos, favor intente de nuevo: ";
			cin >> pin;
		}

		if(pin==1234 and user == "jhernandez") {// si el pin es 1234 le asigna un nombre de usuario al cliente
			username = "Juan Hernandez";
		} else {
			cout <<"Hola nuevo cliente, ingrese solo su primer nombre: ";
			cin >> username;
		}
		opc_pin = 2;
		system("cls");

		while(opc_pin==2) {
			//Menu principal del cajero automatico.
		 	cout << "\n------------- Menu Principal --------------";
			cout << "\n|    *****  ****  *****  *****  ******    |";
			cout << "\n|    **    **  ** **  ** **  ** **  **    |";
			cout << "\n|    **    ****** ****** ****** **  **    |";
			cout << "\n|    ***** **  ** **  ** **  ** ******    |";
			cout << "\n-------------------------------------------"<<endl;
			cout << "Hola "<<username<<"!"<<endl;
			cout << "1. Ver Vehiculos\n";
			cout << "2. Vender Vehiculo\n";
			cout << "3. Ingresar nuevo vehiculo\n";
			cout << "4. Creditos\n";
			cout << "5. Cerrar Sesion\n";
			cout << "6. Apagar sistema\n";
			cout << "Ingrese el numero de gestion: ";
			cin >> opcion_principal;

			switch(opcion_principal) {
				case 1:
					buscar(carros, marcas, modelo, precio, estado);
					system("pause");
				break;

				case 2:
					buscar(carros, marcas, modelo, precio, estado);
					id_venta = vender(carros, estado);

					if(id_venta >= 0 or id_venta <= (sizeof carros)) {
						estado[id_venta] = "Vendido";
					}
					system("pause");
				break;

				case 3:
					id_ingreso = id_nuevo(carros);
					carros[id_ingreso] = placa();
					marcas[id_ingreso] = marca();
					modelo[id_ingreso] = modelo_();
					precio[id_ingreso] = precio_();
					estado[id_ingreso] = "Disponible";
					system("pause");
				break;

				case 4:
					creditos();
					system("pause");
				break;

				case 5:
					cout<<"Cerrando sesion de "<<user<<"..."<<endl;
					opc_pin = 1;
				break;

				case 6:
					cout<<"Cerrando sesion de "<<user<<endl;
					cout<<"Apagando sistema..."<<endl;
					opc_pin = 0;
				break;

				// Acción por defecto
				default: cout<<"OPCION SOLICITADA NO ESTA DISPONIBLE.\n";
					getch();
				break;
			}

			if (opc_pin == 1) {
				system("pause");
			} else if (opc_pin == 0) {
				return 0;
			} else {
				opc_pin=2;
			}
			system("cls");
		}
	}

	return 0;
}

