/* NIM : 18220028 */
/* Nama : Muhammad Dzaki Dwi Putranto */
/* Tanggal : 7 Juli 2021 */
/* Topik Praktikum : Praktikum 0 */
/* Deskripsi : membuat program yang menuliskan "Hello, World!" pada layar */

#include <stdio.h>
#include <math.h>
#include "point.h"

POINT MakePOINT (float X, float Y) {
    /* KAMUS */
    POINT P;
    /* ALGORITMA */
    Absis(P) = X;
    Ordinat(P) = Y;
    return P;
}

void BacaPOINT (POINT * P) {
    /* KAMUS */
    float X,Y;
    /* ALGORITMA */
    scanf("%f%f", &X, &Y);
    Absis(*P) = X;
    Ordinat(*P) = Y;
}

void TulisPOINT (POINT P) {
    /* ALGORITMA */
    printf("(%.2f,%.2f)", Absis(P), Ordinat(P));
}

boolean EQ (POINT P1, POINT P2) {
    /* ALGORITMA */
    return((Absis(P1)==Absis(P2)) && (Ordinat(P1)==Ordinat(P2)));
}

boolean NEQ (POINT P1, POINT P2) {
    /* ALGORITMA */
    return((Absis(P1)!=Absis(P2)) && (Ordinat(P1)!=Ordinat(P2)));
}

boolean IsOrigin (POINT P) {
    /* ALGORITMA */
    return((Absis(P)==0) && (Ordinat(P)==0));
}

boolean IsOnSbX (POINT P) {
    /* ALGORITMA */
    return(Ordinat(P)==0);
}

boolean IsOnSbY (POINT P) {
    /* ALGORITMA */
    return(Absis(P)==0);
}

int Kuadran (POINT P) {
    /* ALGORITMA */
    if ((Absis(P)>0) && (Ordinat(P)>0)) {
        return(1);
    } else if ((Absis(P)<0) && (Ordinat(P)>0)) {
        return(2);
    } else if ((Absis(P)<0) && (Ordinat(P)<0)) {
        return(3);
    } else {
        return(4);
    }
}

POINT PlusDelta (POINT P, float deltaX, float deltaY) {
    /* ALGORITMA */
    return(MakePOINT(deltaX + Absis(P), deltaY + Ordinat(P)));
}

void Geser (POINT *P, float deltaX, float deltaY) {
    /* ALGORITMA */
    Absis(*P) += deltaX;
    Ordinat(*P) += deltaY;
}

float Jarak0 (POINT P) {
    /* KAMUS */
    float x,y;
    /* ALGORITMA */
    x = Absis(P);
    y = Ordinat(P);
    return(sqrtf((x*x)+(y*y)));
}

float Panjang (POINT P1, POINT P2) {
    /* KAMUS */
    float x,y;
    /* ALGORITMA */
    x = Absis(P1) - Absis(P2);
    y = Ordinat(P1) - Ordinat(P2);
    return(sqrtf((x*x)+(y*y)));
}