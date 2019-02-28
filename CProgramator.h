#ifndef CPROGRAMATOR_H
#define CPROGRAMATOR_H

#include "CAngajat.h"
#include "TipAngajat.h"

class CProgramator : public CAngajat
{
public:
	CProgramator();
	~CProgramator();
	TipAngajat getTipAngajatH();
	void citireProiecte(int maxLine);
	void printProiect();
	int searchNumeProiect(string nume);
	int searchStareProiect();

private:
	ifstream fProiecte;
	string dataDeInceput;
	struct Proiect
	{
		string nume, dataDeInceputProiect, stare;
	};

	Proiect *head;

	bool isEmpty() const
	{
		return head == NULL;
	}
};

#endif // !CPROGRAMATOR_H
