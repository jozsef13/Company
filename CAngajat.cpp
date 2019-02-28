#include "CAngajat.h"

CAngajat::CAngajat() : CPersoana(), id(0), tipAngajat(" ")
{}

CAngajat::CAngajat(int id, string tipAngajat) : id(id), tipAngajat(tipAngajat), CPersoana()
{}

CAngajat::~CAngajat()
{}

void CAngajat::citireAngajat(int maxLine)
{
	string whatever;
	
	for (int line = 0; line < maxLine; line++)
	{
		getline(fin, whatever);
	}

	fin >> id;
	fin >> tipAngajat;
	citirePersoana();
}

void CAngajat::afisareAngajat()
{
	cout << id << " " << tipAngajat << " ";
	afisarePersoana();
}

int CAngajat::getId()
{
	return id;
}

string CAngajat::getTipAngajat()
{
	return tipAngajat;
}

void CAngajat::setId(int i)
{
	id = i;
}

void CAngajat::setTipAngajat(string tip)
{
	tipAngajat = tip;
}

TipAngajat CAngajat::getTipAngajatH()
{
	if (tipAngajat == "Manager")
	{
		return TipAngajat::Manager;
	}
	else if (tipAngajat == "Programator")
	{
		return TipAngajat::Programator;
	}
	else if (tipAngajat == "Vanzator")
	{
		return TipAngajat::AngajatVanzari;
	}
	else return TipAngajat::Nimic;
}