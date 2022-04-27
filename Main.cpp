#include <iostream>
#include"Garage.h"
#include"Camion.h"
#include"Voiture.h"
#include"Moto.h"
#include<vector>
using namespace std;

int main()
{
	Garage garage;
	garage.ajouter(new Moto(2000, 2, 90));
	garage.ajouter(new Voiture(4, 1999, 7, 40000));
	garage.ajouter(new Camion(4,2022,8,50));

	cout << "           Moto : " << endl;
	garage[0]->afficher();
	cout << "           Voiture : " << endl;
	garage[1]->afficher();
	cout << "           Camion : " << endl;
	garage[2]->afficher();

	return 0;
}












//vector<Vehicule*> garage = {
//		new Moto(2000, 2, 90),
//		new Voiture(4, 1999, 7, 40000)
//};
//
//cout << "- la taille de vector avant la supprission est : " << garage.size() << endl;
//
//delete garage[0];
//
//cout << "- la taille de vector apres la supprission est : " << garage.size() << endl;
