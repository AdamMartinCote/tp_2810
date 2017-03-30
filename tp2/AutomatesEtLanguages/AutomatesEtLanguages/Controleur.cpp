#include "Controleur.h"

Controleur::Controleur()
{	
}

bool Controleur::InitialiserProgramme(std::string cheminFichier)
{
	//lexique = UsineLexique::initialiserLexique(cheminFichier);
	return false;
}

std::string Controleur::VerifierOrthographeDuMot(std::string mot)
{
	// Cr�ation du MOCK de lexique.
	std::shared_ptr<Noeud> noeauA(new Noeud("a", true, 0));
	lexique_.ajouterArbre(noeauA);

	std::string motRetourne = mot;
	// V�rifier si le mot fait partit d'un des mots du lexique.
		// Si oui, retourne le mot. Celui-ci est bien orthographi�.
	if(lexique_.verifierSousChaine(mot))
		return motRetourne;

	// Si non, recherche parmi les mots commen�ant par la m�me lettre un mot qui s'apparente � celui-ci.
	
}


Controleur::~Controleur()
{
}