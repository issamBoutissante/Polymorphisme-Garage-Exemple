#pragma once
#include<vector>
#include"Vehicule.h"
using namespace std;
class Garage
{
private:
	vector<Vehicule*> Vehicules;
public:
	void ajouter(Vehicule* vehicule);
	void supprimer(int index);
	Vehicule* operator [](int index) {
		return this->Vehicules[index];
	}
};

