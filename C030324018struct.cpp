#include <iostream>
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main(){
mahasiswa doni;

doni.nim="c03030303";
doni.nama="doni ajah";
doni.alamat="jl. alamat selesai sekarang";
doni.ipk=3.7;

cout << doni.nim<<"\n";
cout << doni.nama<<"\n";
cout << doni.alamat<<"\n";
cout << doni.ipk<<"\n";
}
