#include "CCompanie.h"

CCompanie::CCompanie() : numarAngajati(0)
{}

CCompanie::~CCompanie()
{}

void CCompanie::administrareCompanie()
{
	int i = 0, nrManageri = 0, nrProgramatori = 0, nrVanzatori = 0, j = 0, k;
	string proiect;
	
	while(numarAngajati <= 24)
	{
		angajati[numarAngajati].citireAngajat(numarAngajati);

		if (angajati[numarAngajati].getTipAngajatH() == manageri[numarAngajati].getTipAngajatH())
			nrManageri++;
		if (angajati[numarAngajati].getTipAngajatH() == programatori[numarAngajati].getTipAngajatH())
			nrProgramatori++;
		if (angajati[numarAngajati].getTipAngajatH() == angajatiVanzari[numarAngajati].getTipAngajatH())
			nrVanzatori++;

		numarAngajati++;
	} 

	int line = 0;
	for (i = 0; i < nrManageri; i++)
	{
		for (k = 0; k < 5; k++)
		{
			manageri[i].addSubordonati(line, k);
			line++;
		}	
	}

	line = 0;
	for (i = 0; i < nrProgramatori; i++)
	{
		programatori[i].citireProiecte(line);
		line += 4;
	}

	line = 0;
	for (i = 0; i < nrVanzatori; i++)
	{
		for (k = 0; k < 3; k++)
		{
			angajatiVanzari[i].addVanzari(line);
			line++;
		}
	}

	cout << "<------------------------------------S.C. BLABLA S.R.L.-------------------------------->" << endl;
	cout << endl;
	int manageriAfisare = 0;
	cout << "Managerii aceestei companii sunt: " << endl;
	for (int j = 0; j < numarAngajati-1; j++)
	{
		if (angajati[j].getTipAngajatH() == manageri[manageriAfisare].getTipAngajatH())
		{
			angajati[j].afisareAngajat();
			cout << "Acestia sunt subordonatii acestui manager: " << endl;
			manageri[manageriAfisare].printSubordonati();
			manageriAfisare++;
			cout << endl;
		}
	}

	int programatorAfisare = 0;
	cout << "Introduceti numele proiectului pentru care doriti sa vedeti programatorii care lucreaza: ";
	getline(cin, proiect);
	cout << endl;
	cout << "Programatorii care lucreaza la proiectul cu numele " << proiect << " sunt: " << endl;
	for (int j = 0; j < numarAngajati; j++)
	{
		if (angajati[j].getTipAngajatH() == programatori[programatorAfisare].getTipAngajatH())
		{
			if (programatori[programatorAfisare].searchNumeProiect(proiect))
			{
				angajati[j].afisareAngajat();
			}
			programatorAfisare++;
		}
	}
	cout << endl;

	programatorAfisare = 0;
	cout << "Programatorii care lucreaza la proiecte cu stare Inchis sunt: " << endl;
	for (int j = 0; j < numarAngajati; j++)
	{
		if (angajati[j].getTipAngajatH() == programatori[programatorAfisare].getTipAngajatH())
		{
			if (programatori[programatorAfisare].searchStareProiect())
			{
				angajati[j].afisareAngajat();
			}
			programatorAfisare++;
		}
	}
	cout << endl;

	int vanzatoriAfisare = 0;
	cout << "Vanzatorii acestei companii sunt: " << endl;
	for (int j = 0; j < numarAngajati; j++)
	{
		if (angajati[j].getTipAngajatH() == angajatiVanzari[vanzatoriAfisare].getTipAngajatH())
		{
			angajati[j].afisareAngajat();
			cout << "Valoare vanzarilor totale ale acestui vanzator este: " << angajatiVanzari[vanzatoriAfisare].sumaVanzari() << endl;
			cout << endl;
			vanzatoriAfisare++;
		}
		
	}
	cout << endl;
}


