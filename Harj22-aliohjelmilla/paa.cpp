#include "maarittely.h"

int main()
{
	HENK henkilot[10];

	int valinta;
	int laskuri = 0;
	int *lkm = &laskuri;
	bool lippu = true;

	do{
		valinta = Valikko(); // Naytetaan valikko

		switch (valinta)
		{
		case 0:
			lippu = false; // poistutaan do-loopista ja ohjelma loppuu
			break;

		case 1: // Kysellaan kayttajalta henkilon tiedot ja tallennetaan tietuetaulukkoon
			LisaaHenkilo(henkilot, lkm);
			laskuri++; // Tama pitaisi saada aliohjelman sisaan, mutta ei nyt riko mitaan, kun tietoja ei kuitenkaan voi poistaa
			break;

		case 2: 
			// Tulostetaan kaikki tallennetut tiedot
			TulostaKaikkiHenkilot(henkilot, laskuri);
			break;

		/*case 3:
			TulostaHenkilo(henkilot[laskuri-1]);
			break;*/

		default:
			cout << "No sun taytyy valita joku noista numeroista tietysti!" << endl;
			break;
		}
	}while(lippu);

}