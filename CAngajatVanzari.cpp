#include "CAngajatVanzari.h"

CAngajatVanzari::CAngajatVanzari() : CAngajat(), head(NULL), fVanzari("vanzari.txt")
{}

CAngajatVanzari::~CAngajatVanzari()
{
	delete head;
}

void CAngajatVanzari::addVanzari(int maxLine)
{
	string whatever;

	if (maxLine % 3 == 0 && maxLine != 0)
	{
		for (int line = 0; line < maxLine; line++)
		{
			getline(fVanzari, whatever);
		}
	}

	string nume;
	double pret;
	string dataVandut;

	fVanzari >> nume;
	fVanzari >> pret;
	fVanzari >> dataVandut;

	Vanzare *temp = new Vanzare;
	Vanzare *p = head;
	temp->produse->nume = nume;
	temp->produse->pret = pret;
	temp->dataVandut = dataVandut;
	temp->next = NULL;

	if (isEmpty())
	{
		head = temp;
	}
	else
	{
		while (p->next)
		{
			p = p->next;
		}
		p->next = temp;
		p = p->next;
	}
}

void CAngajatVanzari::printVanzari()
{
	for (Vanzare *p = head; p; p = p->next)
	{
		p->print();
	}
}

double CAngajatVanzari::sumaVanzari()
{
	double suma = 0;
	Vanzare *p = head;

	while (p)
	{
		suma = suma + p->produse->pret;
		p = p->next;
	}

	return suma;
}

TipAngajat CAngajatVanzari::getTipAngajatH()
{
	return TipAngajat::AngajatVanzari;
}