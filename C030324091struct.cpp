#include <iostream>
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main(){
    mahasiswa Raffie;

    Raffie.nim = "C030324091";
    Raffie.nama = "Muhammad Raffie Fadillah";
    Raffie.alamat = "Banjarbaru, Kalimantan Selatan";
    Raffie.ipk = 3.7;

    cout << endl << "Data Mahasiswa" << endl;
    cout << "NIM: " << Raffie.nim << endl;
    cout << "Nama: " << Raffie.nama << endl;
    cout << "Alamat: " <<Raffie.alamat << endl;
    cout << "IPK: " << Raffie.ipk << endl;

    return 0;
}