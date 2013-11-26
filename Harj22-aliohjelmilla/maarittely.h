// Valtteri Ahonen
// Harjoitus 22 aliohjelmilla
// 26.11.2013

#include <iostream>
using namespace std;

struct HENK{
	char etun[20];
	float matka;
	int hattu;
};

//Aliohjelmat
int Valikko(void);
//void TulostaHenkilo(HENK henkilot);
void TulostaKaikkiHenkilot(HENK henkilot[], int laskuri);
void LisaaHenkilo(HENK henkilot[], int *lkm);