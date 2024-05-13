#include <iostream>
using namespace std;

class mahasiwa
{
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiwa(string pnama) :nama(pnama) { setID(); }
};
