/*
 But : �crire un programme pour calculer le montant qu�un individu devra d�bourser pour faire un voyage dans une
automobile lou�e. L�algorithme tient compte du kilom�trage parcouru et de la dur�e du voyage qui sont
soumises par le requ�rant.
Auteur : S�bastien Bigras-Henri
Date : 2020-09-16
*/

#include <iostream>
using namespace std;
int main()

{
	setlocale(LC_ALL, "");
	// d�claration des variable
	double Location = 45; //  Jours = 45$ montant initiale de la location par jours
	double Jours; // nombre de jours de location du v�hicule
	double coutParJours;
	double kilometrage;
	double kilometrageGratuit = 250;
	double coutSuplementaire = 0;
	double consomation = 0.05;
	double coutEssence;
	double extraKm;
	double littreConsom�;
	double prixEssence = 1.25;
	double consomationEssence = 7.6;
	double consomationParKilometre = 100;
	double totale;

	cout << " Nombre de jours du voyage : ";
	cin >> Jours;
	cout << " Nombre de kilom�trage parcouru : ";
	cin >> kilometrage;

	coutParJours = Location * Jours;
	// calculer le montant totale pour le nombre de jours de location

	  // si le locataire depasse 250km par jours il paye 0.05$ de plus par kilometre
	if (kilometrage > kilometrageGratuit)
		// si le locataire fait moins de 250 km il ne paye pas de surplus
	{
		extraKm = kilometrage - kilometrageGratuit;
		// le cout pour le kilom�trage en extra est le kilom�trage du locataire moins (250) le kilom�trageGratuit
		coutSuplementaire = extraKm * consomation;
		// le cout supl�mentaire est �gale au kilom�trage en extra * (7.6) le kilom�trage
	}

	else
	{

	}
	// calculer le cout de l�essence 7.6L * le nombre de km	� 1.25l en produit crois� 
	// (kilometrage*7.6)/100 = littreconsom� ---> littreconsom�*1.25= cout d'essence 
	littreConsom� = kilometrage * consomationEssence / consomationParKilometre;


	coutEssence = littreConsom� * prixEssence;
	// ( km * consoDessence/ 100 ) * 1.25 


	// coutParJours + CoutSuplementaire + coutEssence
	totale = coutParJours + coutSuplementaire + coutEssence;
	// additionner le totale des couts

	/*
	nombre de jours : 12
	nnombre de Km : 450            <== a quoi je veux que �a ressemble
	cout pour lessence : 42.75$
	motant pour Km : 10$
	total : 592.75$
	*/
	// J'ai utiliser un moyens pour /viter de voir les calcule complet sur le re�u

	cout << " Montant pour la location : " << coutParJours << "$" << endl;
	//cout << " Montant pour la location : " << Location << " * " << Jours << " = " << coutParJours << endl;  
	// je laisse en commentaire montrer le calcule complet
	cout << " Cout pour l'essence : " << coutEssence << "$" << endl;
	//cout << " Cout pour l'essence : ( " << kilometrage << " * " << consomationEssence << " / " << consomationParKilometre << ") * " << prixEssence << " = " << coutEssence << " $" << endl;
	// je laisse en commentaire montrer le calcule complet
	cout << " Montant pour kilom�trages : " << coutSuplementaire << "$" << endl;
	// cout << " Montant pour kilom�trages : " << kilometrage << "Km" << " * " << consomation << "L" << " = " << coutSuplementaire << " $" << endl;
	// je laisse en commentaire montrer le calcule complet
	cout << " Montant totale : " << totale << "$" << endl;
	//cout << " Montant totale : " << coutParJours << "$" << " + " << coutSuplementaire << "$" << " + " << coutEssence << "$" << " = " << totale << endl;
	// je laisse en commentaire montrer le calcule complet
	return 0;

}
/*
Plans de tests

Nombre de jours             nombre de kilom�trage                       totale
12                                     249                              563.65
23                                     564                              1104.28
1                                      45                               49.27
*/
// J'y ai pass� beaucoup de temps, car j'ai un peu de difficulter � comprendre, j'esp�re que sa convient
//tentative pour envoyer dans Github