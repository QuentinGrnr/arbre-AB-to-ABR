/************************************************************************/
/* Auteur : S. Gueye							*/
/* TP : Transformation d'un arbre binaire quelconque en arbre binaire	*/
/* de recherche								*/
/* Date dernière maj : 20/12/2019					*/
/************************************************************************/

#include <iostream>
#include "AB.h"

using namespace std;

/****************************************/
/* Objectif : Constructeur d'un noeud dont les fils sont NULL
/* Entrées : entier x
/* Complexité : 0(1)
/****************************************/
noeud::noeud(int x)
{
	cle = x;
	fg = fd = pere =  NULL;
}

/****************************************/
/* Objectif : Constructeur d'un noeud de fils donnés
/* Entrées : entier x, fg, fd
/* Complexité : 0(1)
/****************************************/
noeud::noeud(int x, noeud* fg, noeud* fd)
{
	cle = x;
	this->fg = fg;
	this->fd = fd;
}

/****************************************/
/* Objectif : Destructeur d'un noeud
/****************************************/
noeud::~noeud()
{
	if(fg)
		delete(fg);
	if(fd)
		delete(fd);
}

/****************************************/
/* Objectif : Constructeur d'un AB
/****************************************/
AB::AB(noeud* x)
{
	r = x;	
}

/****************************************/
/* Objectif : Destructeur d'un AB
/****************************************/
AB::~AB()
{
	if(r)
		delete(r);
}

/****************************************/
/* Objectif : Accesseur à la racine r
/****************************************/
noeud* AB::root()
{
	return(r);
}

/****************************************/
/* Objectif : Parcours infixe
/****************************************/
void AB::AfficheT()
{
	n = N(r);
	cout << "T = ";
	
	for(int i = 0; i < n; i++)
		cout << T[i] << " ";
	
	cout << endl;
}


/****************************************/
/* Objectif : Parcours prefixe
/****************************************/
void AB::Prefixe(noeud* x)
{
	if(x){
		cout << " " << x->cle;
		Prefixe(x->fg);
		Prefixe(x->fd);
	}
}

/****************************************/
/* Objectif : Parcours postfixe
/****************************************/
void AB::Postfixe(noeud* x)
{
	if(x){
		Postfixe(x->fg);
		Postfixe(x->fd);
		cout << " " << x->cle;
	}
}

/****************************************/
/* Objectif : Parcours infixe
/****************************************/
void AB::Infixe(noeud* x)
{
	if(x){
		Infixe(x->fg);
		cout << " " << x->cle;
		Infixe(x->fd);
	}
}


/****************************************/
/* Objectif : Nombre d'éléments de l'arbre
/****************************************/
int AB::N(noeud* x)
{
    // !!! A FAIRE !!! //
	return(0);
}


/****************************************/
/* Objectif : Hauteur de l'arbre de racine x
/****************************************/
int AB::Hauteur(noeud* x)
{
	int res, resfg, resfd;

	res = resfg = resfd = -1;

	if(x){
		resfg = Hauteur(x->fg);
		resfd = Hauteur(x->fd);

		if(resfg > resfd)	
			res = resfg+1;
		else
			res = resfd+1;
	}

	return(res);
}


/****************************************/
/* Objectif : Stocker dans T les valeurs 
/* de l'arbre triées en ordre croissant
/****************************************/
void AB::Tri()
{
    // !!! A FAIRE !!! //
}

/****************************************/
/* Objectif : Transformation d'un arbre binaire de racine x
/* en un arbre binaire de recherche contenant les mêmes 
/* valeurs et ayant la même structure
/****************************************/
void AB::ABtoABR(noeud* x)
{
    // !!! A FAIRE !!! //
}
