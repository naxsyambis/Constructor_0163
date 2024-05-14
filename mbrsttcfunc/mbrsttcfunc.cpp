#include <iostream>
#include <string>
using namespace std;
// member static function

class mahasiswa {

private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim) { nim = pNim; /*Definisi Function*/ }
    static int getNim() { return nim; /*Definisi Function*/ }

    mahasiswa(string pnama) :nama(pnama) { setID(); } // :nama(pnama) itu sama aja dengan nama = pnama; 
};

int mahasiswa::nim = 0; // di akses diluar kelas

void mahasiswa::setID() {
    id = ++nim;
}


void mahasiswa::printAll() {
    cout << "ID =" << id << endl;
    cout << "Nama =" << nama << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("Sri Dadi");
    mahasiswa mhs2("Budi Jatmiko");
    mahasiswa::setNim(9);// mengakses nim melalui static member function "setNim"
    mahasiswa mhs3("Andi Janu");
    mahasiswa mhs4("Joko wahono");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses dari luar object =" << mahasiswa::getNim() << endl; // mengakses nim dari luar object 
    system("pause");

    return 0;
}
