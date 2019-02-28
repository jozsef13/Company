#include "CManager.h"

CManager::CManager() : CAngajat(), fManager("subordonati.txt")
{}

CManager::~CManager()
{}

void CManager::addSubordonati(int maxLine, int i)
{
	string whatever;
	if (maxLine % 5 == 0 && maxLine != 0)
	{
		for (int line = 0; line < maxLine; line++)
		{
			getline(fManager, whatever);
		}
	}

	int id;
	string tipAngajat, nume, prenume;
	long long cnp;

	fManager >> id;
	fManager >> tipAngajat;
	fManager >> nume;
	fManager >> prenume;
	fManager >> cnp;

	subordonati[i].setId(id);
	subordonati[i].setNume(nume);
	subordonati[i].setPrenume(prenume);
	subordonati[i].setTipAngajat(tipAngajat);
	subordonati[i].setCnp(cnp);
}

void CManager::printSubordonati()
{
	for (int i = 0; i < 5; i++)
	{
		cout << subordonati[i].getId() << " " << subordonati[i].getTipAngajat() << " " << subordonati[i].getNume() << " " << subordonati[i].getPrenume() << " " << subordonati[i].getCnp() << endl;
	}
}

TipAngajat CManager::getTipAngajatH()
{
	return TipAngajat::Manager;
}