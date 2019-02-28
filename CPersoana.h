#ifndef CPERSOANA_H
#define CPERSOANA_H

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class CPersoana
{
public:
	string getNume();
	string getPrenume();
	long long getCnp();
	void setNume(string nm);
	void setPrenume(string pre);
	void setCnp(long long c);

protected:
	virtual ~CPersoana();
	CPersoana();
	CPersoana(string nume, string prenume, long long cnp);
	void citirePersoana();
	void afisarePersoana();
	string nume, prenume;
	long long cnp;
	ifstream fin;
};

#endif // !CPERSOANA_H