#include "CPersoana.h"

CPersoana::CPersoana() : nume(" "), prenume(" "), cnp(0), fin("input.txt")
{}

CPersoana::CPersoana(string nume, string prenume, long long cnp) : nume(nume), prenume(prenume), cnp(cnp)
{}

CPersoana::~CPersoana()
{}

void CPersoana::citirePersoana()
{
	fin >> nume;
	fin >> prenume;
	fin >> cnp;
}

void CPersoana::afisarePersoana()
{
	cout << nume << " " << prenume << " " << cnp << endl;
}

string CPersoana::getNume()
{
	return nume;
}

string CPersoana::getPrenume()
{
	return prenume;
}

long long CPersoana::getCnp()
{
	return cnp;
}

void CPersoana::setNume(string nm)
{
	nume = nm;
}

void CPersoana::setPrenume(string pre)
{
	prenume = pre;
}

void CPersoana::setCnp(long long c)
{
	cnp = c;
}