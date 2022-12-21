// Exemples pour les fonctions sur le type string.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//TODO: Demander le prénom et le nom d'un usager, dans mis dans deux variables.
	cout << "Veuillez donner votre prenom: "; 
	string prenom;
	cin >> prenom;  // Notez que cette manière de lire le prenom et le nom n'accepte pas les espaces; il faudrait utiliser getline qui est vu au prochain chapitre pour supporter les espaces.
	cout << "Veuillez donner votre nom: ";
	string nom;
	cin >> nom;
	
	//TODO: Concatener le prenon, le nom et « est inscrit au cours INF1005C» dans un message de type string, puis l'afficher.
	string message = prenom + " " + nom + " est inscrit au cours INF1005C";
	cout << message << endl;

	//TODO: Afficher la sous chaine entre les positions 3 et 4 de message.
	cout << message.substr(3, 4) << endl;

	//TODO: Afficher le nombre de caractères de message.
	cout << message.size() << endl;

	//TODO: Afficher le premier et le dernier caractère de message.
	cout << message[0] << message[message.size() - 1] << endl;

	//TODO: Afficher le caractère au milieu de message (doit être exactement celui au milieu s'il a un nombre impair de caractères).
	cout << message[message.size() / 2] << endl;  // où à la position (message.size() - 1) / 2; les deux seront au centre si impair; dans le cas pair, un sera juste à droite du centre et l'autre à gauche.
	
	//TODO: Remplacer ce caractère au milieu par «?» et afficher le message résultant.
	message[message.size() / 2] = '?';
	cout << message << endl;
}