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

int main()
{

}



