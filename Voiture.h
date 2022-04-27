#pragma once
#include"Vehicule.h"
class Voiture:public Vehicule
{
protected:
	int m_portes;
	int m_prix;
public:
	Voiture(int m_portes, int anneFab, int nbrRoues,int m_prix);
	virtual void afficher();
};

