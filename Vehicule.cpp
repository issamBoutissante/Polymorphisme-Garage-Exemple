#include "Vehicule.h"
#include<iostream>
using namespace std;

Vehicule::Vehicule(int m_portes, int anneFab, int nbrRoues) {
	this->m_portes = m_portes;
	this->anneFab = anneFab;
	this->nbrRoues = nbrRoues;
}

void Vehicule::afficher() {
	cout << "- Portes : "<<this->m_portes<<endl;
	cout << "- Anne Fabrication : " << this->anneFab << endl;
	cout << "- Nombre Roues : " << this->nbrRoues << endl;
}
int Vehicule::getNbrRoues() { return this->nbrRoues; }