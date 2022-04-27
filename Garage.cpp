#include "Garage.h"
void Garage::ajouter(Vehicule* vehicule) {
	this->Vehicules.push_back(vehicule);
}
void Garage::supprimer(int index) {
	delete this->Vehicules[index];
}
