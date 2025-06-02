#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main() {
    Mahasiswa doni;

    // pointer ke struct Mahasiswa
    Mahasiswa* ptrDoni = &doni;

    // mengisi data melalui pointer
    ptrDoni->nim = "C030324018";
    ptrDoni->nama = "Gean Prana Daniswara";
    ptrDoni->alamat = "jl. alamat selesai sekarang";
    ptrDoni->ipk = 3.7;

    // menampilkan data melalui pointer
    cout << "NIM    : " << ptrDoni->nim << "\n";
    cout << "Nama   : " << ptrDoni->nama << "\n";
    cout << "Alamat : " << ptrDoni->alamat << "\n";
    cout << "IPK    : " << ptrDoni->ipk << "\n";

    return 0;
}
