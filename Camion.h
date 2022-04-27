#pragma once
#include"Vehicule.h"

class Camion:public Vehicule
{
private:
	float poids;
public:
	Camion(int m_portes, int anneFab, int nbrRoues, float poids);
	virtual void afficher();
};

