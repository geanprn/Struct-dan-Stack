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