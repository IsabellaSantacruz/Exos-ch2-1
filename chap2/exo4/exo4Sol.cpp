// Exemples avec sizeof, boolalpha et introduction à la notion d'adresse, contenu et contenu pointé (pointeur).
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int  nombre = 10;
	bool trouve = false;
	int* pointeurInt = &nombre;

	//TODO: Demander un nombre à l'usager, le placer dans la variable «nombre» puis afficher ce nombre.
	cout << "Entrer un nombre: ";
	cin >> nombre;
	cout << "Le nombre est " << nombre << endl;
	
	//TODO: Afficher la taille en octet d'un int, d'une double et d'un char.
	cout << "int:" << sizeof(int) << " double:" << sizeof(double) << " char:" << sizeof(char) << endl;
	
	//TODO: Afficher la variable «trouve» sous la forme textuelle «true» ou «false» sans utiliser de comparaison.
	cout << boolalpha << trouve << endl;
	
	//TODO: Afficher l'adresse de la variable «nombre» et son contenu.
	cout << &nombre << ":" << nombre << endl;
	
	//TODO: Afficher l'adresse de la variable «pointeurInt», son contenu et le contenu pointé par elle.
	cout << &pointeurInt << ":" << pointeurInt << " -> " << *pointeurInt << endl;
}