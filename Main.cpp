#include <iostream>
#include"Garage.h"
#include"Camion.h"
#include"Voiture.h"
#include"Moto.h"
using namespace std;

int main()
{
	Garage garage;
	garage.ajouter(new Moto(3, 2000, 2, 90));
	garage.ajouter(new Voiture(4, 1999, 7, 40000));
	garage.ajouter(new Camion(4,2022,8,50));
	garage.supprimer(1);

	garage[0]->afficher();
	garage[1]->afficher();

	return 0;
}