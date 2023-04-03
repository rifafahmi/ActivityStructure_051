#include <iostream>
using namespace std;

struct AlamatDetail
{
    string Desa;
    string Kota;
};

struct Mahasiswa
{
    string NIM;
    string nama;
    AlamatDetail alamat;
    int umur;
};

int main() {
    Mahasiswa mhs;
    cout << "masukkan NIM:";
    cin >> mhs.NIM;
    cout << "masukan nama:";
    cin >> mhs.nama;
    cout << "masukan "
}
