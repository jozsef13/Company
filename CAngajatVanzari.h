#ifndef CANGAJATVANZARI_H
#define CANGAJATVANZARI_H


#include "CAngajat.h"
#include "TipAngajat.h"

class CAngajatVanzari : public CAngajat
{
public:
	CAngajatVanzari();
	~CAngajatVanzari();
	TipAngajat getTipAngajatH();
	void addVanzari(int maxLine);
	void printVanzari();
	double sumaVanzari();

private:
	ifstream fVanzari;
	struct Produs
	{
		Produs *next;
		string nume;
		double pret;
	};

	struct Vanzare
	{
		Vanzare *next;
		Produs *produse = new Produs;
		string dataVandut;

		void print() const
		{
			cout << produse->nume << ", " << produse->pret << ", " << dataVandut << endl;
		}
	};
			

	Vanzare *head;

	bool isEmpty() const
	{
		return head == NULL;
	}
};

#endif // !CANGAJATVANZARI_H