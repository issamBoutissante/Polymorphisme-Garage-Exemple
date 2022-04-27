#pragma once
#include"Vehicule.h"

class Camion:public Vehicule
{
private:
	float poids;
	float m_portes;
public:
	Camion(int m_portes, int anneFab, int nbrRoues, float poids);
	virtual void afficher();
};

