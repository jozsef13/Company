#ifndef CANGAJAT_H
#define CANGAJAT_H

#include "CPersoana.h"
#include "TipAngajat.h"

class CAngajat : public CPersoana
{
public:
	CAngajat();
	virtual ~CAngajat();
	TipAngajat getTipAngajatH();
	void citireAngajat(int i);
	void afisareAngajat();
	int getId();
	void setId(int i);
	string getTipAngajat();
	void setTipAngajat(string tip);

protected:
	int id;
	string tipAngajat;
	CAngajat(int id, string tipAngajat);
};

#endif // !CANGAJAT_H