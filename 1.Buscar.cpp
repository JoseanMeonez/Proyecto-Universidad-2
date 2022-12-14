void buscar(string carros[], string marcas[], string modelo[], double precio[], string estado[]) {
	system ("cls");
 	cout << "\n----------------- Buscar ------------------";
	cout << "\n|    *****  ****  *****  *****  ******    |";
	cout << "\n|    **    **  ** **  ** **  ** **  **    |";
	cout << "\n|    **    ****** ****** ****** **  **    |";
	cout << "\n|    ***** **  ** **  ** **  ** ******    |";
	cout << "\n-------------------------------------------";
	// Imprimiendo cada carro
	cout << "\nID\tPlaca\tMarca\tModelo\tPrecio\tEstado"<<endl;
	for (int i = 0; i < (sizeof carros); i++) {
		if(carros[i].length() != 0) {
			cout <<1+i<<"\t"<<carros[i]<<"\t"<<marcas[i]<<"\t"<<modelo[i]<<"\t"<<precio[i]<<"\t"<<estado[i]<< endl;
		}
	}
}
