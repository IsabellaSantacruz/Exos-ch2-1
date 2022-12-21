// Fonctions sur les réels de <cmath>: racine carrée et exposant.
// Fonctions sur les caractères de <cctype>.
#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

int main()
{
	//TODO: Lire une valeur réelle.
	cout << "Entrer une valeur reelle: ";
	double valeur;
	cin >> valeur;
	
	//TODO: Calculer et afficher la racine carrée de cette valeur.
	double racine = sqrt(valeur);
	cout << "La racine carre est " << racine << endl;  // Aussi possible de mettre le sqrt directement dans la ligne du «cout».

	//TODO: Initialisez des variable base et exposant (valeurs réelles) puis afficher le résultat de cet exposant.
	double base = 4.2, exposant = 2.1;
	cout << base << " exposant " << exposant << " donne " << pow(base, exposant) << endl;

	//TODO: Lire un caractère.
	cout << "Entrer un caractere: ";
	char lettre;
	cin >> lettre;

	//TODO: Afficer si le caractère est alphabétique ou un chiffre, en utilisant les fonctions de <cctype>.
	if (isalpha(lettre))
		cout << "Le caractere est alphabethique." << endl;
	else if (isdigit(lettre))
		cout << "Le caractere est un chiffre." << endl;
	else
		cout << "Le caractere est ni un chiffre ni une lettre." << endl;
}