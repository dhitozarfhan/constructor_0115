#include <iostream>
using namespace std;


class mahasiswa
{
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printALL();
	mahasiswa (string pnama)
	{
		nama = pnama;
		setID();
	}
};

int mahasiswa::nim = 10;
void mahasiswa::setID()
{
	id = ++nim;
}

void mahasiswa::printALL()

{
	cout << "ID = " << id << endl;
	cout << "nama = " << nama << endl;
	cout << endl;
}