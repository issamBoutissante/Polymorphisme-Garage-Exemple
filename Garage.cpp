#include "Garage.h"
#include<iostream>
using namespace std;
void Garage::ajouter(Vehicule* vehicule) {
	this->Vehicules.push_back(vehicule);
	cout << "- Nombre Vehicule : " << this->Vehicules.size() << endl;
}
void Garage::supprimer(int index) {
	this->Vehicules.erase(this->Vehicules.begin() + index);
	cout << "- Nombre Vehicule : " << this->Vehicules.size() << endl;
}
