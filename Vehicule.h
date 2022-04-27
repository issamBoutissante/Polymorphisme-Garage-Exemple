#pragma once
class Vehicule
{
private:
	int anneFab;
	int nbrRoues;
public:
	Vehicule(int anneFab, int nbrRoues);
	virtual void afficher();
	virtual int getNbrRoues();
};

