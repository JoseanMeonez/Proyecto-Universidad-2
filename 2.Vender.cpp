int vender(string carros[], string estado[]) {
	int id;

	cout << "\nPor favor, ingrese el ID del carro a vender: ";
	cin >> id;

	if(id <= 0 or id > (sizeof carros)) {
		cout << "\nLo sentimos, usted ingreso un numero incorrecto.\nPor favor intente de nuevo." << endl;
		id = -1;
	} else {
		if(carros[id-1].length() == 0) {
			cout << "\nLo sentimos, usted ingreso un numero incorrecto.\nPor favor intente de nuevo." << endl;
			id = -1;
		} else if(estado[id-1] == "Vendido") {
			cout << "\nEl vehiculo seleccionado ya fue vendido anteriormente." << endl;
			id = -1;
		} else {
			cout << "\nDato recibido correctamente.\nActualizando carro en el inventario..." << endl;
			id = id - 1;
		}
	}

	return id;
}

