#include <iostream>
using namespace std;

class Mahasiswa {

private:
    int nim;
    string nama;
public:
    void inputdata() {
        cout << "Masukkan NIM : ";
        cin >> nim;
        cout << "Masukkan Nama : ";
        cin >> nama;
    }
    void tampildata() {
        cout << "\nNIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
    }
};

class Matakuliah {

private:
    string kode;
    string namamk;
    int sks;

public:
    void inputMK();
    void tampilMK();

};

void Matakuliah::inputMK() {
    cout << "\nMasukkan kode Mata Kuliah : ";
    cin >> kode;
    cout << "Masukkan Nama Mata Kuliah : ";
    cin >> namamk;
    cout << "Masukkan Jumlah SKS : ";
    cin >> sks;
    
}

void Matakuliah::tampilMK() {
    cout << "\nKode Mata Kuliah : " << kode << endl;
    cout << "Nama Mata Kuliah : " << namamk << endl;
    cout << "Jumlah SKS : " << sks << endl;
}


int main()
{
    Mahasiswa mhs;
    Matakuliah mk;

    mhs.inputdata();
    mhs.tampildata();

    mk.inputMK();
    mk.tampilMK();

}

