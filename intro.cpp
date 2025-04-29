#include <iostream>
using namespace std;


class Mahasiswa {
public:
    string nama;
    int nim;
    float nilai;



};

int main() {
    Mahasiswa mhs;
    mhs.nim = 0241;
    mhs.nama = "Hanan";
    mhs.nilai = 100;

    mhs.printdata();

};