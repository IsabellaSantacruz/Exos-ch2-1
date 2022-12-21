// Nombres aléatoires.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	//TODO: Afficher 6 nombres aléatoires entre [1, 50].  Exécutez votre programme plusieurs fois pour vérifier qu'il ne donne pas les mêmes valeurs à chaque fois.
	srand(unsigned(time(nullptr)));  // Initialiser le générateur pseudo-aléatoire; doit être fait une fois au début du programme pour ne pas avoir les mêmes valeurs.
	for (int i = 0; i < 6; i++)
		cout << rand() % 50 + 1 << endl;
}