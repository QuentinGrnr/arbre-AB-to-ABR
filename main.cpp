#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>  
#include "AB.h"

using namespace std;


int main(int argc, char** argv)
{
	int T[9] = {15, 32, 36, 10, 7, 3, 9, 8, 13};

	AB ab(new noeud(T[0],new noeud(T[1],new noeud(T[2],new noeud(T[5]), 
				new noeud(T[6],new noeud(T[7]), new noeud(T[8]))), 
				new noeud(T[3])), 
				new noeud(T[4])));

	cout << endl << "--------------------------------------------" << endl;
	cout << "Affichage infixe AB :\t";
	ab.Infixe(ab.root());	
	cout << endl << "--------------------------------------------" << endl;
	cout << "Affichage Prefixe AB :\t";
	ab.Prefixe(ab.root());
	cout << endl << "--------------------------------------------" << endl;
	cout << "Affichage Postfixe AB :\t";
	ab.Postfixe(ab.root());
	cout << endl << "--------------------------------------------" << endl;
	cout << "Hauteur AB = \t" << ab.Hauteur(ab.root());
	cout << endl << "--------------------------------------------" << endl;
	cout << "Tri :\t";
	ab.Tri();
	ab.AfficheT();
	cout << endl << "--------------------------------------------" << endl;
	cout << "AB to ABR :\t";
	ab.ABtoABR(ab.root());
	cout << endl << "--------------------------------------------" << endl;
	cout << "Affichage infixe ABR :\t";
	ab.Infixe(ab.root());	
	cout << endl << "--------------------------------------------" << endl;
	cout << "Affichage Prefixe ABR :\t";
	ab.Prefixe(ab.root());
	cout << endl << "--------------------------------------------" << endl;
	cout << "Affichage Postfixe ABR :\t";
	ab.Postfixe(ab.root());
	cout << endl << "--------------------------------------------" << endl;
	cout << "Hauteur ABR = \t" << ab.Hauteur(ab.root());
	cout << endl << "--------------------------------------------" << endl;

	return 0;
}
