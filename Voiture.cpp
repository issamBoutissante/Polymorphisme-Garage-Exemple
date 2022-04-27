#include "Voiture.h"
#include<iostream>
using namespace std;

Voiture::Voiture(int m_portes, int anneFab, int nbrRoues,int m_prix)
	:Vehicule(anneFab,nbrRoues) {
	this->m_prix = m_prix;
	this->m_portes = m_portes;
}

void Voiture::afficher() {
	Vehicule::afficher();
	cout << "- Prix : " << this->m_prix << endl;
	cout << "- Portes : " << this->m_portes << endl;
}