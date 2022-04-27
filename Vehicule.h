#pragma once
class Vehicule
{
private:
	int m_portes;
	int anneFab;
	int nbrRoues;
public:
	Vehicule(int m_portes,int anneFab, int nbrRoues);
	virtual void afficher();
	virtual int getNbrRoues();
};

