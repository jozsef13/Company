#ifndef CCOMPANIE_H
#define CCOMPANIE_H

#include "CManager.h"
#include "CAngajatVanzari.h"
#include "CProgramator.h"
#include "TipAngajat.h"

class CCompanie
{
public:
	CCompanie();
	~CCompanie();
	void administrareCompanie();
private:
	int numarAngajati;
	CAngajat angajati[25];
	CManager manageri[25];
	CProgramator programatori[25];
	CAngajatVanzari angajatiVanzari[25];
};

#endif // !CCOMPANIE_H