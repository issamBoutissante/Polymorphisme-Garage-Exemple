#include "Camion.h"
#include<iostream>
using namespace std;

Camion::Camion(int m_portes, int anneFab, int nbrRoues, float poids)
	:Vehicule(m_portes,anneFab,nbrRoues) {
	this->poids = poids;
}

void Camion::afficher() {
	Vehicule::afficher();
	cout << "- Poids : " << this->poids << endl;
}