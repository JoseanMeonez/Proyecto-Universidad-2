int id_nuevo(string carros[]) {
	system ("cls");
 	cout << "\n----------------- Buscar ------------------";
	cout << "\n|    *****  ****  *****  *****  ******    |";
	cout << "\n|    **    **  ** **  ** **  ** **  **    |";
	cout << "\n|    **    ****** ****** ****** **  **    |";
	cout << "\n|    ***** **  ** **  ** **  ** ******    |";
	cout << "\n-------------------------------------------";
	int i = 0;

	while(i < (sizeof carros)) {
		if(carros[i].length() == 0) {
			return i;
		} else {
			i++;
		}
	}
}

string placa() {
	string placa;
	cout << "\nFavor ingrese el numero de placa del vehiculo: ";
	cin >> placa;

	return placa;
}

string marca() {
	string marca;
	cout << "\nFavor ingrese la marca del vehiculo: ";
	cin >> marca;

	return marca;
}

string modelo_() {
	string modelo;
	cout << "\nFavor ingrese el modelo del vehiculo: ";
	cin >> modelo;

	return modelo;
}

double precio_() {
	double precio;
	int flag = 1;

	while(flag == 1) {
		cout << "\nFavor ingrese el precio del vehiculo (minimo de 100 mil Lps.): ";
		cin >> precio;

		if(precio < 100000) {
			cout << "\nUsted ha ingresado un dato menor de 100 mil lempiras, favor intente de nuevo."<<endl;
		} else {
			flag = 2;
		}
	}

	return precio;
}

