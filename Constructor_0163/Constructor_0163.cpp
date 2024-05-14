#include <iostream>
using namespace std;
// static member function unutk variabel 

class Mahasiswa {

public:
    static int nim; // yang nanti isinya sama adalah nim
    int id; 
    string nama; 

    void setID();
    void printAll();

    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    } 

};

int Mahasiswa::nim = 163; // dipanggil kelas baru objeknya, kelas mahasiswa di akses diluar dengan ::

void Mahasiswa::setID() {
    id = ++nim; // menambahkan plus satu, ditambahkan dulu baru diberikan
}

void Mahasiswa::printAll() {
    cout << "ID =" << id << endl;
    cout << "Nama =" << nama << endl;
    cout << endl;
}


int main()
{
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Asroni");
    mhs2.nim = 20; // mengakses dan mengganti nilai mhs2,3,4
    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswa mhs4("Joko Purbo");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    system("pause");

    return 0;
}





