/* NIM : 18220028 */
/* Nama : Muhammad Dzaki Dwi Putranto */
/* Tanggal : 15 September 2021 */
/* Topik Praktikum : Praktikum 2 */
/* Deskripsi : implementasi array.h */

#include <stdio.h>
#include "array.h"

void MakeEmpty (TabInt *T) {
/* I.S. sembarang */
/* F.S. Terbentuk tabel T kosong dengan kapasitas IdxMax-IdxMin+1 */
    T->Neff = 0; 
}

int NbElmt (TabInt T) {
/* Mengirimkan banyaknya elemen efektif tabel */
/* Mengirimkan nol jika tabel kosong */
    return T.Neff;
}

int MaxNbEl (TabInt T) {
/* Mengirimkan maksimum elemen yang dapat ditampung oleh tabel */
    return IdxMax-IdxMin+1;
}

IdxType GetFirstIdx (TabInt T) {
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen pertama */
    return 1;
}

IdxType GetLastIdx (TabInt T) {
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen terakhir */
    return T.Neff;
}

ElType GetElmt (TabInt T, IdxType i) {
/* Prekondisi : Tabel tidak kosong, i antara FirstIdx(T)..LastIdx(T) */
/* Mengirimkan elemen tabel yang ke-i */
    return T.TI[i];
}

void SetTab (TabInt Tin, TabInt *Tout) {
/* I.S. Tin terdefinisi, sembarang */
/* F.S. Tout berisi salinan Tin */
    /* KAMUS LOKAL */
    int i;
    /* ALGORITMA */
    for (i = 1; i < Tin.Neff+1; i++)
    {
        Tout->TI[i] = Tin.TI[i];
    }
    
}

void SetEl (TabInt *T, IdxType i, ElType v) {
/* I.S. T terdefinisi, sembarang */
/* F.S. Elemen T yang ke-i bernilai v */
/* Mengeset nilai elemen tabel yang ke-i sehingga bernilai v */
    T->TI[i] = v;
}

void SetNeff (TabInt *T, IdxType N) {
/* I.S. T terdefinisi, sembarang */
/* F.S. Nilai indeks efektif T bernilai N */
/* Mengeset nilai indeks elemen efektif sehingga bernilai N */
    T->Neff = N;
}

boolean IsIdxValid (TabInt T, IdxType i) {
/* Prekondisi : i sembarang */
/* Mengirimkan true jika i adalah indeks yang valid utk ukuran tabel */
/* yaitu antara indeks yang terdefinisi utk container*/
    return((i >= IdxMin) && (i <= IdxMax));
}

boolean IsIdxEff (TabInt T, IdxType i) {
/* Prekondisi : i sembarang*/
/* Mengirimkan true jika i adalah indeks yang terdefinisi utk tabel */
/* yaitu antara FirstIdx(T)..LastIdx(T) */
    return ((i > 0) && (i <= T.Neff));
}

boolean IsEmpty (TabInt T) {
/* Mengirimkan true jika tabel T kosong, mengirimkan false jika tidak */
    return(T.Neff==0);
}

boolean IsFull (TabInt T) {
/* Mengirimkan true jika tabel T penuh, mengirimkan false jika tidak */
    return(T.Neff==IdxMax);
}