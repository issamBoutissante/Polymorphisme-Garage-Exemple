#include "Vehicule.h"
#include<iostream>
using namespace std;

Vehicule::Vehicule(int anneFab, int nbrRoues) {
	this->anneFab = anneFab;
	this->nbrRoues = nbrRoues;
}

void Vehicule::afficher() {
	cout << "- Anne Fabrication : " << this->anneFab << endl;
	cout << "- Nombre Roues : " << this->nbrRoues << endl;
}
int Vehicule::getNbrRoues() { return this->nbrRoues; }