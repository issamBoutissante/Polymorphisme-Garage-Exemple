#include "Garage.h"
#include<iostream>
using namespace std;
void Garage::ajouter(Vehicule* vehicule) {
	this->Vehicules.push_back(vehicule);
}
void Garage::supprimer(int index) {
	this->Vehicules.erase(this->Vehicules.begin() + index);
}
