#include <iostream>
#include <stdint.h>
#include <string>
#include <cstdlib>
#include "./addition.cpp"
#include "./soustraction.cpp"
#include "./multiplication.cpp"
#include "./division.cpp"

using namespace std;

/// \file	main.cpp
/// \author	Rémy Bouteloup
/// \version	1.0
/// \date	12 février 2015
/// \brief	Affichage des valeurs prédéfinies et les résultats des calculs.
/// \details	Ce fichier contient la fonction principale. Les variables y sont déclarés. Ce programme fera appel à d'autres fichiers 	par le biais de fontions.
/// \details	Quatres bibliothèques on été necessaires au bon fonctionnement du programme. "cstdlib" a été inclu pour pouvoir utiliser l'instruction "cin.peek()" afin d'effectuer une pause. 


/// Déclaration de huit variables de types int64_t, int32_t, float et double.

int main()
{
	int32_t a=115, b=30;
	int64_t c=201, d=318;
	float e=23.1, f=12.1;
	double g=15.5, h=23.5;


cout << "Calculatrice simple - C++" << endl << endl;
cout << "Liste des valeurs numériques : " << endl << endl;


/// Affichage des valeurs numériques prédéfinies
cout << "int32_t --> "<< a << " | " << b << endl;
cout << "int64_t --> "<< c << " | " << d << endl;
cout << "float --> "<< e << " | " << f << endl;
cout << "double --> "<< g << " | " << h << endl << endl << endl;


//Pause
cout << "Appuyer sur une touche pour effectuer et afficher le calcul";
cin.peek();


/// 
cout << "\nAddition\n" << "int64_t = " << addition(a,b) << "\nint32_t = " << addition(c,d);
cout << "\nfloat = " << addition(e,f) << "\ndouble = " << addition(g,h) << endl;

cout << "\nSoustraction\n" << "int64_t = " << soustraction(a,b) << "\nint32_t = " << soustraction(c,d);
cout << "\nfloat = " << soustraction(e,f) << "\ndouble = " << soustraction(g,h) << endl;

cout << "\nMultiplication\n" << "int64_t = " << multiplication(a,b) << "\nint32_t = " << multiplication(c,d);
cout << "\nfloat = " <<  multiplication(e,f) << "\ndouble = " << multiplication(g,h) << endl; 

cout << "\nDivision\n" << "int64_t = " << division(a,b) << "\nint32_t = " << division(c,d);
cout << "\nfloat = " <<  division(e,f) << "\ndouble = " << division(g,h) << endl; 

return 0;
}

