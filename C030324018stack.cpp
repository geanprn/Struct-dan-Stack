#include <iostream>
#include <conio.h>
#include <windows.h>  
using namespace std;

#define MAX 100

typedef int ItemType;

typedef struct {
    ItemType data[MAX];
    int top;
} Stack;

void Inisialisasi(Stack *S) {
    S->top = -1;
}

int Full(Stack *S) {
    return S->top == MAX - 1;
}

int Empty(Stack *S) {
    return S->top == -1;
}

void Push(Stack *S, ItemType nilai) {
    if (Full(S)) {
        cout << "Stack penuh! Tidak bisa menambahkan data.\n";
    } else {
        S->top++;
        S->data[S->top] = nilai;
        cout << "Data " << nilai << " berhasil dimasukkan.\n";
    }
}

void Pop(Stack *S) {
    if (Empty(S)) {
        cout << "Stack kosong! Tidak bisa melakukan pop.\n";
    } else {
        cout << "Data " << S->data[S->top] << " telah di-pop.\n";
        S->top--;
    }
}

void Tampil(Stack *S) {
    if (Empty(S)) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Isi stack (bawah ke atas): ";
        for (int i = 0; i <= S->top; i++) {
            cout << S->data[i] << " ";
        }
        cout << "\n";
    }
}

void Info() {
    system("cls");
    cout << "Nama  : Gean Prana Daniswara\n";
    cout << "NIM   : C030324018\n";
    cout << "Kelas : TI-2B\n";
    getch();
}

void InputData(Stack *S) {
    char ulang;
    ItemType nilai;

    do {
        system("cls");
        cout << "Masukkan data (angka): ";
        cin >> nilai;
        Push(S, nilai);

        if (Full(S)) {
            cout << "Stack sudah penuh!\n";
            break;
        }

        cout << "Tambah data lagi? (y/n): ";
        ulang = getch();
        cout << ulang << "\n";

    } while (ulang == 'y' || ulang == 'Y');

    getch();
}

void TampilMenu() {
    system("cls");
    cout << "====== PROGRAM STACK SESUAI MATERI ======\n";
    cout << "1. Push (Input Data)\n";
    cout << "2. Pop (Ambil Data Teratas)\n";
    cout << "3. Tampilkan Isi Stack\n";
    cout << "4. Informasi Pembuat\n";
    cout << "5. Keluar\n";
    cout << "Pilih menu (1-5): ";
}