#include <iostream>
using namespace std;


class Mahasiswa {
public:
    string nama;
    int nim;
    float nilai;


void printdata(){
    cout << "NIM =" << nim << endl;
    cout << "Nama =" << nama << endl;
    cout << "Nilai =" << nilai << endl;

}
};

int main() {  // panggil variabel
    Mahasiswa mhs;
    mhs.nim = 0241;
    mhs.nama = "Hanan";
    mhs.nilai = 100;

    mhs.printdata();

};