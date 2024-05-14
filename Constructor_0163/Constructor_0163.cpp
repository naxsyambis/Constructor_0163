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

int main()
{

}



