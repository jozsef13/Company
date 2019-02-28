#include "CProgramator.h"

CProgramator::CProgramator() : CAngajat(), head(NULL), dataDeInceput(" "), fProiecte("proiecte.txt")
{}

CProgramator::~CProgramator()
{
	delete head;
}

void CProgramator::citireProiecte(int maxLine)
{	
	string whatever;

	for (int line = 0; line < maxLine; line++)
	{
		getline(fProiecte, whatever);
	}

	string nume, stare, dataDeInceputProiect;
	getline(fProiecte, nume);
	getline(fProiecte, dataDeInceput);
	getline(fProiecte, dataDeInceputProiect);
	getline(fProiecte, stare);

	Proiect *temp = new Proiect;
	temp->nume = nume;
	temp->dataDeInceputProiect = dataDeInceputProiect;
	temp->stare = stare;
	head = temp;
}

void CProgramator::printProiect()
{
	cout << "Numele proiectului: " << head->nume << endl;
	cout << "Data de inceput a proiectului: " << head->dataDeInceputProiect << endl;
	cout << "Data inceperii lucrului la proiect: " << dataDeInceput << endl;
	cout << "Stare proiect: " << head->stare << endl;
}

int CProgramator::searchNumeProiect(string nume)
{
	if (head->nume == nume)
		return 1;
	else return 0;
}

int CProgramator::searchStareProiect()
{
	if (head->stare == "Inchis")
		return 1;
	else return 0;
}

TipAngajat CProgramator::getTipAngajatH()
{
	return TipAngajat::Programator;
}