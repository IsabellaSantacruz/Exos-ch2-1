#include <iostream>
using namespace std;

int main()
{
	//TODO: Déclarer et lire 2 variables entières nommées a et b.
	cout << "Donner la valeur de a: ";
	int a;
	cin >> a;
	cout << "Donner la valeur de b: ";
	int b;
	cin >> b;
	
	//TODO: Initialiser une nouvelle variable c la somme des deux valeurs.
	int c = a + b;

	//TODO: Afficher le résultat de la somme.
	cout << "La somme de a+b egale " << c << endl;

	//TODO: Ajouter 4 à la variable a.
	a = a + 4; // ou: a += 4;
	
	//TODO: Divivser la variable a par 2.
	a = a / 2; // ou: a /= 2;

	//TODO: Aficher le reste la division par 2 de la variable a (sa valeur après les opérations ci-dessus).
	cout << "Le reste de la division par 2 est " << a % 2 << endl;
}