#ifndef CMANAGER_H
#define CMANAGER_H

#include "CAngajat.h"
#include "TipAngajat.h"

class CManager : public CAngajat
{
public:
	CManager();
	~CManager();
	TipAngajat getTipAngajatH();
	void addSubordonati(int maxLine, int i);
	void printSubordonati();
private:
	ifstream fManager;
	CAngajat subordonati[5];
};

#endif // !CMANAGER_H