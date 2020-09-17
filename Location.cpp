/*
 But : Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage dans une
automobile louée. L’algorithme tient compte du kilométrage parcouru et de la durée du voyage qui sont
soumises par le requérant.
Auteur : Sébastien Bigras-Henri
Date : 2020-09-16
*/

#include <iostream>
using namespace std;
int main()

{
	setlocale(LC_ALL, "");
	// déclaration des variable
	double Location = 45; //  Jours = 45$ montant initiale de la location par jours
	double Jours; // nombre de jours de location du véhicule
	double coutParJours;
	double kilometrage;
	double kilometrageGratuit = 250;
	double coutSuplementaire = 0;
	double consomation = 0.05;
	double coutEssence;
	double extraKm;
	double littreConsomé;
	double prixEssence = 1.25;
	double consomationEssence = 7.6;
	double consomationParKilometre = 100;
	double totale;

	cout << " Nombre de jours du voyage : ";
	cin >> Jours;
	cout << " Nombre de kilométrage parcouru : ";
	cin >> kilometrage;

	coutParJours = Location * Jours;
	// calculer le montant totale pour le nombre de jours de location

	  // si le locataire depasse 250km par jours il paye 0.05$ de plus par kilometre
	if (kilometrage > kilometrageGratuit)
		// si le locataire fait moins de 250 km il ne paye pas de surplus
	{
		extraKm = kilometrage - kilometrageGratuit;
		// le cout pour le kilométrage en extra est le kilométrage du locataire moins (250) le kilométrageGratuit
		coutSuplementaire = extraKm * consomation;
		// le cout suplémentaire est égale au kilométrage en extra * (7.6) le kilométrage
	}

	else
	{

	}
	// calculer le cout de l´essence 7.6L * le nombre de km	à 1.25l en produit croisé 
	// (kilometrage*7.6)/100 = littreconsomé ---> littreconsomé*1.25= cout d'essence 
	littreConsomé = kilometrage * consomationEssence / consomationParKilometre;


	coutEssence = littreConsomé * prixEssence;
	// ( km * consoDessence/ 100 ) * 1.25 


	// coutParJours + CoutSuplementaire + coutEssence
	totale = coutParJours + coutSuplementaire + coutEssence;
	// additionner le totale des couts

	/*
	nombre de jours : 12
	nnombre de Km : 450            <== a quoi je veux que ça ressemble
	cout pour lessence : 42.75$
	motant pour Km : 10$
	total : 592.75$
	*/
	// J'ai utiliser un moyens pour /viter de voir les calcule complet sur le reçu

	cout << " Montant pour la location : " << coutParJours << "$" << endl;
	//cout << " Montant pour la location : " << Location << " * " << Jours << " = " << coutParJours << endl;  
	// je laisse en commentaire montrer le calcule complet
	cout << " Cout pour l'essence : " << coutEssence << "$" << endl;
	//cout << " Cout pour l'essence : ( " << kilometrage << " * " << consomationEssence << " / " << consomationParKilometre << ") * " << prixEssence << " = " << coutEssence << " $" << endl;
	// je laisse en commentaire montrer le calcule complet
	cout << " Montant pour kilométrages : " << coutSuplementaire << "$" << endl;
	// cout << " Montant pour kilométrages : " << kilometrage << "Km" << " * " << consomation << "L" << " = " << coutSuplementaire << " $" << endl;
	// je laisse en commentaire montrer le calcule complet
	cout << " Montant totale : " << totale << "$" << endl;
	//cout << " Montant totale : " << coutParJours << "$" << " + " << coutSuplementaire << "$" << " + " << coutEssence << "$" << " = " << totale << endl;
	// je laisse en commentaire montrer le calcule complet
	return 0;

}
/*
Plans de tests

Nombre de jours             nombre de kilométrage                       totale
12                                     249                              563.65
23                                     564                              1104.28
1                                      45                               49.27
*/
// J'y ai passé beaucoup de temps, car j'ai un peu de difficulter à comprendre, j'espère que sa convient
//tentative pour envoyer dans Github