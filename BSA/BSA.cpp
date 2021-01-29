// BSA.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "stdafx.h"
#include "Algo.h"


void CreateFenetreBSA() // creation de la fenêtre d'affichage adapté
{
	system("mode con LINES=50 COLS=90");

	cout << endl << "				BSA Algorithm" << endl << endl << endl;
}

void Line() // séparateur
{
	cout << "------------------------------------------------------------------" << endl << endl;
}

void SelectParam() // indique les paramétres à choisir
{
	cout << "Entrez ces parametres :" << endl;
	cout << "	- dimension (la taille d'un individu)" << endl << "	- popsize (le nombre d'individus de la population)" << endl;
	cout << "	- indRun (le nombre d'executions)" << endl << "        - mixrate (la probabilite de mutation)" << endl << endl;
	Line();
}

void SelectFunction() // indique les fonctions disponibles
{
	Line();
	cout << "choisisez la fonction de Benchmark a executer : " << endl;
	cout << "	1 - Rastragin" << endl;
	Line();
}

int _tmain(int argc, _TCHAR* argv[]) // éxecution principale du programme
{
	CreateFenetreBSA();
	SelectParam();

	Param set;
	cin >> set;

	Line();

	cout << set;

	SelectFunction();

	Prob prob;
	cin >> prob;

	Line();

	cout << "Resultat obtenu sur le nombre d'execution :" << endl << endl;
	Algo algo(prob, set);

	cout << endl;
	Line();

	system("pause");
	return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
