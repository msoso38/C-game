// Mini_jeux_.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <ctime>
#include <iostream>

int main()
{
	std::srand(time(nullptr));

	int b = 0;
	std::cout << "Nombre maximal : ";
	std::cin >> b;
	std::cin.ignore();
	int max_try = 0;
	std::cout << "Nomre d'essai : ";
	std::cin >> max_try;
	std::cin.ignore();

	int mystery_number = std::rand() % b + 1;

	for (int i = 0; i < max_try; ++i)
	{
		std::cout << "Entrer un nombre entre 0 et " << b << " : ";

		int number = 0;
		std::cin >> number;
		std::cin.ignore();

		if (mystery_number == number)
		{
			std::cout << "Gagne" << std::endl;
			break;
		}
		else if (number > mystery_number)
		{
			std::cout << "Trop grand" << std::endl;
		}
		else
		{
			std::cout << "Trop petit" << std::endl;
		}

		if (i == max_try - 1)
		{
			std::cout << "Perdu" << std::endl;
		}
	}

	std::cin.ignore();
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
