#include "Camion.h"
#include<iostream>
using namespace std;

Camion::Camion(int m_portes, int anneFab, int nbrRoues, float poids)
	:Vehicule(anneFab,nbrRoues) {
	this->poids = poids;
	this->m_portes = m_portes;
}

void Camion::afficher() {
	Vehicule::afficher();
	cout << "- Poids : " << this->poids << endl;
	cout << "- Portes : " << this->m_portes << endl;
}