// Función que muestra los creditos del proyecto:
void creditos() {
	string miembros[] = { "Samir Osorto", "Hector Reyes", "Andres Meonez" };
	system ("cls");
 	cout << "\n----------------- Creditos ----------------";
	cout << "\n|    *****  ****  *****  *****  ******    |";
	cout << "\n|    **    **  ** **  ** **  ** **  **    |";
	cout << "\n|    **    ****** ****** ****** **  **    |";
	cout << "\n|    ***** **  ** **  ** **  ** ******    |";
	cout << "\n-------------------------------------------"<<endl;
	cout <<	"\nUniversidad Tecnologica de Honduras";
	cout << "\n-----------------------------------------------";
	cout << "\nClase: Programacion Estructurada";
	cout << "\nCatedratico (a): Renato A. Cruz";
	cout << "\n-----------------------------------------------";
	cout << "\nMiembros del proyecto (Grupo #1):\n";

	// Imprimiendo cada miembro
	for (int i = 0; i < 3; i++) {
	  cout << miembros[i] << "\n";
	}
}
