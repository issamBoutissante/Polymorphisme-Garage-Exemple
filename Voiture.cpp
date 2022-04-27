#include "Voiture.h"
#include<iostream>
using namespace std;

Voiture::Voiture(int m_portes, int anneFab, int nbrRoues,int m_prix)
	:Vehicule(m_portes,anneFab,nbrRoues) {
	this->m_prix = m_prix;
}

void Voiture::afficher() {
	Vehicule::afficher();
	cout << "- Prix : " << this->m_prix << endl;
}