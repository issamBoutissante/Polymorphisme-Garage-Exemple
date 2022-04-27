#include "Moto.h"
#include<iostream>
using namespace std;

Moto::Moto(int m_portes, int anneFab, int nbrRoues, double m_vitesse)
	:Vehicule(m_portes,anneFab,nbrRoues) {
	this->m_vitesse = m_vitesse;
}

void Moto::afficher() {
	Vehicule::afficher();
	cout << "- Vitesse : "<<this->m_vitesse << endl;
}