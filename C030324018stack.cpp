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