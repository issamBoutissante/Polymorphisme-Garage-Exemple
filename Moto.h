#pragma once
#include"Vehicule.h"
class Moto:public Vehicule
{
private:
	double m_vitesse;
public:
	Moto( int anneFab, int nbrRoues,double m_vitesse);
	virtual void afficher();
};

