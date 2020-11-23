// TP1_exo2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Cercle.h"
#include "Point.h"
using namespace std;

int main()
{
    Point p1(2.5 , 3.8); 
    Cercle c1(p1, 1);
    p1.m_print();
    cout << "la surface est :" << c1.m_surface() << endl;
    cout << " le perimetre est :" << c1.m_perimetre() << endl;

    Point p2(3, 4);
    Cercle c2(p2, 0.5);
    if (c1.m_egalite(c2)) {
        cout << "les deux cercles sont egaux" << endl;
    }
    else {
        cout << "les deux cercles ne sont pas  egaux" << endl;
    }
     
    if (c1.appartenance(p2)) {
        cout << "le point appartient au cercle" << endl;
    }
    else {
        cout << "le point n'appartient pas  au cercle" << endl;

    }
    
 
     
        

    
   
   
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
