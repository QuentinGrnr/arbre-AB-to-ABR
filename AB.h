/************************************************************************/
/* Auteur : S. Gueye							*/
/* TP : Transformation d'un arbre binaire quelconque en arbre binaire	*/
/* de recherche								*/
/* Date dernière maj : 20/12/2019					*/
/************************************************************************/

/****************************************/
/* noeud contenant un entier un fils    */
/* gauche et un fils droit		*/
/****************************************/
class noeud{
	public:
	int cle;
	noeud* fg;
	noeud* fd;
	noeud* pere;
	noeud(int x);
	noeud(int x, noeud* fg, noeud* fd);
	~noeud();
	void Affiche(noeud* x);
};

/****************************************/
/* Arbre binaire d'entiers		*/
/****************************************/
class AB{
	noeud* r;
	int T[50];	// Tableau destiné à contenir les noeuds en ordre croissant.
	int n; 	// Nombre de noeuds de l'arbre.

	public :
	AB(noeud* x);
	~AB();
	noeud* root();
	void AfficheT();
	void Prefixe(noeud* x);
	void Infixe(noeud* x);
	void Postfixe(noeud* x);
	int Hauteur(noeud* x);
	int N(noeud* x);
	void Tri();
	void ABtoABR(noeud* x);
};
