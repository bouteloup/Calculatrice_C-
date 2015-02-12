#include <iostream>
using namespace std;

/// \file	addition.cpp
/// \author	Rémy Bouteloup
/// \version	1.0
/// \date	12 février 2015
/// \brief	Addition de huit opérandes typée en int64_t, int32_t, float et double. 
/// \details	Ce fichier contient quatre fonctions addition avec différentes variables en paramètres.

/// \brief Fonction d'addition de deux nombres typée en int64_t.
/// Cette fonction possède deux variables de type int64_t en paramètres
/// \param operandeA est de type int64_t
/// \param operandeB est de type int64_t
/// \return Le résultat de la somme des deux opérandes en paramètres
int64_t addition(int64_t operandeA, int64_t operandeB)
{
return operandeA + operandeB;
}

/// \brief Fonction d'addition de deux nombres typée en int32_t.
/// Cette fonction possède deux variables de type int32_t en paramètres 
/// \param operandeC est de type int32_t
/// \param operandeD est de type int32_t
/// \return Le résultat de la somme des deux opérandes en paramètres
int32_t addition(int32_t operandeC, int32_t operandeD)
{
return operandeC + operandeD;
}

/// \brief Fonction d'addition de deux nombres typée en float.
/// Cette fonction possède deux variables de type float en paramètres 
/// \param operandeE est de type float
/// \param operandeF est de type float
/// \return Le résultat de la somme des deux opérandes en paramètres
float addition(float operandeE, float operandeF)
{
return operandeE + operandeF;
}

/// \brief Fonction d'addition de deux nombres typée en double.
/// Cette fonction possède deux variables de type double en paramètres 
/// \param operandeG est de type double
/// \param operandeH est de type double
/// \return Le résultat de la somme des deux opérandes en paramètres
double addition(double operandeG, double operandeH)
{
return operandeG + operandeH;
}
