#include <iostream>
using namespace std;

/// \file	modulo.cpp
/// \author	Rémy Bouteloup
/// \version	1.0
/// \date	14 février 2015
/// \brief	Modulo de quatre opérandes typée en int64_t et int32_t. 
/// \details	Ce fichier contient deux fonctions nommées modulo avec différentes variables en paramètres.

/// \brief Fonction modulo de deux nombres typée en int64_t.
/// Cette fonction possède deux variables de type int64_t en paramètres
/// \param operandeA est de type int64_t
/// \param operandeB est de type int64_t
/// \return Le résultat des deux opérandes en paramètres
int64_t modulo(int64_t operandeA, int32_t operandeB)
{
return operandeA % operandeB;
}

/// \brief Fonction modulo de deux nombres typée en int32_t.
/// Cette fonction possède deux variables de type int32_t en paramètres
/// \param operandeA est de type int32_t
/// \param operandeB est de type int32_t
/// \return Le résultat des deux opérandes en paramètres
int32_t modulo(int32_t operandeC, int32_t operandeD)
{
return operandeC % operandeD;
}
