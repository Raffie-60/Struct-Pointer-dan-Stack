#include <iostream>
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main(){
    mahasiswa raffie;
    mahasiswa* ptr = &raffie;

    (*ptr).nim = "C030324091";
    (*ptr).nama = "Muhammad Raffie Fadillah";
    (*ptr).alamat = "Banjarbaru, Kalimantan Selatan";
    (*ptr).ipk = 3.7;

    cout << endl << "Data Mahasiswa" << endl;
    cout << "NIM: " << (*ptr).nim << endl;
    cout << "Nama: " << (*ptr).nama << endl;
    cout << "Alamat: " <<(*ptr).alamat << endl;
    cout << "IPK: " << (*ptr).ipk << endl;




    return 0;


}