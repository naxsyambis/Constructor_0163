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



int main()
{
    
}
