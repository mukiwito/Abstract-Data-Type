/* NIM : 18220028 */
/* Nama : Muhammad Dzaki Dwi Putranto */
/* Tanggal : 9 September 2021 */
/* Topik Praktikum : Praktikum 1 */
/* Deskripsi : implementasi dari garis.h */

#include <stdio.h>
#include <math.h>
#include "garis.h"

void MakeGARIS (POINT P1, POINT P2, GARIS * L) {
    /* I.S. P1 dan P2 terdefinisi */
    /* F.S. L terdefinisi dengan L.PAw = P1 dan L.PAkh = P2 */
    /* Membentuk sebuah L dari komponen-komponennya */
    /* ALGORITMA */
    PAwal(*L) = P1;
    PAkhir(*L) = P2;
}

void BacaGARIS (GARIS * L) {
    /* I.S. sembarang */
    /* F.S. L terdefinisi sebagai GARIS yang valid */
    /* Proses : mengulangi membaca dua buah nilai P1 dan P2 sehingga dapat 
       membentuk GARIS yang valid 
        GARIS disebut valid jika titik awal tidak sama dengan titik akhirnya. */
    /* Jika pembacaan garis tidak valid, diberikan pesan kesalahan: 
        "Garis tidak valid" */
    /* Contoh:
        2 3
        2 3
        Garis tidak valid
        2 3
        3 3
        --> terbentuk garis L dengan L.PAw = <2,3> dan L.PAkh = <3,3> */
    
    /* KAMUS */
    POINT P1,P2;
    float x1,x2,y1,y2;
    /* ALGORITMA */
    scanf("%f %f", &x1, &y1);
    scanf("\n");
    scanf("%f %f", &x2, &y2);
    Absis(P1) = x1;
    Ordinat(P1) = y1;
    Absis(P2) = x2;
    Ordinat(P2) = y2;
    while (EQ(P1,P2)) {
        printf("Garis tidak valid\n");
        scanf("%f %f", &x1, &y1);
        scanf("\n");
        scanf("%f %f", &x2, &y2);
        Absis(P1) = x1;
        Ordinat(P1) = y1;
        Absis(P2) = x2;
        Ordinat(P2) = y2;
    }
        PAwal(*L) = P1;
        PAkhir(*L) = P2;
}

void TulisGARIS (GARIS L) {
    /* I.S. L terdefinisi */
    /* F.S. L tertulis di layar dengan format "((x1,y1),(x2,y2))" 
        tanpa tambahan karakter apa pun di depan, di tengah, atau di belakang,
        termasuk spasi dan enter */  
    /* ALGORITMA */
    printf("((%f,%f),(%f,%f))\n", Absis(PAwal(L)), Ordinat(PAwal(L)), Absis(PAkhir(L)), Ordinat(PAkhir(L)));
}

float PanjangGARIS (GARIS L) {
    /* Menghitung panjang garis L : berikan rumusnya */
    // sqrt [(x2-x1)^2 + (y2-y1)^2] //
    /* KAMUS */
    float x1,x2,y1,y2;
    /* ALGORITMA */
    x1 = Absis(PAwal(L));
    x2 = Absis(PAkhir(L));
    y1 = Ordinat(PAwal(L));
    y2 = Ordinat(PAkhir(L));
    return(sqrtf((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));
}

float Gradien (GARIS L) {
    /* Mengembalikan Gradien (m) dari L */
    /* Gradien garis yang melalui (x1,y1) dan (x2,y2) adalah: (y2-y1)/(x2-x1) */
    /* Prekondisi : x1 != x2 */
    /* KAMUS */
    float x1,x2,y1,y2;
    /* ALGORITMA */
    x1 = Absis(PAwal(L));
    x2 = Absis(PAkhir(L));
    y1 = Ordinat(PAwal(L));
    y2 = Ordinat(PAkhir(L));
    return((y2-y1)/(x2-x1));
}

boolean IsTegakLurus (GARIS L1, GARIS L2) {
    /* Menghasilkan true jika L1 tegak lurus terhadap L2 */
    /* Dua garis saling tegak lurus jika hasil perkalian kedua gradiennya = -1 */
    /* ALGORITMA */
    return(Gradien(L1)*Gradien(L2) == -1);
}

boolean IsSejajar (GARIS L1, GARIS L2) {
    /* Menghasilkan true jika L "sejajar" terhadap L1 */
    /* Dua garis saling sejajar jika memiliki gradien yang sama */
    /* ALGORITMA */
    return(Gradien(L1) == Gradien(L2));
}